//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCommonSchemeProtocol.h"
#import "O2OMistViewProtocol.h"

@class AUBarButtonItem, NSString, O2OCancelCollectShopModel, O2OCollectShopListModel, O2OCollectShopListViewDataSource, O2OCollectShopListViewDelegate, UIView;

@interface O2OCollectShopListViewController : O2OListViewController <O2OCommonSchemeProtocol, O2OMistViewProtocol>
{
    O2OCollectShopListModel *_collectShopListModel;
    O2OCancelCollectShopModel *_cancelCollectShopModel;
    O2OCollectShopListViewDataSource *_ds;
    O2OCollectShopListViewDelegate *_dl;
    AUBarButtonItem *_backBarButtonItem;
    AUBarButtonItem *_rightShopInfoItem;
    UIView *_rightShopInfoButtonView;
    NSString *_jumpUrl;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) UIView *rightShopInfoButtonView; // @synthesize rightShopInfoButtonView=_rightShopInfoButtonView;
@property(retain, nonatomic) AUBarButtonItem *rightShopInfoItem; // @synthesize rightShopInfoItem=_rightShopInfoItem;
@property(retain, nonatomic) AUBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) O2OCollectShopListViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) O2OCollectShopListViewDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OCancelCollectShopModel *cancelCollectShopModel; // @synthesize cancelCollectShopModel=_cancelCollectShopModel;
@property(retain, nonatomic) O2OCollectShopListModel *collectShopListModel; // @synthesize collectShopListModel=_collectShopListModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 component:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)modelDidFinish:(id)arg1;
- (void)modelDidStart:(id)arg1;
- (void)mistView:(id)arg1 didFailWithError:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)dealloc;
- (id)pageSpm;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadDocument;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)loadView;
- (void)back;
- (void)shopInfoButtonClicked;
- (void)collectStatusChanged:(id)arg1;
- (void)showRightShopInfoItem;
- (void)hideRightShopInfoItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

