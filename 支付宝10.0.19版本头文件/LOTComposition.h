//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTAssetGroup, LOTLayerGroup, NSNumber;

@interface LOTComposition : NSObject
{
    NSNumber *_startFrame;
    NSNumber *_endFrame;
    NSNumber *_framerate;
    double _timeDuration;
    LOTLayerGroup *_layerGroup;
    LOTAssetGroup *_assetGroup;
    struct CGRect _compBounds;
}

@property(readonly, nonatomic) LOTAssetGroup *assetGroup; // @synthesize assetGroup=_assetGroup;
@property(readonly, nonatomic) LOTLayerGroup *layerGroup; // @synthesize layerGroup=_layerGroup;
@property(readonly, nonatomic) double timeDuration; // @synthesize timeDuration=_timeDuration;
@property(readonly, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, nonatomic) NSNumber *endFrame; // @synthesize endFrame=_endFrame;
@property(readonly, nonatomic) NSNumber *startFrame; // @synthesize startFrame=_startFrame;
@property(readonly, nonatomic) struct CGRect compBounds; // @synthesize compBounds=_compBounds;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1 rootDir:(id)arg2;
- (id)initWithJSON:(id)arg1 animationRootDir:(id)arg2;

@end

