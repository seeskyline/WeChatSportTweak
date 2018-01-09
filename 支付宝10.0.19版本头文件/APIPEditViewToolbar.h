//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface APIPEditViewToolbar : UIView
{
    id <APIPEditViewToolbarDelegate> _delegate;
    UIButton *_hideKeyboardButton;
    UIButton *_showPickerImageButton;
}

@property(retain, nonatomic) UIButton *showPickerImageButton; // @synthesize showPickerImageButton=_showPickerImageButton;
@property(retain, nonatomic) UIButton *hideKeyboardButton; // @synthesize hideKeyboardButton=_hideKeyboardButton;
@property(nonatomic) __weak id <APIPEditViewToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (id)init;
- (void)EW_drawLine:(id)arg1 position:(long long)arg2 margin:(struct UIEdgeInsets)arg3;
- (void)EW_drawBottomLine:(id)arg1 margin:(struct UIEdgeInsets)arg2;
- (void)EW_drawBottomLine:(id)arg1;
- (void)EW_drawTopLine:(id)arg1;

@end

