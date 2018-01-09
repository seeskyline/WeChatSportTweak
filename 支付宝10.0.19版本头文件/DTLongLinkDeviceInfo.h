//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DTLongLinkDeviceInfo : NSObject
{
    NSString *_imsi;
    NSString *_imei;
    NSString *_cKey;
    NSString *_udid;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(retain, nonatomic) NSString *cKey; // @synthesize cKey=_cKey;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
- (void).cxx_destruct;
- (id)generateRandomStringWithCount:(unsigned long long)arg1;
- (void)createClientKey;
- (void)createImsiImeiKey:(id)arg1;
- (id)getCarrier;
- (_Bool)canSendText;
- (void)prepareImeiImsi;
- (void)initData;

@end

