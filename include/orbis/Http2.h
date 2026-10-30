#include <stddef.h>
#include <stdint.h>
#include <orbis/_types/http2.h>

#ifndef _SCE_HTTP2_H_
#define _SCE_HTTP2_H_

#ifdef __cplusplus 
extern "C" {
#endif

int32_t sceHttp2AbortRequest(int32_t);
int32_t sceHttp2AddRequestHeader(int32_t, const char *, const char *, uint32_t);
int32_t sceHttp2CreateRequestWithURL(int32_t, const char *, const char *, uint64_t);
int32_t sceHttp2CreateTemplate(int32_t, const char *, int32_t, int32_t);
int32_t sceHttp2DeleteRequest(int32_t);
int32_t sceHttp2DeleteTemplate(int32_t);
int32_t sceHttp2GetAllResponseHeaders(int32_t, char **, uint64_t *);
int32_t sceHttp2GetStatusCode(int32_t, int32_t *);
int32_t sceHttp2ReadData(int32_t, void *, uint64_t);
int32_t sceHttp2SendRequest(int32_t, const void *, uint64_t);
int32_t sceHttp2SetPreSendCallback(int32_t, OrbisHttp2PreSendCallback, void *);
int32_t sceHttp2SetRequestContentLength(int32_t, uint64_t);

#ifdef __cplusplus
}
#endif

#endif
