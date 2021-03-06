//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, VZInteractiveProperty;

@interface VZInteractiveAnimationGroup : NSObject
{
    UIView *_view;
    double _progress;
    VZInteractiveProperty *_property;
}

@property(retain, nonatomic) VZInteractiveProperty *property; // @synthesize property=_property;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initWithAnimationProperty:(id)arg1;
- (id)initWithAnimationView:(id)arg1;

@end

