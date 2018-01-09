//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PromotionCenterDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface O2OCommonCDPAdapter : NSObject <PromotionCenterDelegate>
{
    NSObject<OS_dispatch_queue> *_promotionQueue;
    NSMutableDictionary *_promotionObservers;
    NSMutableDictionary *_promotinCacheDatas;
}

+ (void)feedback:(id)arg1 objectId:(id)arg2 behavior:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)checkSpaceCodes:(id)arg1 extInfo:(id)arg2 immediately:(_Bool)arg3;
+ (void)getSpaceInfos:(id)arg1 extInfo:(id)arg2 immediately:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)getSpaceView:(id)arg1 extInfo:(id)arg2 immediately:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *promotinCacheDatas; // @synthesize promotinCacheDatas=_promotinCacheDatas;
@property(retain, nonatomic) NSMutableDictionary *promotionObservers; // @synthesize promotionObservers=_promotionObservers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *promotionQueue; // @synthesize promotionQueue=_promotionQueue;
- (void).cxx_destruct;
- (id)generatePromotionObserverId:(id)arg1;
- (void)sendPromotionDataWithSpaceInfo:(id)arg1 spaceCode:(id)arg2;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)removeObserverQuence:(id)arg1 spaceCode:(id)arg2;
- (void)addObserverQuence:(id)arg1 spaceCodes:(id)arg2;
- (void)removeObserver:(id)arg1 spaceCodes:(id)arg2;
- (void)addObserverOnlyWithRegister:(id)arg1 spaceCodes:(id)arg2;
- (void)addObserverForSpaceData:(id)arg1 spaceCodes:(id)arg2 extInfo:(id)arg3 immediately:(_Bool)arg4;
- (void)addObserverForSpaceView:(id)arg1 spaceCodes:(id)arg2 extInfo:(id)arg3 immediately:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

