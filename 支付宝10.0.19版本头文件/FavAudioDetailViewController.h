//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "UIActionSheetDelegate.h"

@class APActionSheet, FavDetailAudioPlayerView, NSString;

@interface FavAudioDetailViewController : FavBaseDetailViewController <UIActionSheetDelegate>
{
    APActionSheet *_moreActionSheet;
    APActionSheet *_deleteActionSheet;
    FavDetailAudioPlayerView *_audioPlayerView;
}

@property(retain, nonatomic) FavDetailAudioPlayerView *audioPlayerView; // @synthesize audioPlayerView=_audioPlayerView;
@property(retain, nonatomic) APActionSheet *deleteActionSheet; // @synthesize deleteActionSheet=_deleteActionSheet;
@property(retain, nonatomic) APActionSheet *moreActionSheet; // @synthesize moreActionSheet=_moreActionSheet;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteFavItem;
- (long long)numberOfRowsInContentSection;
- (double)heightForContentRowAtIndexPath:(id)arg1;
- (void)buildContentCell:(id)arg1 indexPath:(id)arg2;
- (void)onAction:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

