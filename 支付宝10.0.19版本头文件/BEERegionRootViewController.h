//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BEECityLocator, BEERegion, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UITableView;

@interface BEERegionRootViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool isShowSelectedRegion;
    _Bool _skipLocation;
    _Bool _isLocating;
    BEERegion *_regionHelper;
    NSDictionary *_lastSelectedResult;
    NSString *_maxLevel;
    NSMutableArray *_regions;
    UITableView *_tableView;
    NSString *_locationString;
    BEECityLocator *_locator;
    NSMutableDictionary *_lbsAddressInfo;
}

@property(retain, nonatomic) NSMutableDictionary *lbsAddressInfo; // @synthesize lbsAddressInfo=_lbsAddressInfo;
@property(retain, nonatomic) BEECityLocator *locator; // @synthesize locator=_locator;
@property(nonatomic) _Bool isLocating; // @synthesize isLocating=_isLocating;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *regions; // @synthesize regions=_regions;
@property(retain, nonatomic) NSString *maxLevel; // @synthesize maxLevel=_maxLevel;
@property(nonatomic) _Bool skipLocation; // @synthesize skipLocation=_skipLocation;
@property(retain, nonatomic) NSDictionary *lastSelectedResult; // @synthesize lastSelectedResult=_lastSelectedResult;
@property(retain, nonatomic) BEERegion *regionHelper; // @synthesize regionHelper=_regionHelper;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)hasRichedMaxLevel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)startLocating;
- (void)back;
- (void)didReceiveMemoryWarning;
- (void)updateDatasourceWithSelectedRegion:(id)arg1 selectedTag:(id)arg2;
- (void)dealloc;
- (void)applicationDidActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)readLocalDataOnlyChinese:(_Bool)arg1;
- (id)generateLocalRegionsWithLastSelected:(id)arg1;
- (id)init;
- (void)checkNeedUpdateCacheData;
- (id)generatePreferredLanguage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

