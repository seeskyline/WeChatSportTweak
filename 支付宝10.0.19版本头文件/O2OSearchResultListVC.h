//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OFilterViewDelegate.h"
#import "O2OLocationTipBarDelegate.h"
#import "O2OSearchLocationInfoViewDelegate.h"
#import "O2OSearchModelDelegate.h"
#import "O2OTagSelectedAction.h"
#import "UIGestureRecognizerDelegate.h"

@class APExceptionView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, O2OFilterView, O2OLocationTipBar, O2OSearchLocationInfoView, O2OSearchModel, O2OSearchResultViewDataDelegate, O2OSearchResultViewDelegate;

@interface O2OSearchResultListVC : O2OListViewController <O2OFilterViewDelegate, UIGestureRecognizerDelegate, O2OSearchModelDelegate, O2OLocationTipBarDelegate, O2OSearchLocationInfoViewDelegate, O2OTagSelectedAction>
{
    _Bool _isFirstRequest;
    _Bool _isNewQuery;
    _Bool _isHui;
    _Bool _shouldSpellCheck;
    _Bool _issearchHome;
    _Bool _isRefresh;
    _Bool _hasCheckLocationSetting;
    _Bool _showLocationInfoView;
    _Bool _delayCheckLocation;
    _Bool _ignorePullRefresh;
    _Bool _showFilterView;
    id <O2OSearchContainerVCDelegate> _containerVC;
    NSString *_target;
    unsigned long long _vcstyle;
    NSString *_searchSrc;
    NSString *_cityCode;
    NSString *_businessAreaId;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_query;
    NSString *_mlParams;
    NSDictionary *_selectedMenus;
    NSString *_activitySearchQuery;
    NSDictionary *_monitorDic;
    NSString *_monitorSrc;
    NSString *_ftCategoryId;
    NSDictionary *_paramsMap;
    NSString *_navigationType;
    NSString *_searchContext;
    NSDictionary *_preParamsMap;
    NSString *_preSearchContext;
    NSString *_preCategory;
    unsigned long long _reverseCityMode;
    NSString *_businessExt;
    O2OSearchModel *_searchModel;
    O2OFilterView *_filterView;
    APExceptionView *_netErrorView;
    APExceptionView *_netLimitView;
    NSArray *_menuGroups;
    NSArray *_filterMenuData;
    NSMutableArray *_objects_old;
    O2OSearchResultViewDelegate *_dl;
    O2OSearchResultViewDataDelegate *_ds;
    NSMutableDictionary *_voucherManagerDic;
    O2OLocationTipBar *_locationTipBar;
    O2OSearchLocationInfoView *_locationInfoView;
    NSString *_prePOIString;
}

@property(nonatomic) _Bool showFilterView; // @synthesize showFilterView=_showFilterView;
@property(nonatomic) _Bool ignorePullRefresh; // @synthesize ignorePullRefresh=_ignorePullRefresh;
@property(nonatomic) _Bool delayCheckLocation; // @synthesize delayCheckLocation=_delayCheckLocation;
@property(copy, nonatomic) NSString *prePOIString; // @synthesize prePOIString=_prePOIString;
@property(nonatomic) _Bool showLocationInfoView; // @synthesize showLocationInfoView=_showLocationInfoView;
@property(retain, nonatomic) O2OSearchLocationInfoView *locationInfoView; // @synthesize locationInfoView=_locationInfoView;
@property(nonatomic) _Bool hasCheckLocationSetting; // @synthesize hasCheckLocationSetting=_hasCheckLocationSetting;
@property(retain, nonatomic) O2OLocationTipBar *locationTipBar; // @synthesize locationTipBar=_locationTipBar;
@property(retain, nonatomic) NSMutableDictionary *voucherManagerDic; // @synthesize voucherManagerDic=_voucherManagerDic;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) O2OSearchResultViewDataDelegate *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OSearchResultViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) NSMutableArray *objects_old; // @synthesize objects_old=_objects_old;
@property(nonatomic) _Bool issearchHome; // @synthesize issearchHome=_issearchHome;
@property(retain, nonatomic) NSArray *filterMenuData; // @synthesize filterMenuData=_filterMenuData;
@property(retain, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
@property(retain, nonatomic) APExceptionView *netLimitView; // @synthesize netLimitView=_netLimitView;
@property(retain, nonatomic) APExceptionView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) O2OFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) O2OSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(copy, nonatomic) NSString *businessExt; // @synthesize businessExt=_businessExt;
@property(nonatomic) unsigned long long reverseCityMode; // @synthesize reverseCityMode=_reverseCityMode;
@property(nonatomic) _Bool shouldSpellCheck; // @synthesize shouldSpellCheck=_shouldSpellCheck;
@property(copy, nonatomic) NSString *preCategory; // @synthesize preCategory=_preCategory;
@property(nonatomic) _Bool isHui; // @synthesize isHui=_isHui;
@property(copy, nonatomic) NSString *preSearchContext; // @synthesize preSearchContext=_preSearchContext;
@property(copy, nonatomic) NSDictionary *preParamsMap; // @synthesize preParamsMap=_preParamsMap;
@property(copy, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property(copy, nonatomic) NSString *navigationType; // @synthesize navigationType=_navigationType;
@property(copy, nonatomic) NSDictionary *paramsMap; // @synthesize paramsMap=_paramsMap;
@property(copy, nonatomic) NSString *ftCategoryId; // @synthesize ftCategoryId=_ftCategoryId;
@property(copy, nonatomic) NSString *monitorSrc; // @synthesize monitorSrc=_monitorSrc;
@property(copy, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(nonatomic) _Bool isNewQuery; // @synthesize isNewQuery=_isNewQuery;
@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(copy, nonatomic) NSString *activitySearchQuery; // @synthesize activitySearchQuery=_activitySearchQuery;
@property(copy, nonatomic) NSDictionary *selectedMenus; // @synthesize selectedMenus=_selectedMenus;
@property(copy, nonatomic) NSString *mlParams; // @synthesize mlParams=_mlParams;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *businessAreaId; // @synthesize businessAreaId=_businessAreaId;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *searchSrc; // @synthesize searchSrc=_searchSrc;
@property(nonatomic) unsigned long long vcstyle; // @synthesize vcstyle=_vcstyle;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(nonatomic) __weak id <O2OSearchContainerVCDelegate> containerVC; // @synthesize containerVC=_containerVC;
- (void).cxx_destruct;
- (void)removeMenuViewFromSelfView;
- (void)cancelFloatMenuView;
- (void)floatMenuView;
- (void)checkMenuView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didFilterSelected:(id)arg1 srcSPM:(id)arg2;
- (void)willPopover;
- (void)didSelectedTag:(id)arg1;
- (void)changeQuery:(id)arg1 mlParams:(id)arg2;
- (_Bool)isShowingLocationTipBar;
- (void)tipBarDidClose:(id)arg1;
- (void)removeLocationTipAndInfo;
- (void)removeLocationTipView;
- (void)checkLocationSetting;
- (id)footerViewError:(id)arg1 withModel:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)adjustComponentUI;
- (void)tryToCheckLocationSettingAfterRequest:(id)arg1;
- (void)showNoResult:(id)arg1;
- (void)showEmpty:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (_Bool)hasCacheData;
- (void)showModel:(id)arg1;
- (_Bool)isShowingErrorView;
- (void)removeErrorView;
- (void)resetFilter:(id)arg1 tab:(id)arg2 menuGroups:(id)arg3 isLoadOrLoadMore:(_Bool)arg4;
- (void)resetFilter:(id)arg1;
- (void)endShowLoding;
- (void)showLoading:(id)arg1;
- (void)cancelRequest;
- (void)doLoad:(_Bool)arg1;
- (void)loadLabel:(id)arg1;
- (void)load:(_Bool)arg1 isRefresh:(_Bool)arg2 triggerByLocationRefresh:(_Bool)arg3;
- (void)load:(_Bool)arg1 isRefresh:(_Bool)arg2;
- (void)load:(_Bool)arg1;
- (void)load;
- (void)loadSetState;
- (void)pullRefreshDidTrigger;
- (void)locationInfoViewDidClickRefresh:(id)arg1;
- (void)modelDidEndSearchPOI:(id)arg1 suc:(_Bool)arg2 poiString:(id)arg3;
- (void)modelDidEndLocating:(id)arg1 suc:(_Bool)arg2 coordinate:(struct CLLocationCoordinate2D)arg3 continueToSearchPOI:(_Bool)arg4;
- (void)modelDidStartLocating:(id)arg1;
- (void)model:(id)arg1 didUpdateCityCode:(id)arg2 businessAreaId:(id)arg3;
- (void)modelDidCheckSpell:(id)arg1 checkedQuery:(id)arg2;
- (_Bool)modelShouldRaise1002Exception:(id)arg1;
- (void)modelWillLoadMore:(id)arg1;
- (void)modelDidStartLoadCache:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) long long realTimeRowNumber;
- (void)cancelFilterView;
- (void)dealloc;
- (void)reloadDocument;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

