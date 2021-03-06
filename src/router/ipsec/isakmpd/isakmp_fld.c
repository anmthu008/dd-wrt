/* DO NOT EDIT-- this file is automatically generated.  */

#include "sysdep.h"

#include "constants.h"
#include "field.h"
#include "isakmp_fld.h"
#include "isakmp_num.h"
#include "ipsec_num.h"





struct field isakmp_hdr_fld[] = {
  { "ICOOKIE", 0, 8, raw, 0 }, 
  { "RCOOKIE", 8, 8, raw, 0 }, 
  { "NEXT_PAYLOAD", 16, 1, cst, isakmp_hdr_next_payload_maps }, 
  { "VERSION", 17, 1, num, 0 }, 
  { "EXCH_TYPE", 18, 1, cst, isakmp_hdr_exch_type_maps }, 
  { "FLAGS", 19, 1, mask, isakmp_hdr_flags_maps }, 
  { "MESSAGE_ID", 20, 4, raw, 0 }, 
  { "LENGTH", 24, 4, num, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_hdr_next_payload_maps[] = { isakmp_payload_cst,0 };
struct constant_map *isakmp_hdr_flags_maps[] = { isakmp_flags_cst,0 };
struct constant_map *isakmp_hdr_exch_type_maps[] = { ike_exch_cst,isakmp_exch_cst,0 };

struct field isakmp_gen_fld[] = {
  { "NEXT_PAYLOAD", 0, 1, cst, isakmp_gen_next_payload_maps }, 
  { "RESERVED", 1, 1, ign, 0 }, 
  { "LENGTH", 2, 2, num, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_gen_next_payload_maps[] = { isakmp_payload_cst,0 };

struct field isakmp_attr_fld[] = {
  { "TYPE", 0, 2, num, isakmp_attr_type_maps }, 
  { "LENGTH_VALUE", 2, 2, num, 0 }, 
  { "VALUE", 4, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_attr_type_maps[] = { ike_attr_cst,ipsec_attr_cst,0 };

struct field isakmp_sa_fld[] = {
  { "DOI", 4, 4, num, isakmp_sa_doi_maps }, 
  { "SIT", 8, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_sa_doi_maps[] = { isakmp_doi_cst,ipsec_doi_cst,0 };

struct field isakmp_prop_fld[] = {
  { "NO", 4, 1, num, 0 }, 
  { "PROTO", 5, 1, cst, isakmp_prop_proto_maps }, 
  { "SPI_SZ", 6, 1, num, 0 }, 
  { "NTRANSFORMS", 7, 1, num, 0 }, 
  { "SPI", 8, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_prop_proto_maps[] = { isakmp_proto_cst,ipsec_proto_cst,0 };

struct field isakmp_transform_fld[] = {
  { "NO", 4, 1, num, 0 }, 
  { "ID", 5, 1, num, 0 }, 
  { "RESERVED", 6, 2, ign, 0 }, 
  { "SA_ATTRS", 8, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};


struct field isakmp_ke_fld[] = {
  { "DATA", 4, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};


struct field isakmp_id_fld[] = {
  { "TYPE", 4, 1, num, 0 }, 
  { "DOI_DATA", 5, 3, raw, 0 }, 
  { "DATA", 8, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};


struct field isakmp_cert_fld[] = {
  { "ENCODING", 4, 1, cst, isakmp_cert_encoding_maps }, 
  { "DATA", 5, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_cert_encoding_maps[] = { isakmp_certenc_cst,0 };

struct field isakmp_certreq_fld[] = {
  { "TYPE", 4, 1, cst, isakmp_certreq_type_maps }, 
  { "AUTHORITY", 5, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_certreq_type_maps[] = { isakmp_certenc_cst,0 };

struct field isakmp_hash_fld[] = {
  { "DATA", 4, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};


struct field isakmp_sig_fld[] = {
  { "DATA", 4, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};


struct field isakmp_nonce_fld[] = {
  { "DATA", 4, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};


struct field isakmp_notify_fld[] = {
  { "DOI", 4, 4, cst, isakmp_notify_doi_maps }, 
  { "PROTO", 8, 1, cst, isakmp_notify_proto_maps }, 
  { "SPI_SZ", 9, 1, num, 0 }, 
  { "MSG_TYPE", 10, 2, cst, isakmp_notify_msg_type_maps }, 
  { "SPI", 12, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_notify_msg_type_maps[] = { isakmp_notify_cst,ipsec_notify_cst,0 };
struct constant_map *isakmp_notify_proto_maps[] = { isakmp_proto_cst,0 };
struct constant_map *isakmp_notify_doi_maps[] = { isakmp_doi_cst,ipsec_doi_cst,0 };

struct field isakmp_delete_fld[] = {
  { "DOI", 4, 4, cst, isakmp_delete_doi_maps }, 
  { "PROTO", 8, 1, cst, isakmp_delete_proto_maps }, 
  { "SPI_SZ", 9, 1, num, 0 }, 
  { "NSPIS", 10, 2, num, 0 }, 
  { "SPI", 12, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_delete_proto_maps[] = { isakmp_proto_cst,0 };
struct constant_map *isakmp_delete_doi_maps[] = { isakmp_doi_cst,ipsec_doi_cst,0 };

struct field isakmp_vendor_fld[] = {
  { "ID", 4, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};


struct field isakmp_attribute_fld[] = {
  { "TYPE", 4, 1, num, isakmp_attribute_type_maps }, 
  { "RESERVED", 5, 1, ign, 0 }, 
  { "ID", 6, 2, num, 0 }, 
  { "ATTRS", 8, 0, raw, 0 }, 
  { 0, 0, 0, 0, 0 }
};

struct constant_map *isakmp_attribute_type_maps[] = { isakmp_cfg_cst,0 };
