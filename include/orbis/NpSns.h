#ifndef _SCE_NP_SNS_H_
#define _SCE_NP_SNS_H_

#include <stdint.h>
#include <orbis/_types/Np.h>

#ifdef __cplusplus 
extern "C" {
#endif

void sceNpSnsFacebookAbortRequest();
void sceNpSnsFacebookCreateRequest();
void sceNpSnsFacebookDeleteRequest();
void sceNpSnsFacebookGetAccessToken();
int32_t sceNpSnsIntAbortRequest(int32_t req_id);
void sceNpSnsIntCheckServiceAvailability();
int32_t sceNpSnsIntCreateRequest();
int32_t sceNpSnsIntDeleteRequest(int32_t req_id);
int32_t sceNpSnsIntFbGetGameAccessToken(int32_t req_id, int32_t user_id, char* title_id, char* proxied_app_id, char* permissions, int32_t* is_missing_permissions, OrbisNpSnsFbMissingPermission* missing_permissions, OrbisNpSnsFacebookAccessTokenResult* result);
int32_t sceNpSnsIntFbGetGameAccessTokenAllowed(int32_t req_id, int32_t user_id, char* title_id, char* proxied_app_id, char* permissions_allowed, OrbisNpSnsFacebookAccessTokenResult* result);
int32_t sceNpSnsIntFbGetSystemAccessToken(int32_t req_id, int32_t user_id, OrbisNpSnsFacebookAccessTokenResult* result);
int32_t sceNpSnsIntFbGetTitleInfo(OrbisNpTitleId* np_title_id, int32_t* system_lang, OrbisNpSnsFbTitleName* title_name);
int32_t sceNpSnsIntLinkedStatus(int32_t req_id, int32_t user_id, OrbisNpSnsServiceType service_type, int32_t* linked_account);
void sceNpSnsIntTest();
int32_t sceNpSnsIntTwGetSystemAccessToken(int32_t req_id, int32_t user_id, OrbisNpSnsTwitterAccessToken* result);
int32_t sceNpSnsIntYtGetAccessToken(int32_t req_id, int32_t user_id, char* client_id, char* scope, int32_t* is_prompt_for_permissions, OrbisNpSnsYtUrlForPermission* url_for_permission, OrbisNpSnsYouTubeAccessTokenResult* result);
int32_t sceNpSnsIntYtRefreshMasterToken(int32_t req_id, int32_t user_id, char* code);

#ifdef __cplusplus
}
#endif

#endif
