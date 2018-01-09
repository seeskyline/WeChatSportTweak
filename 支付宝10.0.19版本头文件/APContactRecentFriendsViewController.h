//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APContactBaseViewController.h"

@class NSArray, NSString;

@interface APContactRecentFriendsViewController : APContactBaseViewController
{
    NSArray *_recentFriends;
    NSString *_optionTitle;
}

@property(retain, nonatomic) NSString *optionTitle; // @synthesize optionTitle=_optionTitle;
@property(retain, nonatomic) NSArray *recentFriends; // @synthesize recentFriends=_recentFriends;
- (void).cxx_destruct;
- (id)commonView:(id)arg1 globelSearchName:(id)arg2 globeSearchMatchResult:(id)arg3;
- (void)setupSelectView;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)didSelectAPContactInfos:(id)arg1 controller:(id)arg2;
- (void)didSelectItems:(id)arg1 commonView:(id)arg2;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)secondaryDataInCommonView:(id)arg1;
- (id)secondaryDataTitlesInCommonView:(id)arg1;
- (void)commonView:(id)arg1 didSelectCustomRowAtIndexPath:(id)arg2;
- (id)commonView:(id)arg1 cellForCustomRowAtIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 heightForRowInCustomIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 numberOfRowInCustomSection:(long long)arg2;
- (long long)numberOfCustomSectionInCommonView:(id)arg1;
- (long long)optionCount;
- (void)reloadRecentFriends;
- (void)loadContact;
- (void)configWithDict:(id)arg1;
- (void)dealloc;
- (id)initWithParamDict:(id)arg1 selectCallback:(CDUnknownBlockType)arg2 backCallback:(CDUnknownBlockType)arg3;

@end

