//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface ALCZmTabView : UIView
{
    NSArray *_buttons;
    NSArray *_tabs;
    id <ALCActionHandler> _delegate;
}

@property(nonatomic) __weak id <ALCActionHandler> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)refreshWithTabs:(id)arg1;
- (void)loadContentView;
- (id)initWithFrame:(struct CGRect)arg1 tabs:(id)arg2 delegate:(id)arg3;

@end

