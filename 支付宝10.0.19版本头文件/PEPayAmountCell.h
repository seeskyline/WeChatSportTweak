//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AUInputBox, UILabel, UITextField, UIView;

@interface PEPayAmountCell : UITableViewCell
{
    UIView *_payAmountCard;
    UILabel *_amountLabel;
    UILabel *_symbolLabel;
    AUInputBox *_amountInputBox;
    UIView *_sepLine;
    UITextField *_memoInputBox;
}

+ (double)cellHeight;
@property(retain, nonatomic) UITextField *memoInputBox; // @synthesize memoInputBox=_memoInputBox;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) AUInputBox *amountInputBox; // @synthesize amountInputBox=_amountInputBox;
@property(retain, nonatomic) UILabel *symbolLabel; // @synthesize symbolLabel=_symbolLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UIView *payAmountCard; // @synthesize payAmountCard=_payAmountCard;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

