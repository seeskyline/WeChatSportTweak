//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface RecommendOPRequest : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *alipayAccount; // @dynamic alipayAccount;
@property(readonly) _Bool hasAlipayAccount; // @dynamic hasAlipayAccount;
@property(readonly) _Bool hasTargetUserId; // @dynamic hasTargetUserId;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) NSString *targetUserId; // @dynamic targetUserId;
@property(nonatomic) int type; // @dynamic type;

@end

