//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImage;

@interface BEEThumbView : UIView
{
    _Bool _isRight;
    UIColor *_color;
    UIImage *_thumbImage;
}

@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) _Bool isRight; // @synthesize isRight=_isRight;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 thumbImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 right:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

