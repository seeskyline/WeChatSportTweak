//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

@interface AUSegmentedControlItem : UIView
{
    _Bool _selected;
    _Bool _fixedWidth;
    id <AUSegmentedControlItemDelegate> _delegate;
    UIFont *_titleFont;
    UIColor *_selectedColor;
    long long _textHorizontalPadding;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(nonatomic) long long textHorizontalPadding; // @synthesize textHorizontalPadding=_textHorizontalPadding;
@property(copy, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) __weak id <AUSegmentedControlItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

