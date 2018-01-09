//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "REPopView.h"

@class GIFTPRODGiftCrowdDetailResult, REBlockButton, REButton, RECoinButton, REImageView, REReceiverAvatarView, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface REReceivePopView : REPopView
{
    _Bool w_isGreetCash;
    _Bool _isDiyTemplate;
    CDUnknownBlockType _unpackHandler;
    CDUnknownBlockType _closeHandler;
    CDUnknownBlockType _lookHandler;
    UIView *_containView;
    REImageView *_topImageView;
    UIImage *_topImage;
    REImageView *_bottomImageView;
    UIImage *_bottomImage;
    REReceiverAvatarView *_receiverAvatarView;
    GIFTPRODGiftCrowdDetailResult *_result;
    REBlockButton *_closeButton;
    UITapGestureRecognizer *_cancelTapGesture;
    UITapGestureRecognizer *_unpackTapGesture;
    REButton *_unpackButton;
    RECoinButton *_coinButton;
    UIView *_redenvelopEventView;
    UIImageView *_monkeyBgImageView;
    UILabel *_remarkLabel;
    CDUnknownBlockType _initComplete;
}

@property(copy, nonatomic) CDUnknownBlockType initComplete; // @synthesize initComplete=_initComplete;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) UIImageView *monkeyBgImageView; // @synthesize monkeyBgImageView=_monkeyBgImageView;
@property(retain, nonatomic) UIView *redenvelopEventView; // @synthesize redenvelopEventView=_redenvelopEventView;
@property(retain, nonatomic) RECoinButton *coinButton; // @synthesize coinButton=_coinButton;
@property(retain, nonatomic) REButton *unpackButton; // @synthesize unpackButton=_unpackButton;
@property(retain, nonatomic) UITapGestureRecognizer *unpackTapGesture; // @synthesize unpackTapGesture=_unpackTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *cancelTapGesture; // @synthesize cancelTapGesture=_cancelTapGesture;
@property(retain, nonatomic) REBlockButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) GIFTPRODGiftCrowdDetailResult *result; // @synthesize result=_result;
@property(retain, nonatomic) REReceiverAvatarView *receiverAvatarView; // @synthesize receiverAvatarView=_receiverAvatarView;
@property(retain, nonatomic) UIImage *bottomImage; // @synthesize bottomImage=_bottomImage;
@property(retain, nonatomic) REImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImage *topImage; // @synthesize topImage=_topImage;
@property(retain, nonatomic) REImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(nonatomic) _Bool isDiyTemplate; // @synthesize isDiyTemplate=_isDiyTemplate;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(copy, nonatomic) CDUnknownBlockType lookHandler; // @synthesize lookHandler=_lookHandler;
@property(copy, nonatomic) CDUnknownBlockType closeHandler; // @synthesize closeHandler=_closeHandler;
@property(copy, nonatomic) CDUnknownBlockType unpackHandler; // @synthesize unpackHandler=_unpackHandler;
- (void).cxx_destruct;
- (void)purgeView;
- (void)setTouchEnable:(_Bool)arg1;
- (void)displayText:(id)arg1 buttonText:(id)arg2 inView:(id)arg3 animated:(_Bool)arg4;
- (id)createButtonWithTitle:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)runCloseAnimation;
- (void)runCloseAnimationWithExitApp:(_Bool)arg1;
- (void)runAppearAnimation;
- (void)runUnpackAnimationForDIY;
- (void)runUnpackAnimationForNormal;
- (void)runUnpackAnimation;
- (void)onUnpackButtonClick:(id)arg1;
- (void)displayReadyToReceiveForNormalInView:(id)arg1 animated:(_Bool)arg2;
- (void)displayReadyToReceiveForDIYInView:(id)arg1 animated:(_Bool)arg2;
- (void)displayReadyToReceiveInView:(id)arg1 animated:(_Bool)arg2;
- (void)displayOverdueForNormalInView:(id)arg1 animated:(_Bool)arg2;
- (void)displayOverdueForDIYInView:(id)arg1 animated:(_Bool)arg2;
- (void)displaySexNotMatchInView:(id)arg1 text:(id)arg2 animated:(_Bool)arg3;
- (void)displayOverdueInView:(id)arg1 animated:(_Bool)arg2;
- (void)displayNoCouponForNormalInView:(id)arg1 animated:(_Bool)arg2;
- (void)displayNoCouponForDIYInView:(id)arg1 animated:(_Bool)arg2;
- (void)displayNoCouponInView:(id)arg1 animated:(_Bool)arg2;
- (void)close;
- (void)cancelAction:(id)arg1;
- (void)readyToReceiveClick:(id)arg1;
- (void)resetEvent;
- (void)displayInView:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)normalCommonInit;
- (void)resetTopImage:(id)arg1 bottomImge:(id)arg2;
- (void)diyCommonInit;
- (void)commonInitWithCopletion:(CDUnknownBlockType)arg1;
- (id)initWithResult:(id)arg1;

@end

