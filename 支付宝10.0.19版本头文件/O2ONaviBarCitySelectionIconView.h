//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUNavItemView.h"

@class UIFont, UIImageView, UIViewController;

@interface O2ONaviBarCitySelectionIconView : AUNavItemView
{
    UIImageView *_selectIcon;
    UIFont *_titleFont;
    UIViewController *_vc;
}

@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeCity:(id)arg1;
- (void)onClicked;
- (void)setItemTitle:(id)arg1;
- (id)titleFont;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithVC:(id)arg1;

@end

