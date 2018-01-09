//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString, PPChatShareInfo;

@interface PPChatSetting : NSObject <NSCoding>
{
    _Bool _canAddExtra;
    _Bool _isFollow;
    _Bool _isDeletable;
    _Bool _acceptsPush;
    _Bool _isShowAcceptsPushSwitch;
    _Bool _isShowQrCode;
    _Bool _canUploadGis;
    _Bool _needShowGisSwitch;
    _Bool _isLimitAddThird;
    _Bool _isShowNotifyAmountSettingsPage;
    _Bool _isShowFeedback;
    NSString *_publicId;
    NSString *_publicName;
    NSString *_publicType;
    NSString *_headImageUrl;
    NSString *_followType;
    NSString *_publicDescription;
    NSString *_addThirdAccountUri;
    NSString *_thirdPartyAccountText;
    NSString *_loginId;
    NSString *_authUrl;
    NSArray *_thridPartAccounts;
    PPChatShareInfo *_shareInfo;
    NSString *_followCount;
    long long _xStatusCode;
    NSString *_xSatusMessage;
    NSString *_queryHistoryButtonName;
    NSString *_queryHistoryButtonUrl;
    NSString *_notifyAmountSettingsPageLink;
    NSString *_notifyAmountSettingsTitle;
}

@property(nonatomic) _Bool isShowFeedback; // @synthesize isShowFeedback=_isShowFeedback;
@property(copy, nonatomic) NSString *notifyAmountSettingsTitle; // @synthesize notifyAmountSettingsTitle=_notifyAmountSettingsTitle;
@property(copy, nonatomic) NSString *notifyAmountSettingsPageLink; // @synthesize notifyAmountSettingsPageLink=_notifyAmountSettingsPageLink;
@property(nonatomic) _Bool isShowNotifyAmountSettingsPage; // @synthesize isShowNotifyAmountSettingsPage=_isShowNotifyAmountSettingsPage;
@property(retain, nonatomic) NSString *queryHistoryButtonUrl; // @synthesize queryHistoryButtonUrl=_queryHistoryButtonUrl;
@property(retain, nonatomic) NSString *queryHistoryButtonName; // @synthesize queryHistoryButtonName=_queryHistoryButtonName;
@property(retain, nonatomic) NSString *xSatusMessage; // @synthesize xSatusMessage=_xSatusMessage;
@property(nonatomic) long long xStatusCode; // @synthesize xStatusCode=_xStatusCode;
@property(retain, nonatomic) NSString *followCount; // @synthesize followCount=_followCount;
@property(retain, nonatomic) PPChatShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSArray *thridPartAccounts; // @synthesize thridPartAccounts=_thridPartAccounts;
@property(retain, nonatomic) NSString *authUrl; // @synthesize authUrl=_authUrl;
@property(nonatomic) _Bool isLimitAddThird; // @synthesize isLimitAddThird=_isLimitAddThird;
@property(nonatomic) _Bool needShowGisSwitch; // @synthesize needShowGisSwitch=_needShowGisSwitch;
@property(nonatomic) _Bool canUploadGis; // @synthesize canUploadGis=_canUploadGis;
@property(nonatomic) _Bool isShowQrCode; // @synthesize isShowQrCode=_isShowQrCode;
@property(nonatomic) _Bool isShowAcceptsPushSwitch; // @synthesize isShowAcceptsPushSwitch=_isShowAcceptsPushSwitch;
@property(nonatomic) _Bool acceptsPush; // @synthesize acceptsPush=_acceptsPush;
@property(nonatomic) _Bool isDeletable; // @synthesize isDeletable=_isDeletable;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *thirdPartyAccountText; // @synthesize thirdPartyAccountText=_thirdPartyAccountText;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) _Bool canAddExtra; // @synthesize canAddExtra=_canAddExtra;
@property(retain, nonatomic) NSString *addThirdAccountUri; // @synthesize addThirdAccountUri=_addThirdAccountUri;
@property(retain, nonatomic) NSString *publicDescription; // @synthesize publicDescription=_publicDescription;
@property(retain, nonatomic) NSString *followType; // @synthesize followType=_followType;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *publicType; // @synthesize publicType=_publicType;
@property(retain, nonatomic) NSString *publicName; // @synthesize publicName=_publicName;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (void)loadPublicCoreSettingsModel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

