//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface APTestConfigItem : NSObject
{
    NSMutableArray *_spmList;
    NSMutableDictionary *_params;
    NSString *_experimentId;
    NSNumber *_startTime;
    NSNumber *_endTime;
    NSString *_appName;
    NSString *_scenarioEntrance;
}

@property(retain, nonatomic) NSString *scenarioEntrance; // @synthesize scenarioEntrance=_scenarioEntrance;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *spmList; // @synthesize spmList=_spmList;
- (void).cxx_destruct;

@end

