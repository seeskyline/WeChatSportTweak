//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSADynamicBaseRequest.h"

@class NSDictionary, NSString;

@interface MOBILECSAHomePageLableShopRequest : MOBILECSADynamicBaseRequest
{
    int _hasShowNumber;
    NSString *_lableId;
    NSString *_pageType;
    NSDictionary *_option;
}

@property(retain, nonatomic) NSDictionary *option; // @synthesize option=_option;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) int hasShowNumber; // @synthesize hasShowNumber=_hasShowNumber;
@property(retain, nonatomic) NSString *lableId; // @synthesize lableId=_lableId;
- (void).cxx_destruct;

@end

