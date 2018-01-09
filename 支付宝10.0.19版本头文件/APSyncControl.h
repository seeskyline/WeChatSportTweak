//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSyncDataManagerDelegate.h"
#import "APSyncDirectDataManagerDelegate.h"
#import "APSyncPBFactoryDelegate.h"

@class APSyncDataManager, APSyncDirectDataManager, APSyncPBFactory, DTLonglinkDBService, NSString;

@interface APSyncControl : NSObject <APSyncPBFactoryDelegate, APSyncDirectDataManagerDelegate, APSyncDataManagerDelegate>
{
    APSyncPBFactory *_factory;
    APSyncDataManager *_syncDataManager;
    APSyncDirectDataManager *_syncDirectDataManager;
    DTLonglinkDBService *_longlinkDBService;
    long long _dbExcNum;
    NSString *_lastErrorInfo;
}

+ (void)setAccessInstance:(id)arg1;
+ (id)accessInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *lastErrorInfo; // @synthesize lastErrorInfo=_lastErrorInfo;
@property(nonatomic) long long dbExcNum; // @synthesize dbExcNum=_dbExcNum;
@property(retain, nonatomic) DTLonglinkDBService *longlinkDBService; // @synthesize longlinkDBService=_longlinkDBService;
@property(retain, nonatomic) APSyncDirectDataManager *syncDirectDataManager; // @synthesize syncDirectDataManager=_syncDirectDataManager;
@property(retain, nonatomic) APSyncDataManager *syncDataManager; // @synthesize syncDataManager=_syncDataManager;
@property(retain, nonatomic) APSyncPBFactory *factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (void)reportBizRequestWithBiz:(id)arg1 key:(id)arg2 version:(id)arg3 timestamp:(long long)arg4;
- (id)getBizSkey:(id)arg1;
- (void)deleteMsgIdIfMax;
- (void)cancelShortLinkTimer;
- (void)cancelTimerShort;
- (void)startShortLinkTimer:(_Bool)arg1;
- (void)sendShortLinkIfShortLinkOpen;
- (void)timeToSendShortLink;
- (void)sendDeviceUserBizShortLink;
- (void)addAck9001:(id)arg1 list:(id)arg2;
- (long long)processSaveTopicOplog:(id)arg1 keyDicId:(id)arg2 biz:(id)arg3 inDB:(id)arg4 logs:(id)arg5;
- (long long)processSaveDispTopicOplog:(id)arg1 keyDicId:(id)arg2 bizSyncInfo:(id)arg3 biz:(id)arg4 logs:(id)arg5;
- (void)dealWithPostResult:(long long)arg1 header:(id)arg2 biz:(id)arg3 hasMsg:(_Bool)arg4;
- (long long)processSaveDispatchTopicMsg:(id)arg1 keyDicId:(id)arg2 bizSyncInfo:(id)arg3 header:(id)arg4 type:(long long)arg5 logs:(id)arg6;
- (void)sendSyncMessage9002BizSyncInfo:(id)arg1 forwardIP:(unsigned int)arg2 header:(id)arg3 message9001:(id)arg4 logs:(id)arg5;
- (long long)processCommandDataSync9001:(id)arg1 header:(id)arg2;
- (void)loadUserIdBy9001:(id)arg1;
- (void)sendSyncMessage7002BizSyncInfo:(id)arg1 forwardIP:(unsigned int)arg2 header:(id)arg3 message7001:(id)arg4;
- (id)keyDicIdBy7001:(id)arg1;
- (void)loadUserIdBy7001:(id)arg1;
- (id)oplogWithOp:(id)arg1 pushData:(id)arg2 keyDicId:(id)arg3 biz:(id)arg4 msgId:(id)arg5;
- (void)addOplogData:(id)arg1 list:(id)arg2;
- (void)addPushData:(id)arg1 list:(id)arg2;
- (void)addAck:(id)arg1 list:(id)arg2;
- (long long)processSaveOplog:(id)arg1 keyDicId:(id)arg2 bizSyncInfo:(id)arg3 biz:(id)arg4 inDB:(id)arg5;
- (long long)processSaveDispOplog:(id)arg1 keyDicId:(id)arg2 bizSyncInfo:(id)arg3 biz:(id)arg4;
- (long long)processSaveDispatchMsg:(id)arg1 keyDicId:(id)arg2 bizSyncInfo:(id)arg3 header:(id)arg4 type:(long long)arg5;
- (long long)processCommandDataSync7001:(id)arg1 header:(id)arg2;
- (void)sendSyncMessage6006BizSyncInfo:(id)arg1 bucketSyncInfo:(id)arg2 forwardIP:(unsigned int)arg3 header:(id)arg4;
- (void)updateBucketKeyDic:(id)arg1 bucketType:(id)arg2 newBucketkey:(long long)arg3 bucketKey:(id)arg4;
- (id)oldBucketKeyWithDic:(id)arg1 bucketKey:(id)arg2 bucketType:(id)arg3;
- (long long)processBucketData:(id)arg1 keyDicId:(id)arg2 sKeyDic:(id)arg3 bucketKey:(id)arg4 bizSyncInfo:(id)arg5 bucketBizInfo:(id)arg6 opcode:(id)arg7 header:(id)arg8 type:(long long)arg9;
- (_Bool)hasBucketData:(id)arg1;
- (long long)processUserData:(id)arg1 keyDicId:(id)arg2 sKeyDic:(id)arg3 bizSyncInfo:(id)arg4 bucketBizInfo:(id)arg5 header:(id)arg6 opcode:(id)arg7;
- (long long)processDeviceData:(id)arg1 sKeyDic:(id)arg2 bizSyncInfo:(id)arg3 bucketBizInfo:(id)arg4 header:(id)arg5 opcode:(id)arg6;
- (long long)processCommandDataSync6005:(id)arg1 header:(id)arg2;
- (void)sendSyncMessage2012BucketSyncInfo:(id)arg1 bizSyncInfo:(id)arg2 header:(id)arg3 message2011:(id)arg4 keyDicId:(id)arg5;
- (long long)processCommandDataSync2011:(id)arg1 header:(id)arg2;
- (void)loadUserIdIfNeedWithSyncData:(id)arg1;
- (_Bool)needLocalUserPrincipalId:(id)arg1;
- (long long)insertMsgId:(id)arg1 keyDicId:(id)arg2 biz:(id)arg3;
- (void)addStatIdBy2007:(id)arg1 biz:(id)arg2 statIdList:(id)arg3 keyDicId:(id)arg4;
- (id)oplogToString:(id)arg1 biz:(id)arg2 keyDicId:(id)arg3 statIdList:(id)arg4;
- (long long)dispatchOplogDir:(id)arg1 keyDicId:(id)arg2 statIdList:(id)arg3;
- (long long)processCommandDataSync2007:(id)arg1;
- (void)stopPostMessage;
- (void)sendSyncRequest:(id)arg1;
- (void)sendMessage:(id)arg1 biz:(id)arg2;
- (void)saveSkeyAndSendFlag:(int)arg1 biz:(id)arg2 sKey:(id)arg3 flag:(id)arg4;
- (void)refreshSkey:(id)arg1 sKey:(id)arg2;
- (void)send4001DataWithSyncKey:(long long)arg1 bizEnum:(long long)arg2 error:(id)arg3 errorCode:(long long)arg4 principalId:(id)arg5;
- (void)send4001DataWithSyncKey:(id)arg1 biz:(id)arg2 error:(id)arg3 errorCode:(long long)arg4 principalId:(id)arg5;
- (void)sendFaildNotifyDelegate:(id)arg1 biz:(id)arg2;
- (void)responseMessageNotify:(id)arg1;
- (void)sendSyncMessage2002BucketSyncInfo:(id)arg1 bizSyncInfo:(id)arg2 forwardIP:(unsigned int)arg3 header:(id)arg4 message2001:(id)arg5;
- (id)oplogToDic:(id)arg1;
- (id)oplogToString:(id)arg1 oldSKey:(id)arg2;
- (id)ackMsgToString:(id)arg1;
- (void)processCommandDataSync2005:(id)arg1;
- (void)postCacheMessageWithBiz:(id)arg1;
- (id)oplogWithSyncData:(id)arg1 pushData:(id)arg2 keyDicId:(id)arg3 biz:(id)arg4 syncsMd:(id)arg5 newKey:(id)arg6;
- (long long)addStatId:(id)arg1 biz:(id)arg2 statIdList:(id)arg3 keyDicId:(id)arg4 inDB:(id)arg5;
- (long long)processSKeySaveSyncData:(id)arg1 keyDicId:(id)arg2 biz:(id)arg3 inDB:(id)arg4 newKey:(id)arg5 oldKey:(id)arg6 statIdList:(id)arg7;
- (long long)saveDispatchOplog:(id)arg1 keyDicId:(id)arg2 newKey:(id)arg3 oldKey:(id)arg4 error:(id *)arg5 statIdList:(id)arg6;
- (id)oldKeyAndUpdteBucketKeyDic:(id)arg1 bucketSyncKey:(long long)arg2 bucketKey:(id)arg3 bucketType:(id)arg4;
- (_Bool)hasBucketInfo:(id)arg1;
- (id)syncInfoWithBucketType:(int)arg1 bucketKey:(long long)arg2;
- (void)logDBExc;
- (void)addBizSyncInfo:(id)arg1 bizArray:(id)arg2 biz:(id)arg3 hasBucket:(_Bool)arg4;
- (void)ackToSpanner:(id)arg1 header:(id)arg2;
- (long long)processSaveDispatch:(id)arg1 keyDicId:(id)arg2 sKeyDic:(id)arg3 bizSyncInfo:(id)arg4 opcode:(id)arg5 header:(id)arg6 type:(long long)arg7 hasBucket:(_Bool)arg8;
- (_Bool)filterWithOldBucketKey:(id)arg1 bucketSyncKey:(long long)arg2;
- (void)logBucketNewSyncKey:(long long)arg1 bucketType:(id)arg2 oldBucketKey:(id)arg3 header:(id)arg4 formCMD:(id)arg5;
- (long long)processBucket:(id)arg1 keyDicId:(id)arg2 sKeyDic:(id)arg3 bucketKey:(id)arg4 header:(id)arg5 formCMD:(id)arg6;
- (id)bucketTypeWithBucketInfo:(int)arg1 syncKey:(long long)arg2;
- (long long)processCommandDataSync2001:(id)arg1 header:(id)arg2;
- (_Bool)saveExtInfo:(id)arg1 keyDicId:(id)arg2 principalIdType:(int)arg3;
- (void)loadUserIdIfNeed:(id)arg1;
- (_Bool)needLocalUserPrincipal:(id)arg1;
- (void)loadUserIfNeed:(id)arg1;
- (void)updateKeyDic:(id)arg1 biz:(id)arg2 newSkey:(id)arg3 principalId:(id)arg4;
- (id)oldKeyWithDic:(id)arg1 biz:(id)arg2 principalId:(id)arg3;
- (_Bool)verifyBiz:(long long)arg1 biz:(id)arg2;
- (_Bool)filterWithReceiveUserId:(id)arg1;
- (void)stopNotifySyncWithBiz:(id)arg1;
- (void)didReceiveError:(id)arg1;
- (void)didReceiveSyncDirectData:(id)arg1;
- (void)didReceiveSyncData:(id)arg1 header:(id)arg2;
- (void)processCommandDataSync1005:(id)arg1;
- (void)processCommandDataSync2009:(id)arg1 header:(id)arg2;
- (void)processDecodeResult9001:(id)arg1 header:(id)arg2;
- (void)processDecodeResult7001:(id)arg1 header:(id)arg2;
- (void)processDecodeResult2013:(id)arg1 header:(id)arg2;
- (void)decodeResult:(id)arg1 opCode:(long long)arg2 dataLen:(long long)arg3 header:(id)arg4;
- (void)sendSyncIdle;
- (void)sendUnBindUser;
- (void)sendBindUser;
- (void)sendBindUser:(id)arg1 sessionId:(id)arg2;
- (void)sendDeviceUserBiz;
@property(retain, nonatomic) NSString *sessionId;
@property(retain, nonatomic) NSString *userId;
- (_Bool)hasUserId;
- (id)accessInstanceInNeed;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

