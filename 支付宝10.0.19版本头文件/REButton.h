//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APButton.h"

@interface REButton : APButton
{
    int _reButtonType;
}

+ (id)buttonWithREButtonType:(int)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)buttonWithREButtonType:(int)arg1;
@property(nonatomic) int reButtonType; // @synthesize reButtonType=_reButtonType;
- (void)setFrame:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)configTitleInsets;
- (void)configBackgroundImage;
- (void)configTitleColor;
- (void)configUI;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (id)initWithREButtonType:(int)arg1;

@end

