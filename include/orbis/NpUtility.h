#ifndef _SCE_NP_UTIL_H_
#define _SCE_NP_UTIL_H_

#include <stdint.h>
#include <orbis/_types/Np.h>

#ifdef __cplusplus 
extern "C" {
#endif

int32_t sceNpAppInfoIntAbortRequest(int32_t req_id);
int32_t sceNpAppInfoIntCheckAvailability(int32_t req_id, OrbisNpOnlineId* online_id, int32_t feature, OrbisNpTitleId* title_id, bool* is_available);
int32_t sceNpAppInfoIntCheckAvailabilityA(int32_t req_id, int32_t user_id, int32_t feature, OrbisNpTitleId* title_id, bool* is_available);
int32_t sceNpAppInfoIntCheckAvailabilityAll(int32_t req_id, OrbisNpOnlineId* online_id, int32_t feature, OrbisNpTitleId title_ids[], uint64_t title_id_num, bool* is_available);
int32_t sceNpAppInfoIntCheckAvailabilityAllA(int32_t req_id, int32_t user_id, int32_t feature, OrbisNpTitleId title_ids[], uint64_t title_id_num, bool* is_available);
int32_t sceNpAppInfoIntCheckServiceAvailability(int32_t req_id, OrbisNpOnlineId* online_id, int32_t feature, int32_t service_provider, OrbisNpTitleId* title_id, bool* is_available);
int32_t sceNpAppInfoIntCheckServiceAvailabilityA(int32_t req_id, int32_t user_id, int32_t feature, int32_t service_provider, OrbisNpTitleId* title_id, bool* is_available);
int32_t sceNpAppInfoIntCheckServiceAvailabilityAll(int32_t req_id, OrbisNpOnlineId* online_id, int32_t feature, int32_t service_provider, OrbisNpTitleId title_ids[], uint64_t title_id_num, bool* is_available);
int32_t sceNpAppInfoIntCheckServiceAvailabilityAllA(int32_t req_id, int32_t user_id, int32_t feature, int32_t service_provider, OrbisNpTitleId title_ids[], uint64_t title_id_num, bool* is_available);
int32_t sceNpAppInfoIntCreateRequest(int32_t* req_id);
int32_t sceNpAppInfoIntDestroyRequest(int32_t req_id);
int32_t sceNpAppLaunchLinkIntAbortRequest(int32_t req_id);
int32_t sceNpAppLaunchLinkIntCreateRequest(int32_t user_id, OrbisNpTitleId* title_id, int32_t* req_id);
int32_t sceNpAppLaunchLinkIntDestroyRequest(int32_t req_id);
int32_t sceNpAppLaunchLinkIntGetCompatibleTitleIdList(int32_t req_id, OrbisNpTitleId title_ids[], uint64_t id_num);
int32_t sceNpAppLaunchLinkIntGetCompatibleTitleIdNum(int32_t req_id, uint64_t* id_num);
int32_t sceNpAppLaunchLink2IntAbortRequest(int32_t req_id);
int32_t sceNpAppLaunchLink2IntCreateRequest(int32_t user_id, OrbisNpTitleId* title_id, int32_t* req_id);
int32_t sceNpAppLaunchLink2IntDestroyRequest(int32_t req_id);
int32_t sceNpAppLaunchLink2IntGetCompatibleTitleIdList(int32_t req_id, OrbisNpTitleId title_ids[], uint64_t id_num);
int32_t sceNpAppLaunchLink2IntGetCompatibleTitleIdNum(int32_t req_id, uint64_t* id_num);
void sceNpBandwidthTestAbort();
void sceNpBandwidthTestGetStatus();
void sceNpBandwidthTestInitStart();
void sceNpBandwidthTestShutdown();
void sceNpBandwidthTestShutdownInt();
void sceNpLookupAbortRequest();
void sceNpLookupCreateAsyncRequest();
void sceNpLookupCreateRequest();
void sceNpLookupCreateTitleCtx();
void sceNpLookupCreateTitleCtxA();
void sceNpLookupDeleteRequest();
void sceNpLookupDeleteTitleCtx();
void sceNpLookupNpId();
void sceNpLookupPollAsync();
void sceNpLookupSetTimeout();
void sceNpLookupWaitAsync();
int32_t sceNpServiceChecker2IntAbortRequest(int32_t req_id);
int32_t sceNpServiceChecker2IntCreateRequest(int32_t* req_id);
int32_t sceNpServiceChecker2IntDestroyRequest(int32_t req_id);
int32_t sceNpServiceChecker2IntGetServiceAvailability(int32_t req_id, OrbisNpOnlineId* online_id, OrbisNpServiceChecker2FlagArray* flags);
int32_t sceNpServiceChecker2IntGetServiceAvailabilityA(int32_t req_id, int32_t user_id, OrbisNpServiceChecker2FlagArray* flags);
int32_t sceNpServiceChecker2IntIsSetServiceType(OrbisNpServiceChecker2FlagArray* flags, int32_t service_type);
int32_t sceNpServiceCheckerIntAbortRequest(int32_t req_id);
int32_t sceNpServiceCheckerIntCreateRequest(OrbisNpOnlineId* online_id, int32_t* req_id);
int32_t sceNpServiceCheckerIntDestroyRequest(int32_t req_id);
int32_t sceNpServiceCheckerIntGetAvailability(int32_t req_id, char* service_name, bool* is_available);
int32_t sceNpServiceCheckerIntGetAvailabilityList(int32_t req_id, char* service_names[], uint64_t service_names_num, uint8_t is_available[]);
int32_t sceNpServiceCheckerIntIsCached(int32_t req_id, bool* is_cached);
int32_t sceNpTitleMetadataIntAbortRequest(int32_t request_id);
int32_t sceNpTitleMetadataIntCreateRequest();
int32_t sceNpTitleMetadataIntDeleteRequest(int32_t request_id);
int32_t sceNpTitleMetadataIntGetInfo(int32_t request_id, char* title_id, OrbisNpTitleMetadataInfo* info);
void sceNpUtilityInit();
void sceNpUtilityTerm();
void sceNpWordFilterAbortRequest();
void sceNpWordFilterCensorComment();
void sceNpWordFilterCreateAsyncRequest();
void sceNpWordFilterCreateRequest();
void sceNpWordFilterCreateTitleCtx();
void sceNpWordFilterCreateTitleCtxA();
void sceNpWordFilterDeleteRequest();
void sceNpWordFilterDeleteTitleCtx();
void sceNpWordFilterPollAsync();
void sceNpWordFilterSanitizeComment();
void sceNpWordFilterSetTimeout();
void sceNpWordFilterWaitAsync();

#ifdef __cplusplus
}
#endif

#endif
