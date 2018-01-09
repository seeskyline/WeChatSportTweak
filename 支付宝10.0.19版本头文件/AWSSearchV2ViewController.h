//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEBaseController.h"

#import "AWSSearchCellDelegate.h"
#import "SearchHistoryDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class APTableView, AWSTextField, DTRpcAsyncCaller, DTViewController, NSMutableArray, NSString, SearchHistoryDelegateImpl, SearchManager;

@interface AWSSearchV2ViewController : BEEBaseController <UITableViewDelegate, UITableViewDataSource, AWSSearchCellDelegate, UITextFieldDelegate, SearchHistoryDelegate>
{
    double _keyboardHeight;
    double _tableViewMaxHeight;
    double _timeDelaySeconds;
    double _lastDate;
    _Bool _keyboardType;
    DTViewController *_parentVC;
    AWSTextField *_textFieldInsearchBar;
    APTableView *_tableView;
    APTableView *_historyTableView;
    unsigned long long _tableViewStatus;
    DTRpcAsyncCaller *_searchCaller;
    NSMutableArray *_searchResultArray;
    SearchManager *_searchManager;
    SearchHistoryDelegateImpl *_historyImpl;
}

@property(retain, nonatomic) SearchHistoryDelegateImpl *historyImpl; // @synthesize historyImpl=_historyImpl;
@property(retain, nonatomic) SearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) NSMutableArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
@property(retain, nonatomic) DTRpcAsyncCaller *searchCaller; // @synthesize searchCaller=_searchCaller;
@property(nonatomic) unsigned long long tableViewStatus; // @synthesize tableViewStatus=_tableViewStatus;
@property(retain, nonatomic) APTableView *historyTableView; // @synthesize historyTableView=_historyTableView;
@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWSTextField *textFieldInsearchBar; // @synthesize textFieldInsearchBar=_textFieldInsearchBar;
@property(nonatomic) __weak DTViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)clearSearchHistory;
- (void)refreshHistoryTableView:(id)arg1;
- (void)favoriteDidChanged:(id)arg1;
- (void)viewWillPushToNextViewController;
- (id)mainController;
- (void)didAddStockToFav:(id)arg1 stock:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChanged;
- (void)performUpdate:(id)arg1;
- (void)cancelButtonDidClicked;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)back;
- (void)buildHistoryTableView:(id)arg1;
- (void)buildTableView:(id)arg1;
- (void)buildNavigationItems;
- (void)switchToTableView:(_Bool)arg1;
- (void)didEnterForground;
- (void)didEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillFirstAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

