//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MOPPortalReq : NSObject
{
    _Bool _queryAllCityData;
    _Bool _queryHotCityData;
    _Bool _queryCategoryData;
    _Bool _queryChannelData;
    _Bool _queryTopicData;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_cityCode;
    NSString *_districtCode;
    NSString *_displayCategoryId;
}

@property(nonatomic) _Bool queryTopicData; // @synthesize queryTopicData=_queryTopicData;
@property(nonatomic) _Bool queryChannelData; // @synthesize queryChannelData=_queryChannelData;
@property(nonatomic) _Bool queryCategoryData; // @synthesize queryCategoryData=_queryCategoryData;
@property(nonatomic) _Bool queryHotCityData; // @synthesize queryHotCityData=_queryHotCityData;
@property(nonatomic) _Bool queryAllCityData; // @synthesize queryAllCityData=_queryAllCityData;
@property(retain, nonatomic) NSString *displayCategoryId; // @synthesize displayCategoryId=_displayCategoryId;
@property(retain, nonatomic) NSString *districtCode; // @synthesize districtCode=_districtCode;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;

@end

