//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFTransferable.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, TFAccount;

@interface TFTransferToAccount : TFTransferable <NSCopying, NSCoding>
{
    TFAccount *_transferAccount;
    NSString *_headUrl;
    NSString *_accountPhoneString;
    NSString *_userRealName;
    NSString *_userNamePre;
    NSString *_userNameSuffix;
    NSString *_userNameFlag;
    NSString *_friendFlag;
    NSString *_gender;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_grade;
}

+ (id)accountWithReceiverInfoResp:(id)arg1 contactInfo:(id)arg2;
+ (id)accountWithReceiverInfoResp:(id)arg1;
@property(retain, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *friendFlag; // @synthesize friendFlag=_friendFlag;
@property(retain, nonatomic) NSString *userNameFlag; // @synthesize userNameFlag=_userNameFlag;
@property(retain, nonatomic) NSString *userNameSuffix; // @synthesize userNameSuffix=_userNameSuffix;
@property(retain, nonatomic) NSString *userNamePre; // @synthesize userNamePre=_userNamePre;
@property(retain, nonatomic) NSString *userRealName; // @synthesize userRealName=_userRealName;
@property(retain, nonatomic) NSString *accountPhoneString; // @synthesize accountPhoneString=_accountPhoneString;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) TFAccount *transferAccount; // @synthesize transferAccount=_transferAccount;
- (void).cxx_destruct;
- (id)createToAccountRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

