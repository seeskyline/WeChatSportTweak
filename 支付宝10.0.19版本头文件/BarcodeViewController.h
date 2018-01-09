//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OSPBaseViewController.h"

#import "AUDialogDelegate.h"
#import "OSPTipsCloseProtocol.h"
#import "UIActionSheetDelegate.h"

@class DTRpcAsyncCaller, NSString, NSTimer, OSPAddBankHelper, OSPPaySwitchService;

@interface BarcodeViewController : OSPBaseViewController <UIActionSheetDelegate, AUDialogDelegate, OSPTipsCloseProtocol>
{
    _Bool _hasWriteShowQrCodeLog;
    NSTimer *_brightnessTimer;
    DTRpcAsyncCaller *_rpcAsyncCaller;
    NSTimer *_screenKeepTimer;
    double _screenKeepTimes;
    OSPAddBankHelper *_bankHelper;
    OSPPaySwitchService *_switchService;
}

@property(retain, nonatomic) OSPPaySwitchService *switchService; // @synthesize switchService=_switchService;
@property(retain, nonatomic) OSPAddBankHelper *bankHelper; // @synthesize bankHelper=_bankHelper;
@property(nonatomic) double screenKeepTimes; // @synthesize screenKeepTimes=_screenKeepTimes;
@property(retain, nonatomic) NSTimer *screenKeepTimer; // @synthesize screenKeepTimer=_screenKeepTimer;
@property(nonatomic) _Bool hasWriteShowQrCodeLog; // @synthesize hasWriteShowQrCodeLog=_hasWriteShowQrCodeLog;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcAsyncCaller; // @synthesize rpcAsyncCaller=_rpcAsyncCaller;
@property(retain, nonatomic) NSTimer *brightnessTimer; // @synthesize brightnessTimer=_brightnessTimer;
- (void).cxx_destruct;
- (void)onReadDetail;
- (void)onTipsClose;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)gotoPaySetting;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)modifyBarcodeSwitch;
- (void)clickShowMenu;
- (id)getFullScreenView;
- (void)makeCaptureScreenInvalid;
- (void)didCaptureSreen:(id)arg1;
- (void)onDidObtainDynamicId:(id)arg1;
- (void)getBarcode:(_Bool)arg1;
- (void)onHandleException:(id)arg1;
- (void)onRefreshEvent;
- (void)doRefreshCode:(id)arg1;
- (void)logDisplayPayChannel;
- (void)savePayChannelName:(id)arg1;
- (void)payChannelSelected:(id)arg1;
- (void)loadPayChannel;
- (void)addBank:(id)arg1;
- (void)onBrightnessChange:(id)arg1;
- (void)resetBrightness:(_Bool)arg1;
- (void)restoreBrightness:(id)arg1;
- (void)onScreenKeepTimeEvent;
- (void)stopScreenKeepTimer;
- (void)startScreenKeepTimer;
- (void)addNavigatorRightBtn;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterBackground:(id)arg1;
- (void)toInactive;
- (void)toActive;
- (void)removeNoticeEvent;
- (void)addNoticeEvent;
- (void)_applicationWillResignActive:(id)arg1;
- (void)viewWillDestroy;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

