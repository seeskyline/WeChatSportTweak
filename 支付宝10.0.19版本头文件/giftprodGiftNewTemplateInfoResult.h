//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, giftprodGiftNewHbTemplateViewInfo;

@interface giftprodGiftNewTemplateInfoResult : NSObject
{
    _Bool _success;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSString *_msgType;
    NSString *_followAction;
    NSString *_fullPage;
    NSArray *_params;
    NSArray *_templateInfoList;
    giftprodGiftNewHbTemplateViewInfo *_hbTemplateViewInfo;
    NSString *_timeStamp;
}

+ (Class)templateInfoListElementClass;
+ (Class)paramsElementClass;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) giftprodGiftNewHbTemplateViewInfo *hbTemplateViewInfo; // @synthesize hbTemplateViewInfo=_hbTemplateViewInfo;
@property(retain, nonatomic) NSArray *templateInfoList; // @synthesize templateInfoList=_templateInfoList;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *fullPage; // @synthesize fullPage=_fullPage;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

