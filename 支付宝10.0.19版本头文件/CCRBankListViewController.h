//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BEEChannelIconService, NSString;

@interface CCRBankListViewController : CCRBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    BEEChannelIconService *_iconService;
    _Bool _disableBeeChannel;
    id <CCRBankListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CCRBankListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_requestCreditCardBankList;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadLogoView:(id)arg1 loadImage:(CDUnknownBlockType)arg2 loadUrl:(CDUnknownBlockType)arg3;
- (void)_createSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

