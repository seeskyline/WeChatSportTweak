//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableRow.h"

@class MVNowPlayingFilmListCell, MVShowModel, NSString;

@interface MVNowPlayingFilmListRow : MVTableRow
{
    _Bool _isUpcoming;
    _Bool _shouldShowActivityTag;
    _Bool _forceShowOpenDay;
    _Bool _shouldShowBottomLine;
    MVShowModel *_showMo;
    NSString *_activityId;
    MVNowPlayingFilmListCell *_cell;
}

+ (id)rowWithShow:(id)arg1;
@property(nonatomic) __weak MVNowPlayingFilmListCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool shouldShowBottomLine; // @synthesize shouldShowBottomLine=_shouldShowBottomLine;
@property(nonatomic) _Bool forceShowOpenDay; // @synthesize forceShowOpenDay=_forceShowOpenDay;
@property(nonatomic) _Bool shouldShowActivityTag; // @synthesize shouldShowActivityTag=_shouldShowActivityTag;
@property(nonatomic) _Bool isUpcoming; // @synthesize isUpcoming=_isUpcoming;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) MVShowModel *showMo; // @synthesize showMo=_showMo;
- (void).cxx_destruct;
- (id)posterImageView;
- (double)cellHeight;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (void)buyButtonTapped:(id)arg1;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;

@end

