//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVBaseTableViewCell.h"

@class MVBorderedButton, MVNextDayView, MVTagGroupView, UILabel, UIView;

@interface MVScheduleTableViewCell : MVBaseTableViewCell
{
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    _Bool _onlyShowCurrentPrice;
    _Bool _topSeparatorVisible;
    _Bool _bottomSeparatorVisible;
    _Bool _darkMode;
    long long _cellType;
    UILabel *_showTimeLabel;
    UILabel *_endShowTimeLabel;
    UILabel *_showVerionLabel;
    UILabel *_hallNameLabel;
    UILabel *_activityLabel;
    MVTagGroupView *_activityGroup;
    UILabel *_greenCardLabel;
    MVNextDayView *_nextDayView;
    MVBorderedButton *_buyButton;
    UILabel *_currentPriceLabel;
    UILabel *_oldPriceLabel;
}

@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) _Bool bottomSeparatorVisible; // @synthesize bottomSeparatorVisible=_bottomSeparatorVisible;
@property(nonatomic) _Bool topSeparatorVisible; // @synthesize topSeparatorVisible=_topSeparatorVisible;
@property(nonatomic) _Bool onlyShowCurrentPrice; // @synthesize onlyShowCurrentPrice=_onlyShowCurrentPrice;
@property(retain, nonatomic) UILabel *oldPriceLabel; // @synthesize oldPriceLabel=_oldPriceLabel;
@property(retain, nonatomic) UILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
@property(retain, nonatomic) MVBorderedButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) MVNextDayView *nextDayView; // @synthesize nextDayView=_nextDayView;
@property(retain, nonatomic) UILabel *greenCardLabel; // @synthesize greenCardLabel=_greenCardLabel;
@property(retain, nonatomic) MVTagGroupView *activityGroup; // @synthesize activityGroup=_activityGroup;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UILabel *hallNameLabel; // @synthesize hallNameLabel=_hallNameLabel;
@property(retain, nonatomic) UILabel *showVerionLabel; // @synthesize showVerionLabel=_showVerionLabel;
@property(retain, nonatomic) UILabel *endShowTimeLabel; // @synthesize endShowTimeLabel=_endShowTimeLabel;
@property(retain, nonatomic) UILabel *showTimeLabel; // @synthesize showTimeLabel=_showTimeLabel;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (_Bool)isSmallScreenMode;
- (void)setCurrentPriceString:(id)arg1 enabled:(_Bool)arg2;
- (void)updateConstraints;
- (id)initWithCellType:(long long)arg1 reuseIdentifier:(id)arg2;

@end

