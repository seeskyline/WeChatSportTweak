//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, TLPlumpScene, TLSceneDetailController;

@protocol TLSceneDetailControllerDelegate <NSObject>
- (void)sceneDetailControllerFinishReward:(TLSceneDetailController *)arg1;
- (void)sceneDetailController:(TLSceneDetailController *)arg1 failFetchSceneFeedList:(NSError *)arg2 validSceneFeedList:(NSArray *)arg3;
- (void)sceneDetailController:(TLSceneDetailController *)arg1 finishFetchSceneFeedList:(NSArray *)arg2;
- (void)sceneDetailController:(TLSceneDetailController *)arg1 failEnterSceneDetail:(NSError *)arg2 enterLiveShowPlumpScene:(TLPlumpScene *)arg3 validSceneFeedList:(NSArray *)arg4;
- (void)sceneDetailController:(TLSceneDetailController *)arg1 finishEnterLiveShow:(TLPlumpScene *)arg2 newFeeds:(NSArray *)arg3 alertMemo:(NSString *)arg4;
@end

