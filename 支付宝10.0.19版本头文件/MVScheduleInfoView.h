//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MVSeatTheme, UILabel;

@interface MVScheduleInfoView : UIView
{
    _Bool _isHotAreaAailable;
    UILabel *_cinemaNameLabel;
    UILabel *_scheduleInfoLabel;
    UIView *_seatDescriptionView;
    MVSeatTheme *_seatTheme;
}

@property(retain, nonatomic) MVSeatTheme *seatTheme; // @synthesize seatTheme=_seatTheme;
@property(nonatomic) _Bool isHotAreaAailable; // @synthesize isHotAreaAailable=_isHotAreaAailable;
@property(retain, nonatomic) UIView *seatDescriptionView; // @synthesize seatDescriptionView=_seatDescriptionView;
@property(retain, nonatomic) UILabel *scheduleInfoLabel; // @synthesize scheduleInfoLabel=_scheduleInfoLabel;
@property(retain, nonatomic) UILabel *cinemaNameLabel; // @synthesize cinemaNameLabel=_cinemaNameLabel;
- (void).cxx_destruct;
- (void)setupHallSampleView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

