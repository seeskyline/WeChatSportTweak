//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardDetailBaseRespVO.h"

@class NSString;

@interface CardDetailSyncUpStreamRespVO : CardDetailBaseRespVO
{
    NSString *_serverId;
    NSString *_clientId;
    long long _gmtCreate;
    long long _gmtModify;
    NSString *_clientDataRecoverUserId;
    NSString *_clientDataRecoverLogonId;
    NSString *_clientDataRecoverFeedId;
}

@property(retain, nonatomic) NSString *clientDataRecoverFeedId; // @synthesize clientDataRecoverFeedId=_clientDataRecoverFeedId;
@property(retain, nonatomic) NSString *clientDataRecoverLogonId; // @synthesize clientDataRecoverLogonId=_clientDataRecoverLogonId;
@property(retain, nonatomic) NSString *clientDataRecoverUserId; // @synthesize clientDataRecoverUserId=_clientDataRecoverUserId;
@property(nonatomic) long long gmtModify; // @synthesize gmtModify=_gmtModify;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
- (void).cxx_destruct;

@end

