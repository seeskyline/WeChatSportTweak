//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APCommonSelectView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UILabel;

@interface APRecentSelectView : APCommonSelectView <UIScrollViewDelegate>
{
    UILabel *_protocolLable;
}

@property(retain, nonatomic) UILabel *protocolLable; // @synthesize protocolLable=_protocolLable;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setupProtocolLable;
- (void)scrollViewDidScroll:(id)arg1;
- (void)adjustFrames;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

