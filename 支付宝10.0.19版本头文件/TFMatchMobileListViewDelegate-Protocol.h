//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APContactInfo, TFMatchMobileListView;

@protocol TFMatchMobileListViewDelegate <NSObject>
- (void)scrollToResignFirstResponder;
- (void)matchMobileListView:(TFMatchMobileListView *)arg1 didSelectedMobile:(APContactInfo *)arg2;
@end

