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
