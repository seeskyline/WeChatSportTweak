//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class LFCPBObjectInfo, NSString;

@interface GetRewardListPBReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasLastRewardId; // @dynamic hasLastRewardId;
@property(readonly) _Bool hasObjectInfo; // @dynamic hasObjectInfo;
@property(readonly) _Bool hasOrderBy; // @dynamic hasOrderBy;
@property(readonly) _Bool hasPageSize; // @dynamic hasPageSize;
@property(retain, nonatomic) NSString *lastRewardId; // @dynamic lastRewardId;
@property(retain, nonatomic) LFCPBObjectInfo *objectInfo; // @dynamic objectInfo;
@property(retain, nonatomic) NSString *orderBy; // @dynamic orderBy;
@property(nonatomic) int pageSize; // @dynamic pageSize;

@end

