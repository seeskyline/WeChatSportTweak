//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KABAOPRODPassInfoReq : NSObject
{
    _Bool _isPreOper;
    NSString *_passId;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_partnerId;
    NSString *_serialNumber;
    NSString *_cityAdCode;
    NSString *_dtLogMonitor;
}

@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *cityAdCode; // @synthesize cityAdCode=_cityAdCode;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(nonatomic) _Bool isPreOper; // @synthesize isPreOper=_isPreOper;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
- (void).cxx_destruct;

@end

