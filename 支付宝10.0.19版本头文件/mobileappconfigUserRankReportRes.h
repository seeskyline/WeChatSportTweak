//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface mobileappconfigUserRankReportRes : NSObject
{
    int _resultCode;
    NSString *_resultMsg;
    NSDictionary *_dataVersionMap;
}

+ (Class)dataVersionMapElementClass;
@property(retain, nonatomic) NSDictionary *dataVersionMap; // @synthesize dataVersionMap=_dataVersionMap;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end

