//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZListViewDataSource.h"

@interface O2OPMyOrderDataSource : VZListViewDataSource
{
}

- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (Class)cellClassForItem:(id)arg1 AtIndex:(id)arg2;
- (void)updateFromModel:(id)arg1 refreshItem:(_Bool)arg2;
- (void)updateEmptyCellItem:(id)arg1;
- (void)tableViewControllerDidLoadModel:(id)arg1;
- (_Bool)hasData;

@end

