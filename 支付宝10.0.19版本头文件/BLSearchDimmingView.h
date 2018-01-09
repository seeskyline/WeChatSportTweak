//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BLCategoryPanelViewDelegate.h"

@class BLCategoryPanelView, BLDateButton, BLSearchTipLabel, NSArray, NSDate, NSString;

@interface BLSearchDimmingView : UIView <BLCategoryPanelViewDelegate>
{
    CDUnknownBlockType _selectCategoryBlock;
    CDUnknownBlockType _gotoDateSelect;
    NSString *_code;
    NSString *_name;
    NSString *_dateType;
    NSDate *_startTime;
    NSDate *_endTime;
    NSArray *_buttons;
    NSArray *_links;
    UIView *_categoryPanelViewBg;
    BLSearchTipLabel *_categoryTipLabel;
    BLCategoryPanelView *_categoryPanelView;
    BLDateButton *_dateButton;
    BLSearchTipLabel *_linkTipLabel;
    UIView *_linksView;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *linksView; // @synthesize linksView=_linksView;
@property(retain, nonatomic) BLSearchTipLabel *linkTipLabel; // @synthesize linkTipLabel=_linkTipLabel;
@property(retain, nonatomic) BLDateButton *dateButton; // @synthesize dateButton=_dateButton;
@property(retain, nonatomic) BLCategoryPanelView *categoryPanelView; // @synthesize categoryPanelView=_categoryPanelView;
@property(retain, nonatomic) BLSearchTipLabel *categoryTipLabel; // @synthesize categoryTipLabel=_categoryTipLabel;
@property(retain, nonatomic) UIView *categoryPanelViewBg; // @synthesize categoryPanelViewBg=_categoryPanelViewBg;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *dateType; // @synthesize dateType=_dateType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) CDUnknownBlockType gotoDateSelect; // @synthesize gotoDateSelect=_gotoDateSelect;
@property(copy, nonatomic) CDUnknownBlockType selectCategoryBlock; // @synthesize selectCategoryBlock=_selectCategoryBlock;
- (void).cxx_destruct;
- (void)selectCategoryWithCode:(id)arg1 name:(id)arg2;
- (void)clickDateSelectButton;
- (void)clickLinksButton:(id)arg1;
- (void)createLinks;
- (void)updateData:(id)arg1;
- (void)createSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 category:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2 category:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

