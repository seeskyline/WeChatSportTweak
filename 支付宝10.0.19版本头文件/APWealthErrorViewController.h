//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APWealthBaseScrollViewController.h"

@class APTipView, NSString;

@interface APWealthErrorViewController : APWealthBaseScrollViewController
{
    APTipView *tipView;
    NSString *opValue;
    NSString *title;
}

- (void)setTitle:(id)arg1;
- (id)title;
@property(retain, nonatomic) NSString *opValue; // @synthesize opValue;
@property(retain, nonatomic) APTipView *tipView; // @synthesize tipView;
- (void).cxx_destruct;
- (void)initTipView;
- (void)viewDidLoad;
- (id)init;

@end

