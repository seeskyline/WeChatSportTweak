//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DRMOBILECSABaseRpcRequest : NSObject
{
    NSString *_cityId;
    double _x;
    double _y;
    NSString *_recommendId;
    NSString *_src;
    NSString *_positionInx;
    NSString *_monitorParams;
}

@property(retain, nonatomic) NSString *monitorParams; // @synthesize monitorParams=_monitorParams;
@property(retain, nonatomic) NSString *positionInx; // @synthesize positionInx=_positionInx;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *recommendId; // @synthesize recommendId=_recommendId;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;

@end

