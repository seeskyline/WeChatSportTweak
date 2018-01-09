//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APVideoPlayer, NSError;

@protocol APVideoPlayerDelegate <NSObject>

@optional
- (void)videoPlayer:(APVideoPlayer *)arg1 loadedTime:(double)arg2;
- (void)videoPlayerDidReadyToPlay:(APVideoPlayer *)arg1;
- (void)videoPlayerStateChangedTo:(unsigned long long)arg1 oldStatus:(unsigned long long)arg2;
- (void)videoPlayerDidFinishToEnd:(APVideoPlayer *)arg1;
- (void)videoPlayer:(APVideoPlayer *)arg1 playedCurrentTime:(double)arg2;
- (void)videoPlayerDidStartToPlay:(APVideoPlayer *)arg1;
- (void)videoPlayer:(APVideoPlayer *)arg1 failedWithError:(NSError *)arg2;
@end

