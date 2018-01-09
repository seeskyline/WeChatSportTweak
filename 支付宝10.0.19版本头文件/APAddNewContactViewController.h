//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APContactTableViewCellDelegate.h"
#import "APContactViewControllerDelegate.h"
#import "APSearchDisplayControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class APButton, APContactInfo, APContactResponseVO, APSearchBar, APSearchDisplayController, APSearchManager, APTableView, APTextField, DTRpcAsyncCaller, NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface APAddNewContactViewController : DTViewController <APContactViewControllerDelegate, APSearchDisplayControllerDelegate, APContactTableViewCellDelegate, UIActionSheetDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showSheet;
    _Bool _isInputType;
    APTextField *_textField;
    DTRpcAsyncCaller *_rpcAsyncCaller;
    NSString *_inputAccountString;
    APTableView *_tableview;
    APButton *_nextBt;
    APContactInfo *_contact;
    NSArray *_tempContacts;
    APSearchBar *_searchBar;
    UIView *_accountView;
    DTRpcAsyncCaller *_zhiCodeRpc;
    APContactResponseVO *_mobileContact;
    APContactResponseVO *_friendsContact;
    APSearchDisplayController *_mySearchDisplayController;
    APSearchManager *_mobileSearch;
    APSearchManager *_localFriendSearch;
    NSMutableArray *_mobileSearchResult;
    NSMutableArray *_mobSearchResultPositionArray;
    NSMutableArray *_locFriendSearchResult;
    NSMutableArray *_locSearchResultPositionArray;
    UILabel *_failSearchLabel;
    NSMutableArray *_customerItems;
    UIView *_theDimmingView;
}

@property(retain, nonatomic) UIView *theDimmingView; // @synthesize theDimmingView=_theDimmingView;
@property(retain, nonatomic) NSMutableArray *customerItems; // @synthesize customerItems=_customerItems;
@property(retain, nonatomic) UILabel *failSearchLabel; // @synthesize failSearchLabel=_failSearchLabel;
@property(retain, nonatomic) NSMutableArray *locSearchResultPositionArray; // @synthesize locSearchResultPositionArray=_locSearchResultPositionArray;
@property(retain, nonatomic) NSMutableArray *locFriendSearchResult; // @synthesize locFriendSearchResult=_locFriendSearchResult;
@property(retain, nonatomic) NSMutableArray *mobSearchResultPositionArray; // @synthesize mobSearchResultPositionArray=_mobSearchResultPositionArray;
@property(retain, nonatomic) NSMutableArray *mobileSearchResult; // @synthesize mobileSearchResult=_mobileSearchResult;
@property(retain, nonatomic) APSearchManager *localFriendSearch; // @synthesize localFriendSearch=_localFriendSearch;
@property(retain, nonatomic) APSearchManager *mobileSearch; // @synthesize mobileSearch=_mobileSearch;
@property(retain, nonatomic) APSearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
@property(retain, nonatomic) APContactResponseVO *friendsContact; // @synthesize friendsContact=_friendsContact;
@property(retain, nonatomic) APContactResponseVO *mobileContact; // @synthesize mobileContact=_mobileContact;
@property(retain, nonatomic) DTRpcAsyncCaller *zhiCodeRpc; // @synthesize zhiCodeRpc=_zhiCodeRpc;
@property(retain, nonatomic) UIView *accountView; // @synthesize accountView=_accountView;
@property(retain, nonatomic) APSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool isInputType; // @synthesize isInputType=_isInputType;
@property(retain, nonatomic) NSArray *tempContacts; // @synthesize tempContacts=_tempContacts;
@property(retain, nonatomic) APContactInfo *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) APButton *nextBt; // @synthesize nextBt=_nextBt;
@property(retain, nonatomic) APTableView *tableview; // @synthesize tableview=_tableview;
@property(nonatomic) _Bool showSheet; // @synthesize showSheet=_showSheet;
@property(copy, nonatomic) NSString *inputAccountString; // @synthesize inputAccountString=_inputAccountString;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcAsyncCaller; // @synthesize rpcAsyncCaller=_rpcAsyncCaller;
@property(retain, nonatomic) APTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)showSearchFail:(_Bool)arg1 withDesc:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)didClickDimmingView;
- (id)dimmingView;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)createViewWithTitle:(id)arg1;
- (void)didSelectedContact:(id)arg1;
- (id)contactInfoInDataDictWithIndexPath:(id)arg1 withType:(int)arg2;
- (void)searchWithText:(id)arg1 withType:(int)arg2;
- (void)startSearchMobileWithText:(id)arg1;
- (void)startSearchLocalFriendWithText:(id)arg1;
- (void)buildContactByType:(int)arg1;
- (void)handleContactDataReslutWithResponseVO:(id)arg1;
- (void)loadContact;
- (void)pushScanCode;
- (void)showZhiCode;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)displayModeForDataArray:(id)arg1 indexPath:(id)arg2;
- (id)getAddNewCustomItemWithIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)doViewMyQRCode;
- (id)numberStringTrimingBy:(id)arg1;
- (_Bool)isEmptyString:(id)arg1;
- (_Bool)isCurrentOSVersionLowerThan:(id)arg1;
- (void)showInputFailAlertWithMessage:(id)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)startSearch;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)loadSearchView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupNewContact;
- (void)back;
- (void)judgeToShowDismissBtn;
- (void)viewDidLoad;
- (id)getSPMID;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

