//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, TLFeedDetailDataManager, TLOption, TLPlumpFeed;

@protocol TLFeedDetailDataManagerDelegate <NSObject>

@optional
- (void)dataManagerdidFinishSendToFriend:(TLFeedDetailDataManager *)arg1 error:(NSError *)arg2;
- (void)dataManager:(TLFeedDetailDataManager *)arg1 didFeedPraise:(TLOption *)arg2 error:(NSError *)arg3 isCancel:(_Bool)arg4;
- (void)dataManager:(TLFeedDetailDataManager *)arg1 didDeletePhotoRelatedFeed:(TLPlumpFeed *)arg2 error:(NSError *)arg3;
- (void)dataManager:(TLFeedDetailDataManager *)arg1 didFinishSaveImage:(NSError *)arg2;
- (void)dataManager:(TLFeedDetailDataManager *)arg1 didFinishMoreDataLoad:(NSArray *)arg2 hasMore:(_Bool)arg3 error:(NSError *)arg4;
- (void)dataManager:(TLFeedDetailDataManager *)arg1 didFinishDataLoad:(NSArray *)arg2 error:(NSError *)arg3;
@end

