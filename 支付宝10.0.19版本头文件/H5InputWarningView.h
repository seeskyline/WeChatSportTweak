//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface H5InputWarningView : UIView
{
    int _suppressCount;
    double _second;
    NSTimer *_timer;
}

+ (void)showInputWarningView:(id)arg1 duration:(double)arg2;
@property(nonatomic) int suppressCount; // @synthesize suppressCount=_suppressCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double second; // @synthesize second=_second;
- (void).cxx_destruct;
- (void)dismissWarning;
- (void)updateAllWarningDisplay;
- (void)suppressRelatedWarnings:(_Bool)arg1;
- (void)popFromStack;
- (void)pushToStack;
- (_Bool)relatedToWarning:(id)arg1;
- (void)showwarning;
- (id)initWithRect:(struct CGRect)arg1;

@end

