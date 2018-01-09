//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, NSString, TFTransferable;

@interface TFTransferRequest : NSObject <NSCopying>
{
    _Bool _editable;
    _Bool _isUncertifiedRecevier;
    _Bool _isLimitAmountPayer;
    _Bool _queryReciverInfoAtHome;
    TFTransferable *_transferable;
    NSString *_amount;
    NSString *_returnURL;
    NSString *_sourceID;
    NSString *_linkSourceId;
    NSString *_promotion;
    NSString *_bizInNo;
    NSString *_yunyingUrl;
    NSString *_emotionId;
    NSMutableDictionary *_userInfo;
    NSString *_publicId;
    NSString *_appId;
    NSString *_delay;
    NSString *_goResultPage;
    NSDictionary *_profilePassThrough;
}

+ (id)formatedSourceID:(id)arg1 FormatType:(int)arg2;
+ (id)transferRequestWithLaunchOptions:(id)arg1;
@property(retain, nonatomic) NSDictionary *profilePassThrough; // @synthesize profilePassThrough=_profilePassThrough;
@property(retain, nonatomic) NSString *goResultPage; // @synthesize goResultPage=_goResultPage;
@property(retain, nonatomic) NSString *delay; // @synthesize delay=_delay;
@property(nonatomic) _Bool queryReciverInfoAtHome; // @synthesize queryReciverInfoAtHome=_queryReciverInfoAtHome;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isLimitAmountPayer; // @synthesize isLimitAmountPayer=_isLimitAmountPayer;
@property(nonatomic) _Bool isUncertifiedRecevier; // @synthesize isUncertifiedRecevier=_isUncertifiedRecevier;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *emotionId; // @synthesize emotionId=_emotionId;
@property(retain, nonatomic) NSString *yunyingUrl; // @synthesize yunyingUrl=_yunyingUrl;
@property(copy, nonatomic) NSString *bizInNo; // @synthesize bizInNo=_bizInNo;
@property(copy, nonatomic) NSString *promotion; // @synthesize promotion=_promotion;
@property(copy, nonatomic) NSString *linkSourceId; // @synthesize linkSourceId=_linkSourceId;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSString *returnURL; // @synthesize returnURL=_returnURL;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) TFTransferable *transferable; // @synthesize transferable=_transferable;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

