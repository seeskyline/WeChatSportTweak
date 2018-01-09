//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ImmPayPwdCheckDelegate.h"

@class ImmPayCreditNoPwdVC, ImmPayEventHandler, ImmPayPwdCheckVC, ImmPaySetChannel, ImmPaySetNoPwd, ImmPaySetting, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface ImmPaySettingService : NSObject <ImmPayPwdCheckDelegate>
{
    _Bool _autoChannel;
    _Bool _isNeedFetchChannel;
    _Bool _noPwdSecShow;
    _Bool _noPwdSwitchOn;
    _Bool _jfbSwitchOn;
    _Bool _fingerAuth;
    _Bool _wearAuth;
    _Bool _isNeedCheckPwd;
    _Bool _fpPaySecShow;
    _Bool _fpPayOpen;
    _Bool _watchPaySecShow;
    _Bool _braceletPaySecShow;
    _Bool _qrCodeSonicPaySecShow;
    ImmPayEventHandler *_eventhandler;
    NSArray *_channelArray;
    unsigned long long _pwdType;
    NSNumber *_noPwdCredit;
    NSNumber *_noPwdCreditPerDay;
    NSArray *_noPwdCredits;
    NSString *_noPwdDefTips;
    NSString *_authAction;
    NSString *_asiState;
    NSString *_asiTxt;
    NSString *_asiUrl;
    NSString *_forgetPwdURL;
    NSString *_deductURL;
    NSString *_secTitle4Self;
    NSString *_secTitle4ThirdParty;
    NSArray *_bizIconArr;
    NSString *_qrCodeSonicPayUrl;
    NSMutableDictionary *_originalData;
    NSString *_exitAct;
    ImmPaySetChannel *_channelVC;
    ImmPaySetNoPwd *_nopwdCreditSet;
    ImmPaySetting *_settingVC;
    ImmPayCreditNoPwdVC *_nopwdCreditVC;
    ImmPayPwdCheckVC *_pwdVC;
}

@property(nonatomic) __weak ImmPayPwdCheckVC *pwdVC; // @synthesize pwdVC=_pwdVC;
@property(nonatomic) __weak ImmPayCreditNoPwdVC *nopwdCreditVC; // @synthesize nopwdCreditVC=_nopwdCreditVC;
@property(nonatomic) __weak ImmPaySetting *settingVC; // @synthesize settingVC=_settingVC;
@property(nonatomic) __weak ImmPaySetNoPwd *nopwdCreditSet; // @synthesize nopwdCreditSet=_nopwdCreditSet;
@property(retain, nonatomic) ImmPaySetChannel *channelVC; // @synthesize channelVC=_channelVC;
@property(retain, nonatomic) NSString *exitAct; // @synthesize exitAct=_exitAct;
@property(retain, nonatomic) NSMutableDictionary *originalData; // @synthesize originalData=_originalData;
@property(copy, nonatomic) NSString *qrCodeSonicPayUrl; // @synthesize qrCodeSonicPayUrl=_qrCodeSonicPayUrl;
@property(nonatomic) _Bool qrCodeSonicPaySecShow; // @synthesize qrCodeSonicPaySecShow=_qrCodeSonicPaySecShow;
@property(nonatomic) _Bool braceletPaySecShow; // @synthesize braceletPaySecShow=_braceletPaySecShow;
@property(nonatomic) _Bool watchPaySecShow; // @synthesize watchPaySecShow=_watchPaySecShow;
@property(nonatomic) _Bool fpPayOpen; // @synthesize fpPayOpen=_fpPayOpen;
@property(nonatomic) _Bool fpPaySecShow; // @synthesize fpPaySecShow=_fpPaySecShow;
@property(retain, nonatomic) NSArray *bizIconArr; // @synthesize bizIconArr=_bizIconArr;
@property(retain, nonatomic) NSString *secTitle4ThirdParty; // @synthesize secTitle4ThirdParty=_secTitle4ThirdParty;
@property(retain, nonatomic) NSString *secTitle4Self; // @synthesize secTitle4Self=_secTitle4Self;
@property(retain, nonatomic) NSString *deductURL; // @synthesize deductURL=_deductURL;
@property(retain, nonatomic) NSString *forgetPwdURL; // @synthesize forgetPwdURL=_forgetPwdURL;
@property(nonatomic) _Bool isNeedCheckPwd; // @synthesize isNeedCheckPwd=_isNeedCheckPwd;
@property(copy, nonatomic) NSString *asiUrl; // @synthesize asiUrl=_asiUrl;
@property(copy, nonatomic) NSString *asiTxt; // @synthesize asiTxt=_asiTxt;
@property(copy, nonatomic) NSString *asiState; // @synthesize asiState=_asiState;
@property(nonatomic) _Bool wearAuth; // @synthesize wearAuth=_wearAuth;
@property(nonatomic) _Bool fingerAuth; // @synthesize fingerAuth=_fingerAuth;
@property(copy, nonatomic) NSString *authAction; // @synthesize authAction=_authAction;
@property(nonatomic) _Bool jfbSwitchOn; // @synthesize jfbSwitchOn=_jfbSwitchOn;
@property(copy, nonatomic) NSString *noPwdDefTips; // @synthesize noPwdDefTips=_noPwdDefTips;
@property(retain, nonatomic) NSArray *noPwdCredits; // @synthesize noPwdCredits=_noPwdCredits;
@property(retain, nonatomic) NSNumber *noPwdCreditPerDay; // @synthesize noPwdCreditPerDay=_noPwdCreditPerDay;
@property(retain, nonatomic) NSNumber *noPwdCredit; // @synthesize noPwdCredit=_noPwdCredit;
@property(nonatomic) _Bool noPwdSwitchOn; // @synthesize noPwdSwitchOn=_noPwdSwitchOn;
@property(nonatomic) _Bool noPwdSecShow; // @synthesize noPwdSecShow=_noPwdSecShow;
@property(nonatomic) unsigned long long pwdType; // @synthesize pwdType=_pwdType;
@property(retain, nonatomic) NSArray *channelArray; // @synthesize channelArray=_channelArray;
@property(nonatomic) _Bool isNeedFetchChannel; // @synthesize isNeedFetchChannel=_isNeedFetchChannel;
@property(nonatomic) _Bool autoChannel; // @synthesize autoChannel=_autoChannel;
@property(nonatomic) __weak ImmPayEventHandler *eventhandler; // @synthesize eventhandler=_eventhandler;
- (void).cxx_destruct;
- (void)trackPage:(id)arg1;
- (id)viewHandler;
- (void)notifyPayChannelOrderChange;
- (void)onObserveAuthenticatorChangeNotification:(id)arg1;
- (void)onSyncAuthenticatorChangeWithData:(id)arg1;
@property(readonly, nonatomic) NSString *noPwdTips;
- (void)pwd_onBack;
- (void)pwd_onSubmit;
- (void)pwd_onForgetPwd;
- (void)qr_openurl;
- (id)descForNopwdCredit;
- (_Bool)uploadFingerprintSwitch:(_Bool)arg1;
- (_Bool)uploadSettingIfNeed:(CDUnknownBlockType)arg1;
- (id)checkChannelDiff;
- (void)updateSetting:(id)arg1;
- (void)modifyPaySettingNopwdCredit:(id)arg1;
- (_Bool)showPwdCheck;
- (void)showNopwdCreditSelect;
- (void)showNoPwdCreditSetting;
- (void)showSmartBraceletPay;
- (void)showSmartWatchPay;
- (void)showThirdParty;
- (void)showChannelSetting;
- (void)showPaySettingWithAction:(id)arg1;
- (void)dealloc;
- (id)initWithEventhandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

