//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APContactBaseViewController, APContactSelectParams, NSArray;

@protocol APContactViewControllerDelegate <NSObject>

@optional
- (void)didSelectStranger:(APContactSelectParams *)arg1 controller:(APContactBaseViewController *)arg2;
- (void)didClickBackBtnWithController:(APContactBaseViewController *)arg1;
- (void)didSelectAPContactInfos:(NSArray *)arg1 controller:(APContactBaseViewController *)arg2 selectParams:(APContactSelectParams *)arg3;
- (void)didSelectAPContactInfos:(NSArray *)arg1 controller:(APContactBaseViewController *)arg2;
@end

