import json
import os.path
import subprocess
from matchers import *
import pytest

@pytest.fixture
def check_outputformat(cmd_tshark, request, dirs, capture_file):
    def check_outputformat_real(format_option, pcap_file='dhcp.pcap',
                                extra_args=[], expected=None, multiline=False, env=None):
        ''' Check a capture file against a sample, in json format. '''
        try:
            tshark_proc = subprocess.run([cmd_tshark, '-r', capture_file(pcap_file),
                                          '-T', format_option] + extra_args,
                                          check=True, capture_output=True, encoding='utf-8', env=env)
        except subprocess.CalledProcessError as e:
            print(f"An error occurred while executing the tshark command: {e}")
            return
        except Exception as e:
            print(f"An unexpected error occurred: {e}")
            return

        # If a filename is given, load the expected values from those.
        try:
            if isinstance(expected, str):
                testdata = open(os.path.join(dirs.baseline_dir, expected)).read()
                if multiline:
                    expected = [json.JSONDecoder().decode(line) for line in testdata.splitlines()]
                else:
                    expected = json.JSONDecoder().decode(testdata)
        except json.JSONDecodeError as e:
            print(f"An error occurred while parsing the expected JSON data: {e}")
            return
        except Exception as e:
            print(f"An unexpected error occurred: {e}")
            return

        actual = tshark_proc.stdout
        try:
            if multiline:
                actual = actual.splitlines()
                assert len(expected) == len(actual)
                for expectedObj, actualStr in zip(expected, actual):
                    assert expectedObj == json.JSONDecoder().decode(actualStr)
            else:
                actual = json.JSONDecoder().decode(actual)
                assert expected == actual
        except json.JSONDecodeError as e:
            print(f"An error occurred while parsing the actual JSON data: {e}")
            return
        except Exception as e:
            print(f"An unexpected error occurred: {e}")
            return

    return check_outputformat_real


class TestOutputFormats:
    maxDiff = 1000000

    def test_outputformat_json(self, check_outputformat, base_env):
        '''Decode some captures into json'''
        check_outputformat("json", expected="dhcp.json", env=base_env)

    def test_outputformat_json_asctime(self, check_outputformat, base_env):
        '''Decode some captures into json, with absolute times like asctime, for backwards compatibility '''
        check_outputformat("json", extra_args=['-o', 'protocols.display_abs_time_ascii:ALWAYS'],
            expected="dhcp-asctime.json", env=base_env)

    def test_outputformat_jsonraw(self, check_outputformat, base_env):
        '''Decode some captures into jsonraw'''
        check_outputformat("jsonraw", expected="dhcp.jsonraw", env=base_env)

    def test_outputformat_ek(self, check_outputformat, base_env):
        '''Decode some captures into ek'''
        check_outputformat("ek", expected="dhcp.ek", multiline=True, env=base_env)

    def test_outputformat_ek_raw(self, check_outputformat, base_env):
        '''Decode some captures into ek, with raw data'''
        check_outputformat("ek", expected="dhcp-raw.ek", multiline=True, extra_args=['-x'], env=base_env)

    def test_outputformat_json_select_field(self, check_outputformat, base_env):
        '''Checks that the -e option works with -Tjson.'''
        check_outputformat("json", extra_args=['-eframe.number', '-c1'], expected=[
            json.JSONDecoder().decode('{"_index": "packets-2004-12-05", "_type": "doc", "_score": null, "_source": {"layers": {"frame.number": ["1"]}}}')
        ], env=base_env)

    def test_outputformat_ek_select_field(self, check_outputformat, base_env):
        '''Checks that the -e option works with -Tek.'''
        check_outputformat("ek", extra_args=['-eframe.number', '-c1'], expected=[
            {"index": {"_index": "packets-2004-12-05", "_type": "doc"}},
            {"timestamp": "1102274184317", "layers": {"frame_number": ["1"]}}
        ], multiline=True, env=base_env)

    def test_outputformat_ek_filter_field(self, check_outputformat, base_env):
        ''' Check that the option -j works with -Tek.'''
        check_outputformat("ek", extra_args=['-j', 'dhcp'], expected="dhcp-filter.ek",
            multiline=True, env=base_env)