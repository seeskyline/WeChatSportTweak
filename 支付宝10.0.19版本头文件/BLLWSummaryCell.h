//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLLWCell.h"

@class BLLWSummaryBGView, BLLWTextView;

@interface BLLWSummaryCell : BLLWCell
{
    BLLWSummaryBGView *_bg;
    BLLWTextView *_title;
}

@property(retain, nonatomic) BLLWTextView *title; // @synthesize title=_title;
@property(retain, nonatomic) BLLWSummaryBGView *bg; // @synthesize bg=_bg;
- (void).cxx_destruct;
- (void)click;
- (id)summaryData;
- (id)summaryLayout;
- (id)summaryStyle;
- (id)dequeueReusableSummaryDetailView;
- (void)refreshWithData:(id)arg1 Style:(id)arg2 Layout:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

