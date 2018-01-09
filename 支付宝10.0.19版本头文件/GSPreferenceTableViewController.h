//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSCommonTableViewController.h"

@class NSArray;

@interface GSPreferenceTableViewController : GSCommonTableViewController
{
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (void)monitorOpenConvenient;
- (void)remoteLoggerCloseFingerprintNo;
- (void)remoteLoggerCloseFingerprintYes;
- (void)remoteLoggerCloseFingerprint;
- (void)remoteLoggerBack;
- (void)remoteLoggerForget;
- (void)remoteLoggerModify;
- (void)remoteLoggerTrack;
- (void)remoteLoggerOpenGesture:(id)arg1;
- (void)onBack;
- (void)modifyColorFace;
- (void)handleSuccessRpcResultWithIdentifier:(id)arg1;
- (void)resetGestureMode;
- (void)resetCurrentUser;
- (_Bool)haveVerified;
- (void)forgetPwd;
- (void)trackEnable:(id)arg1;
- (void)showPwdPopViewForDisableFingerprintUnlock;
- (void)showSafeTouchIDDialog;
- (void)gestureEnable:(id)arg1;
- (void)forgetPassword;
- (void)modifyPassword;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configPreferenceDataSource;
- (void)refreshData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

