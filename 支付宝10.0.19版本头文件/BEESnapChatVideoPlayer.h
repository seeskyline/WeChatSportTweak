//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeeVideoPlayerView.h"

#import "BeeVideoPlayerViewDelegate.h"

@class NSString;

@interface BEESnapChatVideoPlayer : BeeVideoPlayerView <BeeVideoPlayerViewDelegate>
{
    _Bool _isUserActionPlay;
    id <BEESnapChatVideoPlayerDelegate> _snapChatVideoDelegate;
    NSString *_beeBusiness;
}

@property(retain, nonatomic) NSString *beeBusiness; // @synthesize beeBusiness=_beeBusiness;
@property(nonatomic) _Bool isUserActionPlay; // @synthesize isUserActionPlay=_isUserActionPlay;
@property(nonatomic) __weak id <BEESnapChatVideoPlayerDelegate> snapChatVideoDelegate; // @synthesize snapChatVideoDelegate=_snapChatVideoDelegate;
- (void).cxx_destruct;
- (void)BeeVideoPlayerViewDidFinishPlay:(id)arg1;
- (void)BeeVideoPlayerView:(id)arg1 playedTime:(double)arg2;
- (void)BeeVideoPlayerViewDidStartPlay:(id)arg1;
- (void)resetVideo;
- (void)refreshVideoPlayer;
- (void)setVideoUrl:(id)arg1 business:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

