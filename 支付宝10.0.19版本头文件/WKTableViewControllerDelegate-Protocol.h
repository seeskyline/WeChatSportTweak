//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, WKTableViewController;

@protocol WKTableViewControllerDelegate <NSObject>

@optional
- (void)pagedEventFired:(WKTableViewController *)arg1;
- (void)refreshEventFired:(WKTableViewController *)arg1;
- (_Bool)viewController:(WKTableViewController *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
@end

