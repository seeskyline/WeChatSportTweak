//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRContainerMF.h"

@class NSMutableDictionary;

@interface VRPreloadContainer : VRContainerMF
{
    NSMutableDictionary *_viewMap;
}

@property(retain, nonatomic) NSMutableDictionary *viewMap; // @synthesize viewMap=_viewMap;
- (void).cxx_destruct;
- (id)findViewWithNode:(id)arg1;
- (id)getWidget:(id)arg1;
- (void)clearPreloadView;
- (_Bool)isLockAutoRefresh;

@end

