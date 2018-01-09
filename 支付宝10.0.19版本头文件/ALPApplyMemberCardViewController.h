//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALPListViewController.h"

#import "APSKLaunchpadDelegate.h"
#import "UIActionSheetDelegate.h"

@class ALPCreateMemberModel, ALPMemberCardListViewDataSource, ALPMemberCardListViewDelegate, ALPMemberCardPreviewModel, ALPQueryMemberInfoModel, AMCH5ServiceController, APExceptionView, KABAOPRODMemberCardRequest, NSString;

@interface ALPApplyMemberCardViewController : ALPListViewController <APSKLaunchpadDelegate, UIActionSheetDelegate>
{
    _Bool _onlyPreview;
    float _timeDuration;
    ALPMemberCardPreviewModel *_preViewMemberCardModel;
    ALPMemberCardListViewDataSource *_ds;
    ALPMemberCardListViewDelegate *_dl;
    APExceptionView *_errorView;
    APExceptionView *_emptyView;
    ALPQueryMemberInfoModel *_queryInfoModel;
    ALPCreateMemberModel *_createModel;
    KABAOPRODMemberCardRequest *_cardInfo;
    AMCH5ServiceController *_h5ServiceController;
    NSString *_reqIdentiFlag;
}

@property(nonatomic) _Bool onlyPreview; // @synthesize onlyPreview=_onlyPreview;
@property(nonatomic) float timeDuration; // @synthesize timeDuration=_timeDuration;
@property(retain, nonatomic) NSString *reqIdentiFlag; // @synthesize reqIdentiFlag=_reqIdentiFlag;
@property(retain, nonatomic) AMCH5ServiceController *h5ServiceController; // @synthesize h5ServiceController=_h5ServiceController;
@property(retain, nonatomic) KABAOPRODMemberCardRequest *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) ALPCreateMemberModel *createModel; // @synthesize createModel=_createModel;
@property(retain, nonatomic) ALPQueryMemberInfoModel *queryInfoModel; // @synthesize queryInfoModel=_queryInfoModel;
@property(retain, nonatomic) APExceptionView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) APExceptionView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) ALPMemberCardListViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) ALPMemberCardListViewDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) ALPMemberCardPreviewModel *preViewMemberCardModel; // @synthesize preViewMemberCardModel=_preViewMemberCardModel;
- (void).cxx_destruct;
- (void)queryLocation;
- (void)gotoDetailViewController:(id)arg1;
- (void)processJumpToNativePage:(id)arg1 alert:(id)arg2;
- (void)processJumpToWebPage:(id)arg1 alert:(id)arg2;
- (void)popSelfAndGoToViewController:(id)arg1;
- (void)back;
- (void)gotoH5Page:(id)arg1;
- (void)notifyMarketListRefresh;
- (void)gotoCustomerCardListViewController:(id)arg1;
- (void)processMemberCardNotApplyWithAlert:(id)arg1;
- (void)processRequestDetailDataResult:(id)arg1 config:(id)arg2;
- (void)requestDetailData:(id)arg1;
- (void)processApplyCardResult:(id)arg1;
- (void)applyCard;
- (void)showApplyingAnimation:(id)arg1;
- (void)startPoll;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 component:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)renderHead:(id)arg1;
- (void)hideErrorView;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)showNoResult:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)dealloc;
- (_Bool)autohideNavigationBar;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithQuery:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

