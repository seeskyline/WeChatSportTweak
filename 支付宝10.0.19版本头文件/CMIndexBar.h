//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIFont;

@interface CMIndexBar : UIView
{
    id <CMIndexBarDelegate> delegate;
    UIColor *highlightedBackgroundColor;
    UIColor *textColor;
    UIFont *_textFont;
}

@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor;
@property(nonatomic) __weak id <CMIndexBarDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)moveHandler:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)clearIndex;
- (void)setIndexes:(id)arg1;
- (void)layoutSubviews;
- (void)initializeDefaults;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

