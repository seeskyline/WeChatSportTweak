//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "REBaseViewController.h"

#import "RETableLayoutPage.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface RETableLayoutViewController : REBaseViewController <UITableViewDataSource, UITableViewDelegate, RETableLayoutPage>
{
    UITableView *_layoutTableView;
}

@property(retain, nonatomic) UITableView *layoutTableView; // @synthesize layoutTableView=_layoutTableView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showTableLayoutWithStyle:(unsigned long long)arg1;
- (id)viewForTableLayoutFooter:(id)arg1;
- (id)viewForTableLayoutHeader:(id)arg1;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

