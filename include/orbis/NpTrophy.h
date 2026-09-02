#ifndef _SCE_NP_TROPHY_H_
#define _SCE_NP_TROPHY_H_

#include <stdint.h>
#include <orbis/_types/Np.h>

#ifdef __cplusplus 
extern "C" {
#endif

void sceNpTrophyAbortHandle();
void sceNpTrophyCaptureScreenshot();
int32_t sceNpTrophyCreateContext(int32_t *context, int32_t user, uint32_t unk, uint64_t unk2);
int32_t sceNpTrophyCreateHandle(int32_t *handle);
int32_t sceNpTrophyDestroyContext(int32_t context);
int32_t sceNpTrophyDestroyHandle(int32_t handle);
void sceNpTrophyGetGameIcon();
void sceNpTrophyGetGameInfo();
void sceNpTrophyGetGroupIcon();
void sceNpTrophyGetGroupInfo();
void sceNpTrophyGetTrophyIcon();
int32_t sceNpTrophyGetTrophyInfo(int32_t context, int32_t handle, int32_t TRPID, OrbisNpTrophyDetails* details, OrbisNpTrophyData* data);
void sceNpTrophyGetTrophyUnlockState();
int32_t sceNpTrophyIntAbortHandle(int32_t handle);
int32_t sceNpTrophyIntCheckNetSyncTitles(int32_t handle, int32_t user_id, uint32_t mode, bool* is_required);
int32_t sceNpTrophyIntCreateHandle(int32_t* handle);
int32_t sceNpTrophyIntDestroyHandle(int32_t handle);
int32_t sceNpTrophyIntGetLocalTrophySummary(int32_t handle, int32_t user_id, OrbisNpTrophyLocalTrophySummary* summary);
int32_t sceNpTrophyIntGetProgress(int32_t handle, int32_t* progress);
int32_t sceNpTrophyIntGetRunningTitle(int32_t handle, OrbisNpTrophyTitleId* trophy_title_id);
int32_td sceNpTrophyIntGetRunningTitles(int32_t handle, OrbisNpTrophyTitleId trophy_title_id_array[], int32_t num_array, int32_t* num_running);
int32_t sceNpTrophyIntGetTrpIconByUri(int32_t handle, char* trp_url, void* buf, uint64_t buf_size, uint64_t* wsize);
int32_t sceNpTrophyIntNetSyncTitles(int32_t handle, int32_t user_id, uint32_t mode);
int32_t sceNpTrophyRegisterContext(int32_t context, int32_t handle, uint64_t unk);
int32_t sceNpTrophyShowTrophyList(int32_t Context, int32_t hadle);
void sceNpTrophySystemIsServerAvailable();
int32_t sceNpTrophyUnlockTrophy(int32_t context, int32_t handle, int32_t TrophyID, int32_t *PLATID);

#ifdef __cplusplus
}
#endif

#endif
