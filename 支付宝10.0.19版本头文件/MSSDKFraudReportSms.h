//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSDKJsonObject.h"

@class NSString;

@interface MSSDKFraudReportSms : MSSDKJsonObject
{
    int _riskId;
    NSString *_number;
    NSString *_content;
    NSString *_reason;
    NSString *_type;
    NSString *_category;
}

@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) int riskId; // @synthesize riskId=_riskId;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)toJSONObject;
@property(readonly, nonatomic) _Bool isCorrectingReport;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

