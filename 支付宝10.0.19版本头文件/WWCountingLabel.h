//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSNumber, NSString;

@interface WWCountingLabel : UILabel
{
    _Bool _isAppearing;
    _Bool _isAnimating;
    _Bool _animationNotStart;
    NSNumber *_maxValue;
    _Bool _canRoll;
    id <ALPTextDelegate> _textDelegate;
    NSString *_endValue;
    double _startValue;
    NSString *_scrollFormat;
}

+ (Class)layerClass;
@property(retain, nonatomic) NSString *scrollFormat; // @synthesize scrollFormat=_scrollFormat;
@property(nonatomic) double startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) NSString *endValue; // @synthesize endValue=_endValue;
@property(nonatomic) __weak id <ALPTextDelegate> textDelegate; // @synthesize textDelegate=_textDelegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (void)count:(_Bool)arg1 withDuration:(double)arg2;
- (void)count:(_Bool)arg1 withDuration:(double)arg2 force:(_Bool)arg3;
- (void)count:(_Bool)arg1;
- (id)textLayer;
- (void)animationWithDuration:(double)arg1 toValue:(id)arg2;
- (void)dealloc;
- (_Bool)isValid:(id)arg1 pattern:(id)arg2;
- (void)updateTextAlignment:(long long)arg1 withTextColor:(id)arg2 withFont:(id)arg3;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

