//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, TLSceneFeedLoadHelper;

@interface TLSceneDetailPreloader : NSObject
{
    NSMutableDictionary *_preloadPlumpSceneFlyout;
    id <TLSceneDetailPreloaderDelegate> _delegate;
    NSArray *_preloadSceneList;
    TLSceneFeedLoadHelper *_feedLoadHelper;
}

+ (id)sharedSceneDetailPreloader;
@property(retain, nonatomic) TLSceneFeedLoadHelper *feedLoadHelper; // @synthesize feedLoadHelper=_feedLoadHelper;
@property(retain, nonatomic) NSArray *preloadSceneList; // @synthesize preloadSceneList=_preloadSceneList;
@property(nonatomic) __weak id <TLSceneDetailPreloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *preloadPlumpSceneFlyout; // @synthesize preloadPlumpSceneFlyout=_preloadPlumpSceneFlyout;
- (void).cxx_destruct;
- (id)mFeedLoadHelper;
- (id)mPreloadPlumpSceneFlyout;
- (id)checkPreload:(id)arg1;
- (void)removePlayedSceneFeed:(id)arg1 forScene:(id)arg2;
- (void)appendLastestSceneFeeds:(id)arg1 forScene:(id)arg2;
- (void)handleResp:(id)arg1;
- (id)init;

@end

