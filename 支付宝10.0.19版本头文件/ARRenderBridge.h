//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APAudioPlayerDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class AR2DViewObserver, ARBridgeModel, ARScanRpcEngine, Ant3DView, NSMutableArray, NSMutableDictionary, NSString, NSURLSession;

@interface ARRenderBridge : NSObject <APAudioPlayerDelegate, NSURLSessionTaskDelegate>
{
    Ant3DView *_ant3dView;
    struct duktape_bridge *_duktape_bridge;
    ARScanRpcEngine *_rpcEngine;
    struct ARJSBridgeSupport *_bridgeSupport;
    struct AR3DGamePlayObserver *_gameplayObserver;
    AR2DViewObserver *_ar2dViewObserver;
    struct ARI2DViewControlImp *_ar2dControlImp;
    struct AR3DViewControlImp *_ar3dControlImp;
    NSString *_sandboxRoot;
    NSURLSession *_bridgeUrlSession;
    NSMutableArray *_bridgeRequestTasks;
    ARBridgeModel *_envModel;
    NSMutableDictionary *_sessionDic;
    NSMutableArray *_audioPlayerArray;
}

@property(retain, nonatomic) NSMutableArray *audioPlayerArray; // @synthesize audioPlayerArray=_audioPlayerArray;
@property(retain, nonatomic) NSMutableDictionary *sessionDic; // @synthesize sessionDic=_sessionDic;
@property(retain, nonatomic) ARBridgeModel *envModel; // @synthesize envModel=_envModel;
@property(retain, nonatomic) NSMutableArray *bridgeRequestTasks; // @synthesize bridgeRequestTasks=_bridgeRequestTasks;
@property(retain, nonatomic) NSURLSession *bridgeUrlSession; // @synthesize bridgeUrlSession=_bridgeUrlSession;
@property(copy, nonatomic) NSString *sandboxRoot; // @synthesize sandboxRoot=_sandboxRoot;
- (void).cxx_destruct;
- (void)exit;
- (void)requestAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)envPropForKey:(id)arg1;
- (void)setEnvProp:(id)arg1;
- (void)audioPlayerDidFinishToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 failedWithError:(id)arg2;
- (id)getStorageValue:(id)arg1;
- (void)setStorageForKey:(id)arg1 value:(id)arg2;
- (id)storageBizKey;
- (void)onTrackChange:(unsigned long long)arg1;
- (void)triggleCouponWithParamsString:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (void)showCouponViewWithParamsString:(id)arg1 confirmBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)openUrlWithParamsStr:(id)arg1;
- (void)getAuthUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)storeCookieForUrlString:(id)arg1 fromeResponse:(id)arg2;
- (id)headerFieldsWithCookieForUrlString:(id)arg1;
- (id)requestForUrlString:(id)arg1 data:(id)arg2 methodString:(id)arg3 headerDic:(id)arg4;
- (void)requestWithUrlString:(id)arg1 data:(id)arg2 methodString:(id)arg3 headerDic:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)stopAudio;
- (void)resumeAudio;
- (void)pauseAudio;
- (void)playAudio:(id)arg1;
- (void)scanVCDidDisappear;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupObservers;
- (id)resolveFileURLFor:(id)arg1;
- (id)resolveFullPathFor:(id)arg1;
- (void)removeObservers;
- (void)dealloc;
- (id)initWithJSFile:(id)arg1 model:(id)arg2 inView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

