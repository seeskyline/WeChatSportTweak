//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class APSocialTagListItem, MFAttributeLabel, UILabel;

@interface APSocialTagListCell : UITableViewCell
{
    UILabel *_titleLabel;
    MFAttributeLabel *_detailLabel;
    APSocialTagListItem *_socialTagListItem;
}

@property(retain, nonatomic) APSocialTagListItem *socialTagListItem; // @synthesize socialTagListItem=_socialTagListItem;
@property(retain, nonatomic) MFAttributeLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureCellWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)adjustFrames;
- (void)commonInitialization;

@end

