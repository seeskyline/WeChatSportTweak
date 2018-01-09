//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface TFBubbleView : UIView
{
    struct CGPoint _vertex[11];
    _Bool _vertexAssemblyComplete;
    long long _arrowDirection;
    double _arrowOffset;
    double _arrowWidth;
    double _arrowHeight;
    double _borderWidth;
    double _cornerRadius;
    UIColor *_fillColor;
    UIColor *_borderColor;
}

@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupVertex;
- (id)initWithFrame:(struct CGRect)arg1;

@end

