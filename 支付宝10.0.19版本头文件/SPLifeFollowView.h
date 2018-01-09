//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPIPluggableCard.h"
#import "UIScrollViewDelegate.h"

@class APContactInfo, NSArray, NSDictionary, NSMutableArray, NSString, SPLifeHeadView, UIControl, UILabel, UIScrollView;

@interface SPLifeFollowView : UIView <UIScrollViewDelegate, SPIPluggableCard>
{
    _Bool _slideMonitorDone;
    id <SPICardContainer> _container;
    id _containerUserData;
    long long _cardTag;
    UILabel *_titleLabel;
    UIScrollView *_scrollView;
    UIControl *_rightTopBtn;
    NSMutableArray *_reusableViews;
    NSMutableArray *_headViews;
    NSString *_title;
    APContactInfo *_ownerContact;
    NSDictionary *_bizData;
    NSArray *_followedApps;
    NSString *_followListScheme;
    SPLifeHeadView *_displayMoreView;
    UIView *_topLine;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) _Bool slideMonitorDone; // @synthesize slideMonitorDone=_slideMonitorDone;
@property(retain, nonatomic) SPLifeHeadView *displayMoreView; // @synthesize displayMoreView=_displayMoreView;
@property(retain, nonatomic) NSString *followListScheme; // @synthesize followListScheme=_followListScheme;
@property(retain, nonatomic) NSArray *followedApps; // @synthesize followedApps=_followedApps;
@property(retain, nonatomic) NSDictionary *bizData; // @synthesize bizData=_bizData;
@property(retain, nonatomic) APContactInfo *ownerContact; // @synthesize ownerContact=_ownerContact;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *headViews; // @synthesize headViews=_headViews;
@property(retain, nonatomic) NSMutableArray *reusableViews; // @synthesize reusableViews=_reusableViews;
@property(retain, nonatomic) UIControl *rightTopBtn; // @synthesize rightTopBtn=_rightTopBtn;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long cardTag; // @synthesize cardTag=_cardTag;
@property(retain, nonatomic) id containerUserData; // @synthesize containerUserData=_containerUserData;
@property(nonatomic) __weak id <SPICardContainer> container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)onHeadTap:(id)arg1;
- (void)onMoreFollows:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)getTag;
- (void)setTag:(long long)arg1;
- (id)controlWithTag:(long long)arg1;
- (void)updateWithData:(id)arg1 isCachedData:(_Bool)arg2;
- (id)viewForCard;
- (double)heightForCard;
- (id)getUserData;
- (void)setUserData:(id)arg1;
- (void)setCardContainer:(id)arg1;
- (id)getCachedHeadView;
- (void)updateScrollView;
- (void)updateSubviews;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

