//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewBaseCell.h"

@class BEECity, UIButton, UIImageView, UILabel;

@interface BEECityLBSCell : APTableViewBaseCell
{
    UIButton *_lbsButton;
    UIImageView *_lbsImageView;
    UILabel *_lbsLabel;
    BEECity *_lbsBEECity;
    id <BEECityLBSCellDelegate> _lbsDelegate;
}

@property(nonatomic) __weak id <BEECityLBSCellDelegate> lbsDelegate; // @synthesize lbsDelegate=_lbsDelegate;
- (void).cxx_destruct;
- (void)clickButton:(id)arg1;
- (id)getBEECityName;
- (void)setBEECityName:(id)arg1;
- (void)setBEECity:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

