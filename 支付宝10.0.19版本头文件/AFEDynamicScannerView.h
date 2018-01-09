//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface AFEDynamicScannerView : UIView
{
    UIView *_view;
    UIImageView *_lightBGView;
    UIImageView *_darkBGView;
    UIImageView *_crossView;
    UIImageView *_luCornerView;
    UIImageView *_ruCornerView;
    UIImageView *_ldCornerView;
    UIImageView *_rdCornerView;
}

@property(nonatomic) __weak UIImageView *rdCornerView; // @synthesize rdCornerView=_rdCornerView;
@property(nonatomic) __weak UIImageView *ldCornerView; // @synthesize ldCornerView=_ldCornerView;
@property(nonatomic) __weak UIImageView *ruCornerView; // @synthesize ruCornerView=_ruCornerView;
@property(nonatomic) __weak UIImageView *luCornerView; // @synthesize luCornerView=_luCornerView;
@property(nonatomic) __weak UIImageView *crossView; // @synthesize crossView=_crossView;
@property(nonatomic) __weak UIImageView *darkBGView; // @synthesize darkBGView=_darkBGView;
@property(nonatomic) __weak UIImageView *lightBGView; // @synthesize lightBGView=_lightBGView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)beginAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)beginAnimationWithAnimationDuration:(double)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

