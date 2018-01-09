//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCardDataManager, NSString;

@interface NTLDataManager : NSObject
{
    CBCardDataManager *_cbDataManager;
}

+ (void)logReportWithCCardList:(id)arg1;
+ (void)loadmoreCallback:(CDUnknownBlockType)arg1 cards:(id)arg2 hasMore:(_Bool)arg3 resp:(id)arg4;
+ (void)refreshCallback:(CDUnknownBlockType)arg1 ccards:(id)arg2 hasMore:(_Bool)arg3 resp:(id)arg4;
+ (void)setLastSystemTime:(long long)arg1;
+ (long long)lastSystemTime;
@property(retain, nonatomic) CBCardDataManager *cbDataManager; // @synthesize cbDataManager=_cbDataManager;
- (void).cxx_destruct;
- (void)markCard:(id)arg1 withOperation:(id)arg2 andExt:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)requestLoadmoreCards:(CDUnknownBlockType)arg1;
- (id)requestRefreshCards:(CDUnknownBlockType)arg1;
- (void)loadmoreCards:(CDUnknownBlockType)arg1;
- (void)refreshCards:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool hasMore;
@property(retain, nonatomic) NSString *lastFeedId;
- (id)init;

@end

