//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, NSTimer, UIColor;

@interface LSProgressView : UIView
{
    int _type;
    int _animateDirection;
    UIColor *_color;
    double _labelProgress;
    double _offset;
    NSTimer *_timer;
    double _stripeWidth;
    CAGradientLayer *_maskLayer;
    struct CGSize _stripeSize;
}

@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) struct CGSize stripeSize; // @synthesize stripeSize=_stripeSize;
@property(nonatomic) double stripeWidth; // @synthesize stripeWidth=_stripeWidth;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) int animateDirection; // @synthesize animateDirection=_animateDirection;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double labelProgress; // @synthesize labelProgress=_labelProgress;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)incrementOffset;
- (void)startAnimate;
- (void)stopAnimate;
- (void)dealloc;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

