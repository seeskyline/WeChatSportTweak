//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCSafetyReportBaseData;

@interface WCSafetyReportScanObj : MMObject
{
    int _type;
    WCSafetyReportBaseData *_baseData;
    long long _finishCnt;
    long long _allCount;
}

@property(nonatomic) long long allCount; // @synthesize allCount=_allCount;
@property(nonatomic) long long finishCnt; // @synthesize finishCnt=_finishCnt;
@property(retain, nonatomic) WCSafetyReportBaseData *baseData; // @synthesize baseData=_baseData;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

