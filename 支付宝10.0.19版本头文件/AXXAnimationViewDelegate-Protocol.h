//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXXAnimationView, UIButton;

@protocol AXXAnimationViewDelegate <NSObject>
- (void)animationView:(AXXAnimationView *)arg1 didClickBtn:(UIButton *)arg2;

@optional
- (void)audioPlayerDidEndPlaying:(AXXAnimationView *)arg1;
- (void)animationView:(AXXAnimationView *)arg1 didTouchBtn:(UIButton *)arg2;
@end

