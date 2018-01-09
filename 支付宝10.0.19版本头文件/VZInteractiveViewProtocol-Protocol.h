//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VZInteractiveAnimation;

@protocol VZInteractiveViewProtocol <NSObject>
@property(retain, nonatomic) VZInteractiveAnimation *interactiveAnimation;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
@property(nonatomic) double progress;
- (void)interactiveWithProgress:(double)arg1;
- (void)layoutViewIfNeed;
@end

