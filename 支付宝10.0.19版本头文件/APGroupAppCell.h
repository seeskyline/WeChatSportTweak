//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APGroupCreateCell.h"

@class UIImageView, UILabel;

@interface APGroupAppCell : APGroupCreateCell
{
    UIImageView *_iconView;
    UILabel *_appTitleLabel;
    UILabel *_appDescLabel;
}

+ (float)cellHeight;
@property(retain, nonatomic) UILabel *appDescLabel; // @synthesize appDescLabel=_appDescLabel;
@property(retain, nonatomic) UILabel *appTitleLabel; // @synthesize appTitleLabel=_appTitleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)refreshGroupApp:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

