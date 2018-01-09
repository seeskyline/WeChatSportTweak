//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "MMTipsViewControllerDelegate.h"
#import "MMUIViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WAPhoneConfirmWindowDelegate.h"
#import "WAPhoneVerifyWindowDelegate.h"
#import "WAWebViewPlugin_ApiQueueProtocol.h"
#import "WCAccountBindPhoneControlLogicDelegate.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString, ScopeInfo, WAPhoneConfirmWindow, WAPhoneVerifyWindow, WAReportPhoneActionItem, WCAccountBindPhoneControlLogic;

@interface WAJSEventHandler_getPhoneNumber : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate, WAWebViewPlugin_ApiQueueProtocol, WAPhoneConfirmWindowDelegate, WAPhoneVerifyWindowDelegate, UIAlertViewDelegate, WCAccountBindPhoneControlLogicDelegate, MMUIViewControllerDelegate, MMTipsViewControllerDelegate>
{
    _Bool _needVerify;
    ScopeInfo *_scope;
    WAPhoneConfirmWindow *_confirmWindow;
    WAPhoneVerifyWindow *_verifyWindow;
    WCAccountBindPhoneControlLogic *_bindLogic;
    _Bool _bindPhoneReturn;
    NSDictionary *_dicInputParam;
    NSData *_requestData;
    NSMutableDictionary *_paramResult;
    NSString *_phoneNumber;
    NSString *_appName;
    NSString *_appIconURL;
    WAReportPhoneActionItem *_reportAction;
}

@property(retain, nonatomic) WAReportPhoneActionItem *reportAction; // @synthesize reportAction=_reportAction;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSMutableDictionary *paramResult; // @synthesize paramResult=_paramResult;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (void).cxx_destruct;
- (id)getViewController;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)beginBindPhone;
- (void)checkPhoneVerifySms:(id)arg1;
- (void)sendPhoneVerifySms;
- (void)onClose;
- (void)onRetry;
- (void)onComplete:(id)arg1;
- (void)onConfirm:(_Bool)arg1;
- (void)closeVerifyWindow;
- (void)showPhoneVerifyWindow;
- (void)closeConfirmWindow;
- (void)showPhoneVerifyConfirm:(id)arg1 appName:(id)arg2 iconURL:(id)arg3;
- (void)onPhoneStatusResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRequestSuccess:(id)arg1;
- (void)onRequestError:(id)arg1;
- (void)handleApiEventEnd;
- (void)requestPhoneStatus;
- (void)onHandleApiEvent:(id)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
