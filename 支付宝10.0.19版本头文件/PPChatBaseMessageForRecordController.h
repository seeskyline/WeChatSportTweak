//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatBaseController.h"

#import "APSKLaunchpadDelegate.h"
#import "PPChatMessageDataDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APCircleRefreshControl, APSKClient, NSArray, NSMutableArray, NSString, ODRefreshControl, PPChatHeaderView, PPChatMessage, PPChatMessageLoadingViewForRecord, PPChatNewsItem, PPChatPublicAccount, PPChatThirdPartyAccount, UIActivityIndicatorView, UIColor, UIGestureRecognizer, UITableView, UIView;

@interface PPChatBaseMessageForRecordController : PPChatBaseController <APSKLaunchpadDelegate, UITableViewDataSource, UITableViewDelegate, PPChatMessageDataDelegate>
{
    _Bool _loadingHead;
    _Bool _loadingHistory;
    _Bool _frozen;
    _Bool _allHistoryLoaded;
    id <PPChatMessageDataSource> _messageDataSource;
    PPChatMessage *_firstVisibleMessage;
    UITableView *_tableView;
    PPChatPublicAccount *_publicAccount;
    PPChatThirdPartyAccount *_thirdPartyAccount;
    NSMutableArray *_messageArray;
    PPChatMessage *_activeMessage;
    PPChatNewsItem *_activeItem;
    UIView *_footerView;
    UIActivityIndicatorView *_footerActivity;
    ODRefreshControl *_odRefreshControl;
    APCircleRefreshControl *_ppcRefreshControl;
    APSKClient *_shareKit;
    PPChatMessageLoadingViewForRecord *_messageLoadingView;
    UIGestureRecognizer *_gr;
}

@property(retain, nonatomic) UIGestureRecognizer *gr; // @synthesize gr=_gr;
@property(retain, nonatomic) PPChatMessageLoadingViewForRecord *messageLoadingView; // @synthesize messageLoadingView=_messageLoadingView;
@property(nonatomic) _Bool allHistoryLoaded; // @synthesize allHistoryLoaded=_allHistoryLoaded;
@property(retain, nonatomic) APSKClient *shareKit; // @synthesize shareKit=_shareKit;
@property(retain, nonatomic) APCircleRefreshControl *ppcRefreshControl; // @synthesize ppcRefreshControl=_ppcRefreshControl;
@property(retain, nonatomic) ODRefreshControl *odRefreshControl; // @synthesize odRefreshControl=_odRefreshControl;
@property(retain, nonatomic) UIActivityIndicatorView *footerActivity; // @synthesize footerActivity=_footerActivity;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(retain, nonatomic) PPChatNewsItem *activeItem; // @synthesize activeItem=_activeItem;
@property(retain, nonatomic) PPChatMessage *activeMessage; // @synthesize activeMessage=_activeMessage;
@property(retain, nonatomic) NSMutableArray *messageArray; // @synthesize messageArray=_messageArray;
@property(retain, nonatomic) PPChatThirdPartyAccount *thirdPartyAccount; // @synthesize thirdPartyAccount=_thirdPartyAccount;
@property(retain, nonatomic) PPChatPublicAccount *publicAccount; // @synthesize publicAccount=_publicAccount;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) PPChatMessage *firstVisibleMessage; // @synthesize firstVisibleMessage=_firstVisibleMessage;
@property(nonatomic) _Bool loadingHistory; // @synthesize loadingHistory=_loadingHistory;
@property(nonatomic) _Bool loadingHead; // @synthesize loadingHead=_loadingHead;
@property(retain, nonatomic) id <PPChatMessageDataSource> messageDataSource; // @synthesize messageDataSource=_messageDataSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)messageDataIgnoreLoadHeadMessages;
- (void)messageDataDidIncoming:(id)arg1;
- (_Bool)messageDataShouldAcceptRealtimeMessage:(id)arg1 withContext:(id)arg2;
- (void)messageDataRealitmeMessageEncounterError;
- (void)messageDataAfterRealitmeMessage;
- (void)messageDataBeforeRealitmeMessage;
- (void)messageDataDidUpdateMessages:(id)arg1;
- (void)messageDataDeleteMessage:(id)arg1 failWithError:(id)arg2;
- (void)messageDataDidDeleteMessage:(id)arg1;
- (void)messageDataDidLoadRealtimeMessages:(id)arg1;
- (void)messageDataRequestHistoryMessagesFailWithError:(id)arg1;
- (void)messageDataDidLoadHistoryMessages:(id)arg1 gotAll:(_Bool)arg2;
- (void)messageDataRequestHeadMessgesFailWithError:(id)arg1;
- (void)messageDataDidLoadHeadMessages:(id)arg1 shouldReplace:(_Bool)arg2 gotAll:(_Bool)arg3;
- (void)updateMessages:(id)arg1;
- (void)afterDelete;
- (void)deleteMessage:(id)arg1;
- (void)appendMessages:(id)arg1;
- (void)prependMessages:(id)arg1;
- (void)setMessages:(id)arg1;
- (id)preprocessMessages:(id)arg1 withPrev:(id)arg2 next:(id)arg3;
- (void)configureMessage:(id)arg1;
- (id)injectTimelines:(id)arg1 withPrev:(id)arg2 next:(id)arg3;
- (void)sharingLaunchpadDidCancel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)onMenuDismiss:(id)arg1;
- (void)share:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)cellsForMessage:(id)arg1;
- (void)setActiveCellsHighlighted:(_Bool)arg1;
- (void)onLongPress:(id)arg1;
- (void)stopLoadingHistory;
- (void)startLoadingHistory;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stopLoadingHead;
- (_Bool)startLoadingHead;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)postClickMessage:(id)arg1 withIndex:(long long)arg2;
- (void)postLongPressDeleteMessage:(id)arg1;
@property(readonly, nonatomic) NSString *userIconUrl;
@property(readonly, nonatomic) NSString *objectIconUrl;
@property(readonly, nonatomic) UIColor *baseColor;
@property(readonly, nonatomic) _Bool injectsTimeline;
@property(readonly, nonatomic) PPChatHeaderView *headerView;
@property(readonly, nonatomic) NSArray *messages;
- (void)refreshWithProgressHUD;
- (void)refresh;
@property(readonly, nonatomic) _Bool loadingMessage;
- (void)viewWillLayoutSubviews;
- (void)applicationWillResignActive:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

