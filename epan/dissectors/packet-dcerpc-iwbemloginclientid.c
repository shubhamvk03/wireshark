/* DO NOT EDIT
	This file was automatically generated by Pidl
	from iwbemloginclientid.idl and iwbemloginclientid.cnf.

	Pidl is a perl based IDL compiler for DCE/RPC idl files.
	It is maintained by the Samba team, not the Wireshark team.
	Instructions on how to download and install Pidl can be
	found at https://wiki.wireshark.org/Pidl
*/


#include "config.h"
#include <string.h>
#include <epan/packet.h>
#include <epan/tfs.h>

#include "packet-dcerpc.h"
#include "packet-dcerpc-nt.h"
#include "packet-windows-common.h"
#include "packet-dcerpc-iwbemloginclientid.h"
void proto_register_dcerpc_IWbemLoginClientID(void);
void proto_reg_handoff_dcerpc_IWbemLoginClientID(void);

/* Ett declarations */
static int ett_IWbemLoginClientID_SetClientInfo_orpcthis;
static int ett_IWbemLoginClientID_SetClientInfo_orpcthat;
static int ett_dcerpc_IWbemLoginClientID;
static int ett_IWbemLoginClientID_ORPCTHIS;
static int ett_IWbemLoginClientID_ORPCTHAT;


/* Header field declarations */
static int hf_IWbemLoginClientID_SetClientInfo_lClientProcId;
static int hf_IWbemLoginClientID_SetClientInfo_lReserved;
static int hf_IWbemLoginClientID_SetClientInfo_orpcthat;
static int hf_IWbemLoginClientID_SetClientInfo_orpcthis;
static int hf_IWbemLoginClientID_SetClientInfo_wszClientMachine;
static int hf_IWbemLoginClientID_opnum;
static int hf_IWbemLoginClientID_werror;

static int proto_dcerpc_IWbemLoginClientID;
/* Version information */


static e_guid_t uuid_dcerpc_IWbemLoginClientID = {
	0xd4781cd6, 0xe5d3, 0x44df,
	{ 0xad, 0x94, 0x93, 0x0e, 0xfe, 0x48, 0xa8, 0x87 }
};
static uint16_t ver_dcerpc_IWbemLoginClientID = 0;

static int IWbemLoginClientID_dissect_element_SetClientInfo_orpcthis(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_);
static int IWbemLoginClientID_dissect_element_SetClientInfo_wszClientMachine(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_);
static int IWbemLoginClientID_dissect_element_SetClientInfo_wszClientMachine_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_);
static int IWbemLoginClientID_dissect_element_SetClientInfo_lClientProcId(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_);
static int IWbemLoginClientID_dissect_element_SetClientInfo_lReserved(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_);
static int IWbemLoginClientID_dissect_element_SetClientInfo_orpcthat(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_);
static int IWbemLoginClientID_dissect_element_SetClientInfo_orpcthat_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_);
	#include "packet-dcom.h"
/* SetClientInfo */
static int
IWbemLoginClientID_dissect_element_SetClientInfo_orpcthis(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	proto_item *sub_item;
	proto_tree *sub_tree;
	sub_item = proto_tree_add_item(tree, hf_IWbemLoginClientID_SetClientInfo_orpcthis, tvb, offset, 0, ENC_NA);
	sub_tree = proto_item_add_subtree(sub_item, ett_IWbemLoginClientID_SetClientInfo_orpcthis);
	offset = dissect_dcom_this(tvb, offset, pinfo, sub_tree, di, drep);
	return offset;
}
static int
IWbemLoginClientID_dissect_element_SetClientInfo_orpcthat_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	proto_item *sub_item;
	proto_tree *sub_tree;
	sub_item = proto_tree_add_item(tree, hf_IWbemLoginClientID_SetClientInfo_orpcthat, tvb, offset, 0, ENC_NA);
	sub_tree = proto_item_add_subtree(sub_item, ett_IWbemLoginClientID_SetClientInfo_orpcthat);
	offset = dissect_dcom_that(tvb, offset, pinfo, sub_tree, di, drep);
	return offset;
}


/* IDL: struct { */
/* IDL: } */

int
IWbemLoginClientID_dissect_struct_ORPCTHIS(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_, int hf_index _U_, uint32_t param _U_)
{
	proto_item *item = NULL;
	int old_offset;

	old_offset = offset;

	if (parent_tree) {
		item = proto_tree_add_item(parent_tree, hf_index, tvb, offset, -1, ENC_NA);
	}


	proto_item_set_len(item, offset-old_offset);


	return offset;
}


/* IDL: struct { */
/* IDL: } */

int
IWbemLoginClientID_dissect_struct_ORPCTHAT(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_, int hf_index _U_, uint32_t param _U_)
{
	proto_item *item = NULL;
	int old_offset;

	old_offset = offset;

	if (parent_tree) {
		item = proto_tree_add_item(parent_tree, hf_index, tvb, offset, -1, ENC_NA);
	}


	proto_item_set_len(item, offset-old_offset);


	return offset;
}

/* IDL: WERROR iwbemloginclientid_opnum0( */
/* IDL:  */
/* IDL: ); */

static int
IWbemLoginClientID_dissect_iwbemloginclientid_opnum0_response(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	uint32_t status;

	di->dcerpc_procedure_name="iwbemloginclientid_opnum0";
	offset = dissect_ndr_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientID_werror, &status);

	if (status != 0)
		col_append_fstr(pinfo->cinfo, COL_INFO, ", Error: %s", val_to_str_ext(status, &WERR_errors_ext, "Unknown DOS error 0x%08x"));

	return offset;
}

static int
IWbemLoginClientID_dissect_iwbemloginclientid_opnum0_request(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	di->dcerpc_procedure_name="iwbemloginclientid_opnum0";
	return offset;
}

/* IDL: WERROR iwbemloginclientid_opnum1( */
/* IDL:  */
/* IDL: ); */

static int
IWbemLoginClientID_dissect_iwbemloginclientid_opnum1_response(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	uint32_t status;

	di->dcerpc_procedure_name="iwbemloginclientid_opnum1";
	offset = dissect_ndr_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientID_werror, &status);

	if (status != 0)
		col_append_fstr(pinfo->cinfo, COL_INFO, ", Error: %s", val_to_str_ext(status, &WERR_errors_ext, "Unknown DOS error 0x%08x"));

	return offset;
}

static int
IWbemLoginClientID_dissect_iwbemloginclientid_opnum1_request(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	di->dcerpc_procedure_name="iwbemloginclientid_opnum1";
	return offset;
}

/* IDL: WERROR iwbemloginclientid_opnum2( */
/* IDL:  */
/* IDL: ); */

static int
IWbemLoginClientID_dissect_iwbemloginclientid_opnum2_response(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	uint32_t status;

	di->dcerpc_procedure_name="iwbemloginclientid_opnum2";
	offset = dissect_ndr_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientID_werror, &status);

	if (status != 0)
		col_append_fstr(pinfo->cinfo, COL_INFO, ", Error: %s", val_to_str_ext(status, &WERR_errors_ext, "Unknown DOS error 0x%08x"));

	return offset;
}

static int
IWbemLoginClientID_dissect_iwbemloginclientid_opnum2_request(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	di->dcerpc_procedure_name="iwbemloginclientid_opnum2";
	return offset;
}

static int
IWbemLoginClientID_dissect_element_SetClientInfo_wszClientMachine(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	offset = dissect_ndr_toplevel_pointer(tvb, offset, pinfo, tree, di, drep, IWbemLoginClientID_dissect_element_SetClientInfo_wszClientMachine_, NDR_POINTER_UNIQUE, "Pointer to WszClientMachine (uint16)",hf_IWbemLoginClientID_SetClientInfo_wszClientMachine);

	return offset;
}

static int
IWbemLoginClientID_dissect_element_SetClientInfo_wszClientMachine_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	char *data;

	offset = dissect_ndr_cvstring(tvb, offset, pinfo, tree, di, drep, sizeof(uint16_t), hf_IWbemLoginClientID_SetClientInfo_wszClientMachine, false, &data);
	proto_item_append_text(tree, ": %s", data);

	return offset;
}

static int
IWbemLoginClientID_dissect_element_SetClientInfo_lClientProcId(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	offset = PIDL_dissect_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientID_SetClientInfo_lClientProcId, 0);

	return offset;
}

static int
IWbemLoginClientID_dissect_element_SetClientInfo_lReserved(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	offset = PIDL_dissect_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientID_SetClientInfo_lReserved, 0);

	return offset;
}

static int
IWbemLoginClientID_dissect_element_SetClientInfo_orpcthat(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	offset = dissect_ndr_toplevel_pointer(tvb, offset, pinfo, tree, di, drep, IWbemLoginClientID_dissect_element_SetClientInfo_orpcthat_, NDR_POINTER_REF, "Pointer to Orpcthat (ORPCTHAT)",hf_IWbemLoginClientID_SetClientInfo_orpcthat);

	return offset;
}

/* IDL: WERROR SetClientInfo( */
/* IDL: [in] ORPCTHIS orpcthis, */
/* IDL: [charset(UTF16)] [in] [unique(1)] uint16 *wszClientMachine, */
/* IDL: [in] uint32 lClientProcId, */
/* IDL: [in] uint32 lReserved, */
/* IDL: [out] [ref] ORPCTHAT *orpcthat */
/* IDL: ); */

static int
IWbemLoginClientID_dissect_SetClientInfo_response(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	uint32_t status;

	di->dcerpc_procedure_name="SetClientInfo";
	offset = IWbemLoginClientID_dissect_element_SetClientInfo_orpcthat(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);

	offset = dissect_ndr_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientID_werror, &status);

	if (status != 0)
		col_append_fstr(pinfo->cinfo, COL_INFO, ", Error: %s", val_to_str_ext(status, &WERR_errors_ext, "Unknown DOS error 0x%08x"));

	return offset;
}

static int
IWbemLoginClientID_dissect_SetClientInfo_request(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, uint8_t *drep _U_)
{
	di->dcerpc_procedure_name="SetClientInfo";
	offset = IWbemLoginClientID_dissect_element_SetClientInfo_orpcthis(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	offset = IWbemLoginClientID_dissect_element_SetClientInfo_wszClientMachine(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	offset = IWbemLoginClientID_dissect_element_SetClientInfo_lClientProcId(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	offset = IWbemLoginClientID_dissect_element_SetClientInfo_lReserved(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	return offset;
}


static const dcerpc_sub_dissector IWbemLoginClientID_dissectors[] = {
	{ 0, "iwbemloginclientid_opnum0",
	   IWbemLoginClientID_dissect_iwbemloginclientid_opnum0_request, IWbemLoginClientID_dissect_iwbemloginclientid_opnum0_response},
	{ 1, "iwbemloginclientid_opnum1",
	   IWbemLoginClientID_dissect_iwbemloginclientid_opnum1_request, IWbemLoginClientID_dissect_iwbemloginclientid_opnum1_response},
	{ 2, "iwbemloginclientid_opnum2",
	   IWbemLoginClientID_dissect_iwbemloginclientid_opnum2_request, IWbemLoginClientID_dissect_iwbemloginclientid_opnum2_response},
	{ 3, "SetClientInfo",
	   IWbemLoginClientID_dissect_SetClientInfo_request, IWbemLoginClientID_dissect_SetClientInfo_response},
	{ 0, NULL, NULL, NULL }
};

void proto_register_dcerpc_IWbemLoginClientID(void)
{
	static hf_register_info hf[] = {
	{ &hf_IWbemLoginClientID_SetClientInfo_lClientProcId,
	  { "LClientProcId", "IWbemLoginClientID.SetClientInfo.lClientProcId", FT_UINT32, BASE_DEC, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientID_SetClientInfo_lReserved,
	  { "LReserved", "IWbemLoginClientID.SetClientInfo.lReserved", FT_UINT32, BASE_DEC, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientID_SetClientInfo_orpcthat,
	  { "Orpcthat", "IWbemLoginClientID.SetClientInfo.orpcthat", FT_NONE, BASE_NONE, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientID_SetClientInfo_orpcthis,
	  { "Orpcthis", "IWbemLoginClientID.SetClientInfo.orpcthis", FT_NONE, BASE_NONE, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientID_SetClientInfo_wszClientMachine,
	  { "WszClientMachine", "IWbemLoginClientID.SetClientInfo.wszClientMachine", FT_STRING, BASE_NONE, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientID_opnum,
	  { "Operation", "IWbemLoginClientID.opnum", FT_UINT16, BASE_DEC, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientID_werror,
	  { "Windows Error", "IWbemLoginClientID.werror", FT_UINT32, BASE_HEX|BASE_EXT_STRING, &WERR_errors_ext, 0, NULL, HFILL }},
	};


	static int *ett[] = {
		&ett_IWbemLoginClientID_SetClientInfo_orpcthis,
		&ett_IWbemLoginClientID_SetClientInfo_orpcthat,
		&ett_dcerpc_IWbemLoginClientID,
		&ett_IWbemLoginClientID_ORPCTHIS,
		&ett_IWbemLoginClientID_ORPCTHAT,
	};

	proto_dcerpc_IWbemLoginClientID = proto_register_protocol("IWBEMLOGINCLIENTID (pidl)", "IWBEMLOGINCLIENTID", "IWbemLoginClientID");
	proto_register_field_array(proto_dcerpc_IWbemLoginClientID, hf, array_length (hf));
	proto_register_subtree_array(ett, array_length(ett));
}

void proto_reg_handoff_dcerpc_IWbemLoginClientID(void)
{
	dcerpc_init_uuid(proto_dcerpc_IWbemLoginClientID, ett_dcerpc_IWbemLoginClientID,
		&uuid_dcerpc_IWbemLoginClientID, ver_dcerpc_IWbemLoginClientID,
		IWbemLoginClientID_dissectors, hf_IWbemLoginClientID_opnum);
}
