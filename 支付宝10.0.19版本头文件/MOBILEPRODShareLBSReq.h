//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MOBILEPRODShareLBSReq : NSObject
{
    NSString *_sessionId;
    NSString *_lat;
    NSString *_lng;
    NSString *_bizType;
}

@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSString *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;

@end

