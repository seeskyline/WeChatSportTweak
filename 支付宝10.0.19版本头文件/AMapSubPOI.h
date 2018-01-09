//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSString;

@interface AMapSubPOI : AMapSearchObject
{
    NSString *_uid;
    NSString *_name;
    NSString *_sname;
    AMapGeoPoint *_location;
    NSString *_address;
    long long _distance;
    NSString *_subtype;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *sname; // @synthesize sname=_sname;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)init;

@end

