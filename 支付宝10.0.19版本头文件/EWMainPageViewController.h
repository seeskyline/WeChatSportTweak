//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EWBaseViewController.h"

#import "BEECityPickerDelegate.h"
#import "UISearchBarDelegate.h"

@class APCustomNavigationView, EWMainPageFooterView, EWMainPageTableViewDelegate, EWMainPageViewModel, NSString, UISearchBar, UITableView;

@interface EWMainPageViewController : EWBaseViewController <BEECityPickerDelegate, UISearchBarDelegate>
{
    _Bool _showTitleSearch;
    float _yOffset;
    UITableView *_tableView;
    EWMainPageTableViewDelegate *_mainPageDelegate;
    APCustomNavigationView *_navigationView;
    UISearchBar *_searchBar;
    NSString *_backTitle;
    EWMainPageFooterView *_tableFooterView;
    EWMainPageFooterView *_backgroundHeaderView;
}

@property(retain, nonatomic) EWMainPageFooterView *backgroundHeaderView; // @synthesize backgroundHeaderView=_backgroundHeaderView;
@property(retain, nonatomic) EWMainPageFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(copy, nonatomic) NSString *backTitle; // @synthesize backTitle=_backTitle;
@property(nonatomic) _Bool showTitleSearch; // @synthesize showTitleSearch=_showTitleSearch;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) APCustomNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) EWMainPageTableViewDelegate *mainPageDelegate; // @synthesize mainPageDelegate=_mainPageDelegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) float yOffset; // @synthesize yOffset=_yOffset;
- (void).cxx_destruct;
- (void)processQueryHint:(id)arg1;
- (void)processBannerData:(id)arg1;
- (void)processBottomText:(id)arg1;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)citiesController:(id)arg1 didSelectCity:(id)arg2 needPopCityPicker:(_Bool *)arg3;
- (void)gotoCityPicker;
- (void)resetTitleSearch:(_Bool)arg1;
- (void)setNavSpecialStyleWithAlpha:(double)arg1;
- (void)setNavNormalStyleWithAlpha:(double)arg1;
- (void)updateNavigationContollerStyle:(double)arg1;
- (void)resetTableViewContentInset:(double)arg1;
- (_Bool)autohideNavigationBar;
- (id)customNavigationBar;
- (long long)customStatusBarStytle;
- (void)initView;
- (void)showExceptionStateView:(id)arg1;
- (void)initData;
- (void)viewDidLoad;
- (void)retry;
- (void)doRequest;
- (void)location;
- (void)viewDidAppear:(_Bool)arg1;
- (void)back;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) EWMainPageViewModel *viewModel;

@end

