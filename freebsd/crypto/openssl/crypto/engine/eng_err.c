#include <machine/rtems-bsd-user-space.h>

/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/engineerr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA ENGINE_str_functs[] = {
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_DIGEST_UPDATE, 0), "digest_update"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_DYNAMIC_CTRL, 0), "dynamic_ctrl"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_DYNAMIC_GET_DATA_CTX, 0),
     "dynamic_get_data_ctx"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_DYNAMIC_LOAD, 0), "dynamic_load"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_DYNAMIC_SET_DATA_CTX, 0),
     "dynamic_set_data_ctx"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_ADD, 0), "ENGINE_add"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_BY_ID, 0), "ENGINE_by_id"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_CMD_IS_EXECUTABLE, 0),
     "ENGINE_cmd_is_executable"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_CTRL, 0), "ENGINE_ctrl"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_CTRL_CMD, 0), "ENGINE_ctrl_cmd"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_CTRL_CMD_STRING, 0),
     "ENGINE_ctrl_cmd_string"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_FINISH, 0), "ENGINE_finish"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_GET_CIPHER, 0),
     "ENGINE_get_cipher"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_GET_DIGEST, 0),
     "ENGINE_get_digest"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_GET_FIRST, 0),
     "ENGINE_get_first"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_GET_LAST, 0), "ENGINE_get_last"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_GET_NEXT, 0), "ENGINE_get_next"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_GET_PKEY_ASN1_METH, 0),
     "ENGINE_get_pkey_asn1_meth"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_GET_PKEY_METH, 0),
     "ENGINE_get_pkey_meth"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_GET_PREV, 0), "ENGINE_get_prev"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_INIT, 0), "ENGINE_init"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_LIST_ADD, 0), "engine_list_add"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_LIST_REMOVE, 0),
     "engine_list_remove"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_LOAD_PRIVATE_KEY, 0),
     "ENGINE_load_private_key"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_LOAD_PUBLIC_KEY, 0),
     "ENGINE_load_public_key"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_LOAD_SSL_CLIENT_CERT, 0),
     "ENGINE_load_ssl_client_cert"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_NEW, 0), "ENGINE_new"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_PKEY_ASN1_FIND_STR, 0),
     "ENGINE_pkey_asn1_find_str"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_REMOVE, 0), "ENGINE_remove"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_SET_DEFAULT_STRING, 0),
     "ENGINE_set_default_string"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_SET_ID, 0), "ENGINE_set_id"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_SET_NAME, 0), "ENGINE_set_name"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_TABLE_REGISTER, 0),
     "engine_table_register"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_UNLOCKED_FINISH, 0),
     "engine_unlocked_finish"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_ENGINE_UP_REF, 0), "ENGINE_up_ref"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_INT_CLEANUP_ITEM, 0),
     "int_cleanup_item"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_INT_CTRL_HELPER, 0), "int_ctrl_helper"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_INT_ENGINE_CONFIGURE, 0),
     "int_engine_configure"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_INT_ENGINE_MODULE_INIT, 0),
     "int_engine_module_init"},
    {ERR_PACK(ERR_LIB_ENGINE, ENGINE_F_OSSL_HMAC_INIT, 0), "ossl_hmac_init"},
    {0, NULL}
};

static const ERR_STRING_DATA ENGINE_str_reasons[] = {
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_ALREADY_LOADED), "already loaded"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_ARGUMENT_IS_NOT_A_NUMBER),
    "argument is not a number"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_CMD_NOT_EXECUTABLE),
    "cmd not executable"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_COMMAND_TAKES_INPUT),
    "command takes input"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_COMMAND_TAKES_NO_INPUT),
    "command takes no input"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_CONFLICTING_ENGINE_ID),
    "conflicting engine id"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_CTRL_COMMAND_NOT_IMPLEMENTED),
    "ctrl command not implemented"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_DSO_FAILURE), "DSO failure"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_DSO_NOT_FOUND), "dso not found"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_ENGINES_SECTION_ERROR),
    "engines section error"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_ENGINE_CONFIGURATION_ERROR),
    "engine configuration error"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_ENGINE_IS_NOT_IN_LIST),
    "engine is not in the list"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_ENGINE_SECTION_ERROR),
    "engine section error"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_FAILED_LOADING_PRIVATE_KEY),
    "failed loading private key"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_FAILED_LOADING_PUBLIC_KEY),
    "failed loading public key"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_FINISH_FAILED), "finish failed"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_ID_OR_NAME_MISSING),
    "'id' or 'name' missing"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_INIT_FAILED), "init failed"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_INTERNAL_LIST_ERROR),
    "internal list error"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_INVALID_ARGUMENT),
    "invalid argument"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_INVALID_CMD_NAME),
    "invalid cmd name"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_INVALID_CMD_NUMBER),
    "invalid cmd number"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_INVALID_INIT_VALUE),
    "invalid init value"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_INVALID_STRING), "invalid string"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_NOT_INITIALISED), "not initialised"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_NOT_LOADED), "not loaded"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_NO_CONTROL_FUNCTION),
    "no control function"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_NO_INDEX), "no index"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_NO_LOAD_FUNCTION),
    "no load function"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_NO_REFERENCE), "no reference"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_NO_SUCH_ENGINE), "no such engine"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_UNIMPLEMENTED_CIPHER),
    "unimplemented cipher"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_UNIMPLEMENTED_DIGEST),
    "unimplemented digest"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_UNIMPLEMENTED_PUBLIC_KEY_METHOD),
    "unimplemented public key method"},
    {ERR_PACK(ERR_LIB_ENGINE, 0, ENGINE_R_VERSION_INCOMPATIBILITY),
    "version incompatibility"},
    {0, NULL}
};

#endif

int ERR_load_ENGINE_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(ENGINE_str_functs[0].error) == NULL) {
        ERR_load_strings_const(ENGINE_str_functs);
        ERR_load_strings_const(ENGINE_str_reasons);
    }
#endif
    return 1;
}
