#ifndef _SCE_NP_WEB_API_2_H_
#define _SCE_NP_WEB_API_2_H_

#include <stdint.h>
#include <orbis/_types/Np.h>

#ifdef __cplusplus 
extern "C" {
#endif

int32_t sceNpWebApi2AbortRequest(int64_t request_id);
int32_t sceNpWebApi2AddHttpRequestHeader(int64_t request_id, char* field_name, char* value);
int32_t sceNpWebApi2CreateRequest(int32_t user_ctx_id, char* api_group, char* path, char* method, OrbisNpWebApi2ContentParameter* content_parameter, int64_t* request_id);
int32_t sceNpWebApi2CreateUserContext(int32_t lib_ctx_id, int32_t user_id);
int32_t sceNpWebApi2DeleteRequest(int64_t request_id);
int32_t sceNpWebApi2DeleteUserContext(int32_t user_ctx_id);
int32_t sceNpWebApi2IntPushEventCreateCtxIndFilter(int32_t lib_ctx_id, int32_t handle_id, OrbisNpWebApi2PushEventFilterParameter filter_param[], uint64_t filter_param_num);
int32_t sceNpWebApi2PushEventCreateHandle(int32_t lib_ctx_id);
int32_t sceNpWebApi2PushEventDeleteFilter(int32_t lib_ctx_id, int32_t filter_id);
int32_t sceNpWebApi2PushEventDeleteHandle(int32_t lib_ctx_id, int32_t handle_id);
int32_t sceNpWebApi2PushEventRegisterCallback(int32_t user_ctx_id, int32_t filter_id, OrbisNpWebApi2PushEventCallback cb_func, void* user_arg);
int32_t sceNpWebApi2PushEventUnregisterCallback(int32_t user_ctx_id, int32_t callback_id);
int32_t sceNpWebApi2ReadData(int64_t request_id, void* data, uint64_t size);
int32_t sceNpWebApi2SendRequest(int64_t request_id, void* data, uint64_t data_size, OrbisNpWebApi2ResponseInformationOption* resp_info_option);

#ifdef __cplusplus
}
#endif

#endif
