//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSDictionary, NSString;

@interface GO2OShopListSearchRequest : GO2OServiceObject
{
    int _start;
    int _size;
    NSString *_query;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_sessionId;
    NSString *_searchSrc;
    NSString *_currentCity;
    NSDictionary *_selectedMenus;
    NSString *_context;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *selectedMenus; // @synthesize selectedMenus=_selectedMenus;
@property(retain, nonatomic) NSString *currentCity; // @synthesize currentCity=_currentCity;
@property(retain, nonatomic) NSString *searchSrc; // @synthesize searchSrc=_searchSrc;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;

@end

