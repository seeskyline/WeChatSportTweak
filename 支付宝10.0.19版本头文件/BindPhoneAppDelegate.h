//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTMicroApplicationDelegate.h"

@class NSMutableDictionary, NSString, UIViewController;

@interface BindPhoneAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    _Bool _isUniversalAccount;
    UIViewController *_rootController;
    NSMutableDictionary *_midc;
}

@property(retain, nonatomic) NSMutableDictionary *midc; // @synthesize midc=_midc;
@property(nonatomic) _Bool isUniversalAccount; // @synthesize isUniversalAccount=_isUniversalAccount;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

