//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTMicroApplicationDelegate.h"

@class DTRpcAsyncCaller, NSString, UIViewController;

@interface APAddFriendProfileAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    UIViewController *_currentRootViewController;
    UIViewController *_subVC;
    DTRpcAsyncCaller *_querySimpleProfileRPCCaller;
}

+ (void)exitCurrentApp:(_Bool)arg1;
@property(retain, nonatomic) DTRpcAsyncCaller *querySimpleProfileRPCCaller; // @synthesize querySimpleProfileRPCCaller=_querySimpleProfileRPCCaller;
@property(retain, nonatomic) UIViewController *subVC; // @synthesize subVC=_subVC;
@property(retain, nonatomic) UIViewController *currentRootViewController; // @synthesize currentRootViewController=_currentRootViewController;
- (void).cxx_destruct;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)exitMyself;
- (void)showVCWithContactInfo:(id)arg1 params:(id)arg2;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

