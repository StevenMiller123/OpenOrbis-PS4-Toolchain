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
void sceNpServiceChecker2IntAbortRequest();
void sceNpServiceChecker2IntCreateRequest();
void sceNpServiceChecker2IntDestroyRequest();
void sceNpServiceChecker2IntGetServiceAvailability();
void sceNpServiceChecker2IntIsSetServiceType();
void sceNpServiceCheckerIntAbortRequest();
void sceNpServiceCheckerIntCreateRequest();
void sceNpServiceCheckerIntDestroyRequest();
void sceNpServiceCheckerIntGetAvailability();
void sceNpServiceCheckerIntGetAvailabilityList();
void sceNpServiceCheckerIntIsCached();
void sceNpTitleMetadataIntAbortRequest();
void sceNpTitleMetadataIntCreateRequest();
void sceNpTitleMetadataIntDeleteRequest();
void sceNpTitleMetadataIntGetInfo();
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
