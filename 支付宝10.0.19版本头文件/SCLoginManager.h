//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString, SAUserInfo;

@interface SCLoginManager : NSObject
{
    _Bool _shouldBlockStartingLoginApp;
    NSString *_lastUserId;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool shouldBlockStartingLoginApp; // @synthesize shouldBlockStartingLoginApp=_shouldBlockStartingLoginApp;
@property(copy, nonatomic) NSString *lastUserId; // @synthesize lastUserId=_lastUserId;
- (void).cxx_destruct;
- (void)dumpOperationQueue;
- (id)pendingBackgroundLoginOperation;
- (id)pendingForegroundLoginOperation;
- (id)pendingPureForegroundOperation;
- (void)cancelOperationsBeforeOperation:(id)arg1;
- (void)onLoginSuccess;
- (void)doPostLoginNotification:(id)arg1 deviceNotification:(id)arg2;
- (void)postLoginSuccessNotification:(_Bool)arg1;
- (void)postLoginNotification:(_Bool)arg1 isWithoutPwd:(_Bool)arg2 loginResult:(id)arg3;
- (void)postLoginNotification:(_Bool)arg1 isWithoutPwd:(_Bool)arg2;
- (void)updateUserInfoHasQueryPassword;
- (void)beforeNotifyLoginSuccessWithResult:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)refreshOperationQueue:(id)arg1;
@property(readonly, nonatomic) SAUserInfo *currentUser;
- (id)loginForegroundSync:(id)arg1;
- (id)loginForegroundAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)loginPureForegroundSync:(id)arg1;
- (id)loginPureForegroundAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (int)loginBackgroundSync:(id)arg1;
- (id)loginBackgroundAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)operationsInQueue;
- (id)init;

@end

