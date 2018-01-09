//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSDictionary;

@interface APStepInfo : NSObject <NSCopying>
{
    long long _numberOfSteps;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _source;
    NSDictionary *_extraInfo;
}

@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

