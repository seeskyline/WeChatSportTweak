//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface FAYebTransferTableViewCell : UITableViewCell
{
    UILabel *_cellAmountLabel;
    UILabel *_cellTimeLabel;
    UILabel *_cellDetailLabel;
}

@property(retain, nonatomic) UILabel *cellDetailLabel; // @synthesize cellDetailLabel=_cellDetailLabel;
@property(retain, nonatomic) UILabel *cellTimeLabel; // @synthesize cellTimeLabel=_cellTimeLabel;
@property(retain, nonatomic) UILabel *cellAmountLabel; // @synthesize cellAmountLabel=_cellAmountLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupConstaint;
- (void)setupLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

