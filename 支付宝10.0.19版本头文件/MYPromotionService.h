//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MYPromotionViewControllerDelegate.h"

@class MYPromotionViewController, NSMutableDictionary, NSString;

@interface MYPromotionService : NSObject <MYPromotionViewControllerDelegate>
{
    MYPromotionViewController *_currentPromotionViewController;
    NSMutableDictionary *_showingPromotionDic;
    NSMutableDictionary *_promotionVCForTypeDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *promotionVCForTypeDic; // @synthesize promotionVCForTypeDic=_promotionVCForTypeDic;
@property(retain, nonatomic) NSMutableDictionary *showingPromotionDic; // @synthesize showingPromotionDic=_showingPromotionDic;
@property(retain, nonatomic) MYPromotionViewController *currentPromotionViewController; // @synthesize currentPromotionViewController=_currentPromotionViewController;
- (void).cxx_destruct;
- (id)promotionViewControllerForConfigModel:(id)arg1;
- (void)registerType:(id)arg1 promotionViewControllerName:(id)arg2;
- (void)promotionControllerDidHide:(id)arg1;
- (void)promotionControllerDidDisplay:(id)arg1;
- (void)bindUri:(id)arg1 object:(id)arg2 model:(id)arg3 promotionVC:(id)arg4;
- (id)showingModelForUri:(id)arg1 object:(id)arg2;
- (void)showPromotionIfNeeded;
- (void)promotionShouldStart:(id)arg1;
- (void)promotionConfigChanged:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)controllerViewDidAppear:(id)arg1;
- (void)controllerWillDisappear:(id)arg1;
- (void)stop;
- (void)startWithConfigProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

