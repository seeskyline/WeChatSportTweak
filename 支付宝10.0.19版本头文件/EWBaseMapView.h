//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMapKitView.h"

@interface EWBaseMapView : APMapKitView
{
    CDUnknownBlockType _hitTestEventCallback;
}

@property(copy, nonatomic) CDUnknownBlockType hitTestEventCallback; // @synthesize hitTestEventCallback=_hitTestEventCallback;
- (void).cxx_destruct;
- (void)hitTestCallback;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)mapView;
- (void)layoutSubviews;

@end

