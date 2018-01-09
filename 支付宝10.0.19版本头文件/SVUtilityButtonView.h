//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, SVTableViewCell;

@interface SVUtilityButtonView : UIView
{
    SVTableViewCell *_parentCell;
    NSArray *_utilityButtons;
    double _utilityButtonsSpacing;
    SEL _utilityButtonSelector;
    NSMutableArray *_buttonBackgroundColors;
    struct UIEdgeInsets _utilityButtonsInsets;
}

@property(retain, nonatomic) NSMutableArray *buttonBackgroundColors; // @synthesize buttonBackgroundColors=_buttonBackgroundColors;
@property(nonatomic) SEL utilityButtonSelector; // @synthesize utilityButtonSelector=_utilityButtonSelector;
@property(nonatomic) double utilityButtonsSpacing; // @synthesize utilityButtonsSpacing=_utilityButtonsSpacing;
@property(nonatomic) struct UIEdgeInsets utilityButtonsInsets; // @synthesize utilityButtonsInsets=_utilityButtonsInsets;
@property(copy, nonatomic) NSArray *utilityButtons; // @synthesize utilityButtons=_utilityButtons;
@property(readonly, nonatomic) __weak SVTableViewCell *parentCell; // @synthesize parentCell=_parentCell;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)centerButtons;
- (void)popBackgroundColors;
- (void)pushBackgroundColors;
- (id)initWithFrame:(struct CGRect)arg1 utilityButtons:(id)arg2 parentCell:(id)arg3 utilityButtonSelector:(SEL)arg4;
- (id)initWithUtilityButtons:(id)arg1 parentCell:(id)arg2 utilityButtonSelector:(SEL)arg3;

@end

