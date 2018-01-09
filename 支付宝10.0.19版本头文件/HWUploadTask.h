//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBioAuthTask.h"
#import "UIAlertViewDelegate.h"

@class APBRPCManager, APBTaskContext, HWRemoteConfig, NSMutableDictionary, NSString, UIViewController;

@interface HWUploadTask : NSObject <UIAlertViewDelegate, IBioAuthTask>
{
    NSString *_taskName;
    APBTaskContext *_context;
    NSMutableDictionary *_pipeInfo;
    APBRPCManager *_rpcManager;
    UIViewController *_vc;
    HWRemoteConfig *_remoteConfig;
}

@property(nonatomic) __weak HWRemoteConfig *remoteConfig; // @synthesize remoteConfig=_remoteConfig;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) APBRPCManager *rpcManager; // @synthesize rpcManager=_rpcManager;
@property(retain, nonatomic) NSMutableDictionary *pipeInfo; // @synthesize pipeInfo=_pipeInfo;
@property(retain, nonatomic) APBTaskContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
- (void).cxx_destruct;
- (void)exitWithResult:(int)arg1 failReason:(id)arg2;
- (void)onRemoteCommand:(long long)arg1;
- (void)reset;
- (id)getConfig;
- (void)processEvent:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)invokeWithPipeInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

