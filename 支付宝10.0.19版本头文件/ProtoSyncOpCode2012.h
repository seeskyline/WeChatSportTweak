//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface ProtoSyncOpCode2012 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasHasMoreData;
    _Bool _hasPrincipalIdType;
    _Bool _hasPrincipalId;
    _Bool _hasMoreData;
    int _principalIdType;
    NSMutableArray *_bizSyncInfo;
    NSMutableArray *_bucketSyncInfo;
    NSMutableArray *_extInfo;
    NSString *_principalId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *principalId; // @synthesize principalId=_principalId;
@property(nonatomic) int principalIdType; // @synthesize principalIdType=_principalIdType;
@property(retain, nonatomic) NSMutableArray *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSMutableArray *bucketSyncInfo; // @synthesize bucketSyncInfo=_bucketSyncInfo;
@property(retain, nonatomic) NSMutableArray *bizSyncInfo; // @synthesize bizSyncInfo=_bizSyncInfo;
@property(readonly) _Bool hasPrincipalId; // @synthesize hasPrincipalId=_hasPrincipalId;
@property(readonly) _Bool hasPrincipalIdType; // @synthesize hasPrincipalIdType=_hasPrincipalIdType;
@property(readonly) _Bool hasHasMoreData; // @synthesize hasHasMoreData=_hasHasMoreData;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExtInfo:(id)arg1;
- (void)setExtInfoArray:(id)arg1;
- (void)addBucketSyncInfo:(id)arg1;
- (void)setBucketSyncInfoArray:(id)arg1;
- (void)addBizSyncInfo:(id)arg1;
- (void)setBizSyncInfoArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

