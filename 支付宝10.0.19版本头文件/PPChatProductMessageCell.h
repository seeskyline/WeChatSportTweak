//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatMessageCell.h"

#import "PPChatProductMessageViewDelegate.h"

@class NSString;

@interface PPChatProductMessageCell : PPChatMessageCell <PPChatProductMessageViewDelegate>
{
}

+ (double)cellHeightForData:(id)arg1 ofMessage:(id)arg2;
- (void)didTouchProductItemViewAtIndex:(long long)arg1;
- (void)loadData:(id)arg1;
- (void)setContentViewProperty;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

