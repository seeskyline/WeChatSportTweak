//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface O2OMerchantTabView : UIView
{
    UIButton *_homebutton;
    UIButton *_activitybutton;
    UIButton *_currentSelected;
    UIView *_bottomLine;
    UIView *_bottomView;
    id <O2OMerchantTabViewDelegate> _delegate;
}

+ (double)viewHeight;
@property(nonatomic) __weak id <O2OMerchantTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tabButtonClick:(id)arg1;
- (void)updateTitlefont;
- (id)initTabView:(id)arg1;

@end

