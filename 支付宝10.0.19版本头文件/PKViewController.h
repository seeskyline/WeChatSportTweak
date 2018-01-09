//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFBaseViewController.h"

#import "PKCellDelegate.h"
#import "PKTableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PKCell, PKTableView, UIImageView;

@interface PKViewController : MFBaseViewController <PKTableViewDelegate, UITableViewDataSource, UITableViewDelegate, PKCellDelegate>
{
    _Bool _supportTimeLine;
    _Bool _isLoading;
    _Bool _editMode;
    UIImageView *_backgroundImageView;
    PKTableView *_tableView;
    NSDictionary *_widgetInfo;
    NSMutableArray *_dataArray;
    NSMutableDictionary *_indexPathDictionary;
    NSString *_strategyId;
    PKCell *_demoCell;
    NSString *_unknowCellTemplateId;
    NSMutableDictionary *_sectionMap;
}

@property(retain, nonatomic) NSMutableDictionary *sectionMap; // @synthesize sectionMap=_sectionMap;
@property(nonatomic) _Bool editMode; // @synthesize editMode=_editMode;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool supportTimeLine; // @synthesize supportTimeLine=_supportTimeLine;
@property(retain, nonatomic) NSString *unknowCellTemplateId; // @synthesize unknowCellTemplateId=_unknowCellTemplateId;
@property(retain, nonatomic) PKCell *demoCell; // @synthesize demoCell=_demoCell;
@property(retain, nonatomic) NSString *strategyId; // @synthesize strategyId=_strategyId;
@property(retain, nonatomic) NSMutableDictionary *indexPathDictionary; // @synthesize indexPathDictionary=_indexPathDictionary;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSDictionary *widgetInfo; // @synthesize widgetInfo=_widgetInfo;
@property(retain, nonatomic) PKTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)addExposureChatMessage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)markNoticeDisplayedIfNeed;
- (void)didMoveToParentViewController:(id)arg1;
- (void)back;
- (void)removeShareSourceWithIndex:(long long)arg1;
- (void)removeShareSourceWithSeed:(id)arg1;
- (id)clearRubbishItems:(id)arg1;
- (void)theFirstRecordTimeLabelWithItems:(id)arg1;
- (_Bool)updateByIndex:(long long)arg1;
- (void)removeAndUpdateCellWithIndexs:(id)arg1;
- (void)removeLayoutInformationWithIndex:(long long)arg1;
- (void)modifyLayoutInformationAtIndex:(unsigned long long)arg1 dimIndex:(unsigned long long)arg2;
- (void)removeSectionLayoutInfoWithIndex:(long long)arg1;
- (void)reloadTableView;
- (void)downloadVideoWithCell:(id)arg1 processState:(long long)arg2;
- (void)cancelDownloadVideoWithCell:(id)arg1;
- (void)uploadBigVideoWithCell:(id)arg1 processState:(long long)arg2;
- (void)cancelUploadVideoWithCell:(id)arg1;
- (void)relayoutCell:(id)arg1 args:(id)arg2;
- (void)didClickCell:(id)arg1 withLinkData:(id)arg2;
- (void)retryTapedWithCell:(id)arg1;
- (void)didClickHeadIcon:(id)arg1;
- (void)didDoubleClickCell:(id)arg1;
- (void)didClickCTCell:(id)arg1;
- (void)didLongPressHeadIcon:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)openUrl:(id)arg1 urlStr:(id)arg2;
- (id)allocPKCellWithIdentifier:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)dequeueReusablePKCellWithIdentifier:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)autoLayoutOperations:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)privateKeyWithIndex:(long long)arg1 withArray:(id)arg2;
- (_Bool)versionSupport:(id)arg1;
- (_Bool)matchingOfflineCellTemplate:(id)arg1;
- (_Bool)matchingCellTemplate:(id)arg1 messageMinVersion:(id)arg2;
- (void)setupUI;
- (id)layoutInfoWithTemplateId:(id)arg1 skin:(id)arg2;
- (void)releaseNotify;
- (void)setupNotify;
- (void)setupDemoCell;
- (void)loadMore;
- (void)loadData;
- (id)cellClaaName;
- (id)demoCellName;
- (void)postNotification:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

