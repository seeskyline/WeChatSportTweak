//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APFontSizeViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APFontSliderView, NSArray, NSString, UITableView;

@interface APFontSizeViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, APFontSizeViewDelegate>
{
    long long _curLevel;
    UITableView *_tableView;
    NSArray *_PromptInfo;
    APFontSliderView *_sliderRegion;
}

@property(retain, nonatomic) APFontSliderView *sliderRegion; // @synthesize sliderRegion=_sliderRegion;
@property(retain, nonatomic) NSArray *PromptInfo; // @synthesize PromptInfo=_PromptInfo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)fontSliderView:(id)arg1 fontSizeLevelDidChangedFromOldLevel:(long long)arg2 toNewLevel:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)back;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

