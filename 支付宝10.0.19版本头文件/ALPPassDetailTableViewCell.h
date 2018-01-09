//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewCell.h"

@class APPassDetailBaseData, UILabel, UIView;

@interface ALPPassDetailTableViewCell : APTableViewCell
{
    _Bool _isLast;
    UILabel *_cellTitle;
    UILabel *_cellInfo;
    APPassDetailBaseData *_data;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) APPassDetailBaseData *data; // @synthesize data=_data;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(retain, nonatomic) UILabel *cellInfo; // @synthesize cellInfo=_cellInfo;
@property(retain, nonatomic) UILabel *cellTitle; // @synthesize cellTitle=_cellTitle;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)addView:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)setInfo:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

