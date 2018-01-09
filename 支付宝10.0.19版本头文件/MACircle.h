//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAShape.h"

#import "MAOverlay.h"

@class NSString;

@interface MACircle : MAShape <MAOverlay>
{
    struct CLLocationCoordinate2D _coordinate;
    double _radius;
    struct MAMapRect _boundingMapRect;
    struct MAMapPoint *_mapPoints;
    unsigned long long _pointsCount;
}

+ (id)circleWithMapRect:(struct MAMapRect)arg1;
+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
@property(nonatomic) unsigned long long pointsCount; // @synthesize pointsCount=_pointsCount;
@property(nonatomic) struct MAMapPoint *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(nonatomic) struct MAMapRect boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)deallocOperation;
- (void)dealloc;
- (id)initWithWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)rebuildOutline;
- (void)calculateBoundingMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

