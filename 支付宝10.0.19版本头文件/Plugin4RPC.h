//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBPluginBase.h"

@class AUToast, H5Alert, NSMutableArray, PSDSession;

@interface Plugin4RPC : NBPluginBase
{
    NSMutableArray *_processingApps;
    H5Alert *_alertView;
    AUToast *_toastView;
    PSDSession *_curPsdSession;
}

@property(nonatomic) __weak PSDSession *curPsdSession; // @synthesize curPsdSession=_curPsdSession;
@property(retain, nonatomic) AUToast *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) H5Alert *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSMutableArray *processingApps; // @synthesize processingApps=_processingApps;
- (void).cxx_destruct;
- (id)errorWithCustomInfo:(id)arg1 oriError:(id)arg2;
- (void)logRpcError:(id)arg1 info:(id)arg2;
- (_Bool)isProcessingAppId:(id)arg1;
- (void)removeAppId:(id)arg1;
- (void)addAppId:(id)arg1;
- (void)existApp:(_Bool)arg1;
- (void)hideLoadingToast;
- (void)showLoadingToast;
- (void)showExceptionAlert:(id)arg1 buttonTitle:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestFailed:(id)arg1 appId:(id)arg2 url:(id)arg3;
- (void)startRequest:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)updateApp:(id)arg1 url:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (void)processApp:(id)arg1 url:(id)arg2 isRetry:(_Bool)arg3;
- (_Bool)isVersionValid:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

