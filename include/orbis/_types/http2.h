#pragma once

#include <stdint.h>

typedef enum OrbisHttp2HttpVersion {
    ORBIS_HTTP2_VERSION_1_0 = 1,
    ORBIS_HTTP2_VERSION_1_1 = 2,
    ORBIS_HTTP2_VERSION_2_0 = 3,
} OrbisHttp2HttpVersion;

typedef struct OrbisHttp2PreSendCallbackData {
    void* unk;
    void* cert;
} OrbisHttp2PreSendCallbackData;

typedef int32_t (*OrbisHttp2PreSendCallback)(int32_t, int32_t, OrbisHttp2PreSendCallback *, void *);