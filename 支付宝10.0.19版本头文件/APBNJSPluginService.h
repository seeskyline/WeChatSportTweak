//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBNJSPluginBase.h"

@class APBirdNestAppService, DTDeviceInfo;

@interface APBNJSPluginService : APBNJSPluginBase
{
    APBirdNestAppService *_appService;
    id <SPSafePayService> _safePayService;
    id <SAAccountService> _accountService;
    DTDeviceInfo *_deviceInfo;
}

@property(retain, nonatomic) DTDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) id <SAAccountService> accountService; // @synthesize accountService=_accountService;
@property(retain, nonatomic) id <SPSafePayService> safePayService; // @synthesize safePayService=_safePayService;
@property(nonatomic) __weak APBirdNestAppService *appService; // @synthesize appService=_appService;
- (void).cxx_destruct;
- (void)generateBarcodeWithEvent:(id)arg1;
- (void)startExtAppWithEvent:(id)arg1;
- (void)checkExtAppWithEvent:(id)arg1;
- (void)remoteLogWithEvent:(id)arg1;
- (void)startAppWithEvent:(id)arg1;
- (void)getConfigWithEvent:(id)arg1;
- (void)getClipboardWithEvent:(id)arg1;
- (void)setClipboardWithEvent:(id)arg1;
- (void)getNetworkTypeWithEvent:(id)arg1;
- (void)getClientInfoWithEvent:(id)arg1;
- (void)getPlatformWithEvent:(id)arg1;
- (void)setUserPreferencesWithEvent:(id)arg1;
- (void)getUserPreferencesWithEvent:(id)arg1;
- (void)checkJSAPIWithEvent:(id)arg1;
- (void)getDeviceInfoWithEvent:(id)arg1;
- (void)getAccountInfoWithEvent:(id)arg1;
- (void)getNormalizeAlipayAccountWithEvent:(id)arg1;
- (void)RSAEncryptWithEvent:(id)arg1;
- (id)initWithService:(id)arg1;

@end

