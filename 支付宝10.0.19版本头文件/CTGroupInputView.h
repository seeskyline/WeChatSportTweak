//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTChatGrowingTextView, UIButton;

@interface CTGroupInputView : UIView
{
    CTChatGrowingTextView *_growInput;
    UIButton *_tools;
    int _butStyle;
    id <CTGroupInputViewDelegate> _delegate;
    UIButton *_record;
    UIButton *_emoji;
}

@property(retain, nonatomic) UIButton *tools; // @synthesize tools=_tools;
@property(retain, nonatomic) UIButton *emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) UIButton *record; // @synthesize record=_record;
@property(retain, nonatomic) CTChatGrowingTextView *growInput; // @synthesize growInput=_growInput;
@property(nonatomic) int butStyle; // @synthesize butStyle=_butStyle;
@property(nonatomic) __weak id <CTGroupInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupUI;
- (void)toolsBtnTaped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

