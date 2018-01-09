//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface O2OSearchLocationInfoView : UIView
{
    id <O2OSearchLocationInfoViewDelegate> _delegate;
    UIButton *_refreshBtn;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(nonatomic) __weak id <O2OSearchLocationInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshBtnEndAnimation;
- (_Bool)isRefreshBtnAnimating;
- (void)refreshBtnBeginAnimation;
- (void)refreshText:(id)arg1;
- (id)currentText;
- (void)clickRefreshBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

