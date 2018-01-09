//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView;

@interface AFEStatusBar : UIView
{
    UIView *_view;
    UIImageView *_cancelView;
    UIImageView *_soundOff;
    UIImageView *_soundOn;
    UIImageView *_imageViewIsRecording;
    UIButton *_cancelButton;
    UIButton *_soundButton;
    id <IStatusBarDelegate> _delegate;
}

@property(nonatomic) __weak id <IStatusBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *soundButton; // @synthesize soundButton=_soundButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIImageView *imageViewIsRecording; // @synthesize imageViewIsRecording=_imageViewIsRecording;
@property(nonatomic) __weak UIImageView *soundOn; // @synthesize soundOn=_soundOn;
@property(nonatomic) __weak UIImageView *soundOff; // @synthesize soundOff=_soundOff;
@property(nonatomic) __weak UIImageView *cancelView; // @synthesize cancelView=_cancelView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)showSoundStatus:(_Bool)arg1;
- (void)onButtonSound:(id)arg1;
- (void)onButtonCancel:(id)arg1;
- (void)setTransparent:(double)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

