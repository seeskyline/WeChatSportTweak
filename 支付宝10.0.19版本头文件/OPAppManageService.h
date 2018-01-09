//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTService.h"
#import "DTStartApplicationHandler.h"

@class ACApplicationTypeFinder, ACStartApplicationHandler, APToastView, NSString, OPAuthViewController;

@interface OPAppManageService : NSObject <DTStartApplicationHandler, DTService>
{
    ACApplicationTypeFinder *_applicationTypeFinder;
    ACStartApplicationHandler *_startAppHandler;
    OPAuthViewController *_authViewController;
    APToastView *_appToastView;
}

+ (id)appWithACApp:(id)arg1 params:(id)arg2;
@property(retain, nonatomic) APToastView *appToastView; // @synthesize appToastView=_appToastView;
@property(retain, nonatomic) OPAuthViewController *authViewController; // @synthesize authViewController=_authViewController;
@property(retain, nonatomic) ACStartApplicationHandler *startAppHandler; // @synthesize startAppHandler=_startAppHandler;
@property(retain, nonatomic) ACApplicationTypeFinder *applicationTypeFinder; // @synthesize applicationTypeFinder=_applicationTypeFinder;
- (void).cxx_destruct;
- (void)requestAppBaseInfos:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)findAppsForVoiceAssist:(id)arg1;
- (id)allNebulaAppVersions;
- (id)allStageCodes;
- (void)cleanAppNewFlag:(id)arg1 stageCode:(id)arg2;
- (id)findStageConfigMap:(id)arg1;
- (id)findApp:(id)arg1 stageCode:(id)arg2;
- (void)installApp:(id)arg1 param:(id)arg2 process:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)hideAppToast;
- (void)showAppToast:(id)arg1 type:(int)arg2 param:(id)arg3;
- (void)launchACApp:(id)arg1 param:(id)arg2 process:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)openACApp:(id)arg1 param:(id)arg2 process:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)findAppManager:(id)arg1 stageCodes:(id)arg2 useCache:(_Bool)arg3;
- (id)findAppManager:(id)arg1 stageCodes:(id)arg2;
- (id)findAppManager:(id)arg1;
- (void)willDestroy;
- (void)start;
- (id)init;
- (void)autoAuthInterface:(id)arg1 userId:(id)arg2 resultCallback:(CDUnknownBlockType)arg3;
- (id)getAuthStatusAyncLaunchWeb:(id)arg1 userId:(id)arg2 resultCallback:(CDUnknownBlockType)arg3;
- (id)getAuthStatusAync:(id)arg1 userId:(id)arg2 source:(int)arg3 autoAuthorize:(_Bool)arg4 resultCallback:(CDUnknownBlockType)arg5;
- (_Bool)isInstalledFromSchemeUri:(id)arg1;
- (id)appFromAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

