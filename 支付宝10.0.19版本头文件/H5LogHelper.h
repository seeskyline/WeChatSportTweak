//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface H5LogHelper : NSObject
{
    _Bool _isTinyApp;
    NSString *_token;
    NSString *_sessionToken;
    NSString *_url;
    NSString *_referer;
    NSString *_appId;
    NSString *_publicId;
    NSString *_openAppId;
    NSString *_shopId;
    NSString *_customParams;
    NSString *_version;
    NSString *_sourceId;
    NSString *_bizScenario;
    NSString *_ssoLogin;
    NSString *_appmode;
    NSString *_psdType;
    NSString *_log_release_type;
    unsigned long long _lastH5Tap;
    NSString *_udid;
}

+ (id)safeSplitFromStr:(id)arg1;
+ (id)p_resultParamsWithParams:(id)arg1 ucId:(id)arg2 actionId:(id)arg3 seedId:(id)arg4 generalPramsDict:(id)arg5;
+ (void)p_mergeSourceDict:(id)arg1 operStr:(id)arg2 key:(id)arg3;
+ (void)p_mergeSourceStr:(id)arg1 operStr:(id)arg2 key:(id)arg3;
+ (id)formateDictionaryFromConcatedLoag:(id)arg1;
+ (id)concatedLogFromDictionary:(id)arg1;
+ (void)writePerformanceLogWithType:(int)arg1 subType:(id)arg2 extraParams:(id)arg3 formatterDictionary:(id)arg4 perUploadNum:(unsigned long long)arg5;
+ (id)generalFieldsFromSession:(id)arg1;
+ (id)generalFieldsFromPage:(id)arg1 useGenerateFirst:(_Bool)arg2;
+ (id)generalFieldsFromPage:(id)arg1;
+ (id)generalFields;
+ (id)resultParamsWithParams:(id)arg1 ucId:(id)arg2 actionId:(id)arg3 seedId:(id)arg4 inPage:(id)arg5;
+ (id)resultParamsWithParams:(id)arg1 ucId:(id)arg2 actionId:(id)arg3 seedId:(id)arg4 inSession:(id)arg5;
+ (id)resultParamsWithParams:(id)arg1 ucId:(id)arg2 actionId:(id)arg3 seedId:(id)arg4;
+ (id)formateArray:(id)arg1;
+ (id)getLogTimeStr:(id)arg1 forHAR:(_Bool)arg2;
+ (id)getTimeNow;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(nonatomic) unsigned long long lastH5Tap; // @synthesize lastH5Tap=_lastH5Tap;
@property(nonatomic) _Bool isTinyApp; // @synthesize isTinyApp=_isTinyApp;
@property(copy, nonatomic) NSString *log_release_type; // @synthesize log_release_type=_log_release_type;
@property(copy, nonatomic) NSString *psdType; // @synthesize psdType=_psdType;
@property(copy, nonatomic) NSString *appmode; // @synthesize appmode=_appmode;
@property(copy, nonatomic) NSString *ssoLogin; // @synthesize ssoLogin=_ssoLogin;
@property(copy, nonatomic) NSString *bizScenario; // @synthesize bizScenario=_bizScenario;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *customParams; // @synthesize customParams=_customParams;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *openAppId; // @synthesize openAppId=_openAppId;
@property(copy, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)clearAll;
- (id)generateUUID;
- (id)init;

@end

