#pragma once

#include <stdint.h>

// NpTrophy
typedef struct OrbisNpTrophyDetails {
    size_t  size;              // this needs to be set with sizeof(OrbisNpTrophyDetails) or any function that calls with this data will return a error
    int32_t trophy_id;         // Trophy ID, 0-XXXX
    int32_t trophy_grade;      // Trophy rarity
    int32_t trophy_group;      // Trophy group ID
    bool    hidden;            // this determines if you can see the trophy before its unlocked
    uint8_t reserved[3];
    char    name[128];         // Trophy Name, EX: "UNLOCK ME"
    char    description[1024]; // Description, EX: "This is what needs to be unlocked"
} OrbisNpTrophyDetails;

typedef struct OrbisNpTrophyData {
    size_t   size;        // this needs to be set with sizeof(OrbisNpTrophyDetails) or any function that calls with this data will return a error
    int32_t  trophy_id;   // Trophy ID, 0-XX for large scope trophy sets
    bool     unlocked;    // flag that tells if the trophy is locked or unlocked
    uint8_t  reserved[3];
    uint64_t timestamp;   // time when the Trophy was unlocked
} OrbisNpTrophyData;

typedef struct OrbisNpTrophyNumInfo {
    uint32_t num_platinum;
    uint32_t num_gold;
    uint32_t num_silver;
    uint32_t num_bronze;
} OrbisNpTrophyNumInfo;

typedef struct OrbisNpTrophyLocalTrophySummary {
    int32_t              user_id;
    OrbisNpTrophyNumInfo earned_trophies;
} OrbisNpTrophyLocalTrophySummary;

typedef struct OrbisNpTrophyTitleId {
    char trophy_title_id[33];
} OrbisNpTrophyLocalTrophySummary;

// NpCommon
typedef struct OrbisNpOnlineId {
    char    data[16]; // account name, follows PSN schema, min 3/max 16
    char    term;     // terminator, always '\0'
    uint8_t dummy[3];
} OrbisNpOnlineId;

typedef struct OrbisNpId {
    OrbisNpOnlineId handle;      // online info
    char            opt[8];
    uint8_t         reserved[8];
} OrbisNpId;

typedef struct OrbisNpTitleId {
    char    id[13];
    uint8_t padding[3];
} OrbisNpTitleId;

typedef struct OrbisNpTitleSecret {
    uint8_t data[128];
} OrbisNpTitleSecret;

typedef struct OrbisNpClientId {
    char    id[129];
    uint8_t padding[7];
} OrbisNpClientId;

typedef struct OrbisNpClientSecret {
    char    secret[257];
    uint8_t padding[7];
} OrbisNpClientSecret;

typedef struct OrbisNpOfflineAccountId {
    char    id[37];
    uint8_t padding[3];
} OrbisNpOfflineAccountId;

typedef struct OrbisNpCountryCode {
    char    data[3];
    uint8_t padding[1];
} OrbisNpCountryCode;

typedef struct OrbisNpDate {
    uint16_t year;
    uint8_t  month;
    uint8_t  day;
} OrbisNpDate;

typedef struct OrbisNpLanguageCode {
    char    code[6];
    uint8_t padding[10];
} OrbisNpLanguageCode;

typedef enum OrbisNpAccountType {
    ORBIS_NP_ACCOUNT_TYPE_INVALID,
    ORBIS_NP_ACCOUNT_TYPE_LOCAL_USER,
    ORBIS_NP_ACCOUNT_TYPE_OFFLINE_CHILD_ACCOUNT,
    ORBIS_NP_ACCOUNT_TYPE_OFFLINE_ADULT_ACCOUNT,
    ORBIS_NP_ACCOUNT_TYPE_PSN_SUB_ACCOUNT,
    ORBIS_NP_ACCOUNT_TYPE_PSN_ACCOUNT
} OrbisNpAccountType;

typedef struct OrbisNpAuthorizationCode {
    char    id[129];
    uint8_t padding[7];
} OrbisNpAuthorizationCode;

typedef struct OrbisNpAccessToken {
    char     token[256];
    uint64_t expiration_time;
} OrbisNpAccessToken;

typedef struct OrbisNpParentalControlInfo {
    bool content_restriction;
    bool chat_restriction;
    bool ugc_restriction;
} OrbisNpParentalControlInfo;

// Internally treated as OrbisNpSigninState, but ORBIS_NP_SIGNIN_STATE_INVALID is removed.
typedef enum OrbisNpState {
    ORBIS_NP_STATE_NOT_SIGNED_UP,
    ORBIS_NP_STATE_SIGNED_OUT,
    ORBIS_NP_STATE_SIGNED_IN
} OrbisNpState;

typedef enum OrbisNpSigninState {
    ORBIS_NP_SIGNIN_STATE_INVALID,
    ORBIS_NP_SIGNIN_STATE_NOT_SIGNED_UP,
    ORBIS_NP_SIGNIN_STATE_SIGNED_OUT,
    ORBIS_NP_SIGNIN_STATE_SIGNED_IN
} OrbisNpSigninState;

typedef struct OrbisNpTitleToken {
    char     token[1025];
    uint8_t  padding[7];
    uint64_t expiration_time;
} OrbisNpTitleToken;

typedef struct OrbisNp2svId {
    char    id[257];
    uint8_t padding[7];
} OrbisNp2svId;

typedef struct OrbisNp2svInfo {
    OrbisNp2svId    id;
    OrbisNpClientId client_id;
} OrbisNp2svInfo;

typedef struct OrbisNpIdToken {
    char    token[4097];
    uint8_t padding[7];
} OrbisNpIdToken;

typedef struct OrbisNpDeviceName {
    char    name[66];
    uint8_t padding[6];
} OrbisNpDeviceName;

typedef struct OrbisNpDeviceCode {
    char    code[13];
    uint8_t padding[3];
} OrbisNpDeviceCode;

typedef struct OrbisNpDeviceCodeInfo {
    OrbisNpDeviceCode user_code;
    uint32_t          expiration;
    uint32_t          verify_internal;
} OrbisNpDeviceCodeInfo;

typedef struct OrbisNpLoginId {
    char    data[64];
    uint8_t padding[4];
} OrbisNpLoginId;

typedef struct OrbisNpPassword {
    char    data[33];
    uint8_t padding[3];
} OrbisNpPassword;

typedef struct OrbisNpSsoToken {
    char    token[1025];
    uint8_t padding[7];
    uint8_t reserved[8];
} OrbisNpSsoToken;

typedef struct OrbisNpKratosRedirectUri {
    char uri[1024];
} OrbisNpKratosRedirectUri;

typedef enum OrbisNpPlusInternalFeature : uint64_t {
    ORBIS_NP_PLUS_INTERNAL_FEATURE_SHARE_PLAY = 1L
} OrbisNpPlusInternalFeature;

typedef struct OrbisNpIntCheckPlusParameter {
    uint64_t                   size;
    int32_t                    user_id;
    uint8_t                    padding[4];
    OrbisNpPlusInternalFeature feature;
    uint8_t                    reserved[32];
} OrbisNpIntCheckPlusParameter;

typedef struct OrbisNpIntCheckPlusResult {
    bool    authorized;
    uint8_t padding[3];
    uint8_t reserved[32];
} OrbisNpIntCheckPlusResult;

typedef struct OrbisNpPeerAddress {
    OrbisNpOnlineId online_id;
    int32_t         platform;
} OrbisNpPeerAddress;

typedef struct OrbisNpPeerAddressA {
    uint64_t account_id;
    int32_t  platform;
    uint8_t  padding[4];
} OrbisNpPeerAddressA;

// NpManager
typedef struct OrbisNpManagerNpEnv {
    char    env[17];
    uint8_t padding[7];
} OrbisNpManagerNpEnv;

typedef enum OrbisNpPlusMemberType {
    ORBIS_NP_PLUS_MEMBER_TYPE_NONE,
    ORBIS_NP_PLUS_MEMBER_TYPE_MEMBER,
    ORBIS_NP_PLUS_MEMBER_TYPE_TRIAL
} OrbisNpPlusMemberType;

typedef void (*OrbisNpManagerPlusMemberTypeCallback)(int32_t user_id, OrbisNpPlusMemberType type, void* usr_arg);

typedef enum OrbisNpManagerServerError {
    bool     error_received;
    uint8_t  padding[3];
    int32_t  status_code;
    int32_t  error_code;
    uint32_t reserved;
} OrbisNpManagerServerError;

typedef struct OrbisNpManagerJsonUserInfo {
    uint64_t            account_id;
    OrbisNpId           np_id;
    OrbisNpCountryCode  country_code;
    OrbisNpLanguageCode lang_code;
} OrbisNpManagerJsonUserInfo;

// NpUtility
typedef struct OrbisNpServiceChecker2FlagArray {
    uint32_t flag_bits[2];
} OrbisNpServiceChecker2FlagArray;

typedef struct OrbisNpTitleMetadataInfo {
    char    default_title_name[128];
    char    local_title_name[128];
    char    default_icon_url[256];
    char    local_icon_url[256];
    int32_t parental_level;
    char    content_id[48];
} OrbisNpTitleMetadataInfo;

// NpSns
typedef struct OrbisNpSnsFbMissingPermission {
    char permissions[1024];
} OrbisNpSnsFbMissingPermission;

typedef struct OrbisNpSnsFacebookAccessTokenResult {
    uint64_t expiration;
    char     access_token[4097];
    uint8_t  reserved[39];
} OrbisNpSnsFacebookAccessTokenResult;

typedef struct OrbisNpSnsFbTitleName {
    char name[129];
} OrbisNpSnsFbTitleName;

typedef enum OrbisNpSnsServiceType {
    ORBIS_NP_SNS_SERVICE_TYPE_FACEBOOK,
    ORBIS_NP_SNS_SERVICE_TYPE_TWITTER,
    ORBIS_NP_SNS_SERVICE_TYPE_YOUTUBE,
    ORBIS_NP_SNS_SERVICE_TYPE_USTREAM,
    ORBIS_NP_SNS_SERVICE_TYPE_MAX,
    ORBIS_NP_SNS_SERVICE_TYPE_INVALID
} OrbisNpSnsServiceType;

typedef struct OrbisNpSnsTwitterAccessToken {
    char    access_token[1024];
    char    access_token_secret[1024];
    uint8_t reserved[32];
} OrbisNpSnsTwitterAccessToken;

typedef struct OrbisNpSnsYtUrlForPermission {
    char url[2048];
} OrbisNpSnsYtUrlForPermission;

typedef struct OrbisNpSnsYouTubeAccessTokenResult {
    uint64_t expiration;
    char     access_token[4096];
    uint8_t  reserved[39];
} OrbisNpSnsYouTubeAccessTokenResult;

// NpWebApi
typedef struct OrbisNpWebApiPushEventDataType {
    char val[65];
} OrbisNpWebApiPushEventDataType;

typedef void (*OrbisNpWebApiPushEventCallback)(int32_t user_ctx_id, int32_t callback_id, OrbisNpPeerAddress* to, OrbisNpPeerAddress* from, OrbisNpWebApiPushEventDataType* data_type, char* data, uint64_t data_len, void* user_arg);
typedef void (*OrbisNpWebApiServicePushEventCallback)(int32_t user_ctx_id, int32_t callback_id, char* np_service_name, uint32_t np_service_label, OrbisNpPeerAddress* to, OrbisNpPeerAddress* from, OrbisNpWebApiPushEventDataType* data_type, char* data, uint64_t data_len, void* user_arg);
typedef void (*OrbisNpWebApiExtdPushEventCallback)(int32_t user_ctx_id, int32_t callback_id, char* np_service_name, uint32_t np_service_label, OrbisNpPeerAddress* to, OrbisNpPeerAddress* from, OrbisNpWebApiPushEventDataType* data_type, char* data, uint64_t data_len, void* extd_data, uint64_t extd_data_num, void* user_arg);
typedef void (*OrbisNpWebApiExtdPushEventCallbackA)(int32_t user_ctx_id, int32_t callback_id, char* np_service_name, uint32_t np_service_label, OrbisNpPeerAddressA* to, OrbisNpPeerAddressA* from, OrbisNpWebApiPushEventDataType* data_type, char* data, uint64_t data_len, void* extd_data, uint64_t extd_data_num, void* user_arg);

typedef struct OrbisNpWebApiPushEventDataType {
    char val[65];
} OrbisNpWebApiPushEventDataType;

typedef struct OrbisNpWebApiExtdPushEventFilterParameter {
    OrbisNpWebApiPushEventDataType data_type;
    void*                          extd_data_key;
    uint64_t                       extd_data_key_num;
} OrbisNpWebApiExtdPushEventFilterParameter;

typedef enum OrbisNpWebApiHttpMethod {
    ORBIS_NP_WEBAPI_HTTP_METHOD_GET,
    ORBIS_NP_WEBAPI_HTTP_METHOD_POST,
    ORBIS_NP_WEBAPI_HTTP_METHOD_PUT,
    ORBIS_NP_WEBAPI_HTTP_METHOD_DELETE
} OrbisNpWebApiHttpMethod;

typedef struct OrbisNpWebApiContentParameter {
    uint64_t content_length;
    char*    content_type;
    uint8_t  padding[16];
} OrbisNpWebApiContentParameter;

typedef struct OrbisNpWebApiInitializeParameter {
    int32_t  libhttp_ctx_id;
    uint64_t pool_size;
    char*    name;
    uint64_t size;
} OrbisNpWebApiInitializeParameter;

typedef struct OrbisNpWebApiResponseInformationOption {
    int32_t  http_status;
    void*    error_object;
    uint64_t error_object_size;
    uint64_t response_data_size;
} OrbisNpWebApiResponseInformationOption;

// NpWebApi2
typedef struct OrbisNpWebApi2ContentParameter {
    uint64_t content_length;
    char*    content_type;
    uint8_t  padding[16];
} OrbisNpWebApi2ContentParameter;

typedef struct OrbisNpWebApi2PushEventDataType {
    char val[65];
} OrbisNpWebApi2PushEventDataType;

typedef struct OrbisNpWebApi2PushEventFilterParameter {
    OrbisNpWebApi2PushEventDataType data_type;
    void*                           extd_data_key;
    uint64_t                        extd_data_key_num;
} OrbisNpWebApi2PushEventFilterParameter;

typedef void (*OrbisNpWebApi2PushEventCallback)(int32_t user_ctx_id, int32_t callback_id, char* np_service_name, uint32_t np_service_label, OrbisNpPeerAddressA* to, OrbisNpOnlineId* to_online_id, OrbisNpPeerAddressA* from, OrbisNpOnlineId* from_online_id, OrbisNpWebApi2PushEventDataType* data_Type, char* data, uint64_t data_len, void* extd_data, uint64_t extd_data_num, void* user_arg);

typedef struct OrbisNpWebApi2ResponseInformationOption {
    int32_t  http_status;
    void*    error_object;
    uint64_t error_object_size;
    uint64_t response_data_size;
} OrbisNpWebApi2ResponseInformationOption;