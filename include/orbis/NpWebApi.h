#ifndef _SCE_NP_WEB_API_H_
#define _SCE_NP_WEB_API_H_

#include <stdint.h>
#include <orbis/_types/Np.h>

#ifdef __cplusplus 
extern "C" {
#endif

void sceNpWebApiAbortHandle();
int32_t sceNpWebApiAbortRequest(int64_t request_id);
int32_t sceNpWebApiAddHttpRequestHeader(int64_t request_id, char* field_name, char* header_value);
void sceNpWebApiAddMultipartPart();
void sceNpWebApiCheckTimeout();
void sceNpWebApiClearAllUnusedConnection();
void sceNpWebApiClearUnusedConnection();
int32_t sceNpWebApiCreateContext(int32_t lib_ctx_id, OrbisNpOnlineId* online_id);
int32_t sceNpWebApiCreateContextA(int32_t lib_ctx_id, int32_t user_id);
int32_t sceNpWebApiCreateExtdPushEventFilter(int32_t lib_ctx_id, int32_t handle_id, char* np_service_name, uint32_t np_service_label, OrbisNpWebApiExtdPushEventFilterParameter filter_param[], uint64_t filter_param_num);
int32_t sceNpWebApiCreateHandle(int32_t lib_ctx_id);
void sceNpWebApiCreateMultipartRequest();
int32_t sceNpWebApiCreatePushEventFilter(int32_t lib_ctx_id, OrbisNpWebApiPushEventDataType data_type[], uint64_t data_type_num);
int32_t sceNpWebApiCreateRequest(int32_t user_ctx_id, char* api_group, char* path, OrbisNpWebApiHttpMethod method, OrbisNpWebApiContentParameter* param, int64_t* request_id);
void sceNpWebApiCreateServicePushEventFilter();
int32_t sceNpWebApiDeleteContext(int32_t user_ctx_id);
int32_t sceNpWebApiDeleteExtdPushEventFilter(int32_t lib_ctx_id, int32_t filter_id);
int32_t sceNpWebApiDeleteHandle(int32_t lib_ctx_id, int32_t handle_id);
int32_t sceNpWebApiDeletePushEventFilter(int32_t lib_ctx_id, int32_t filter_id);
int32_t sceNpWebApiDeleteRequest(int64_t request_id);
int32_t sceNpWebApiDeleteServicePushEventFilter(int32_t lib_ctx_id, int32_t filter_id);
void sceNpWebApiGetConnectionStats();
int32_t sceNpWebApiGetErrorCode(int32_t http_status_code, void* error_json, uint64_t error_json_size);
void sceNpWebApiGetHttpResponseHeaderValue();
void sceNpWebApiGetHttpResponseHeaderValueLength();
int32_t sceNpWebApiGetHttpStatusCode(int64_t request_id, int32_t* status_code);
void sceNpWebApiGetMemoryPoolStats();
int32_t sceNpWebApiInitialize(int32_t libhttp_ctx_id, uint64_t pool_size);
int32_t sceNpWebApiIntCreateCtxIndExtdPushEventFilter(int32_t lib_ctx_id, int32_t handle_id, OrbisNpWebApiExtdPushEventFilterParameter filter_param[], uint64_t filter_param_num);
int32_t sceNpWebApiIntCreateServicePushEventFilter(int32_t lib_ctx_id, int32_t handle_id, char* np_service_name, uint32_t np_service_label, OrbisNpWebApiPushEventDataType data_type[], uint64_t data_type_num);
int32_t sceNpWebApiIntInitialize(OrbisNpWebApiInitializeParameter* param);
int32_t sceNpWebApiReadData(int64_t request_id, void* data, uint64_t size);
int32_t sceNpWebApiRegisterExtdPushEventCallback(int32_t user_ctx_id, int32_t filter_id, OrbisNpWebApiExtdPushEventCallback cb_func, void* user_arg);
int32_t sceNpWebApiRegisterExtdPushEventCallbackA(int32_t user_ctx_id, int32_t filter_id, OrbisNpWebApiExtdPushEventCallbackA cb_func, void* user_arg);
void sceNpWebApiRegisterNotificationCallback();
int32_t sceNpWebApiRegisterPushEventCallback(int32_t user_ctx_id, int32_t filter_id, OrbisNpWebApiPushEventCallback cb_func, void* user_arg);
int32_t sceNpWebApiRegisterServicePushEventCallback(int32_t user_ctx_id, int32_t filter_id, OrbisNpWebApiServicePushEventCallback cb_func, void* user_arg);
void sceNpWebApiSendMultipartRequest();
void sceNpWebApiSendMultipartRequest2();
int32_t sceNpWebApiSendRequest(int64_t request_id, void* data, uint64_t data_size);
int32_t sceNpWebApiSendRequest2(int64_t request_id, void* data, uint64_t data_size, OrbisNpWebApiResponseInformationOption* resp_info_option);
void sceNpWebApiSetHandleTimeout();
void sceNpWebApiSetMaxConnection();
void sceNpWebApiSetMultipartContentType();
void sceNpWebApiSetRequestTimeout();
int32_t sceNpWebApiTerminate(int32_t lib_ctx_id);
int32_t sceNpWebApiUnregisterExtdPushEventCallback(int32_t user_ctx_id, int32_t callback_id);
void sceNpWebApiUnregisterNotificationCallback();
int32_t sceNpWebApiUnregisterPushEventCallback(int32_t user_ctx_id, int32_t callback_id);
int32_t sceNpWebApiUnregisterServicePushEventCallback(int32_t user_ctx_id, int32_t callback_id);
void sceNpWebApiUtilityParseNpId();

#ifdef __cplusplus
}
#endif

#endif
