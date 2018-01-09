//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSearchManager, NSMutableArray, NSMutableDictionary;

@interface BEECitySearchHandler : NSObject
{
    APSearchManager *_searchMgr;
    NSMutableArray *_indexArr;
    NSMutableDictionary *_cityDict;
}

@property(retain, nonatomic) NSMutableDictionary *cityDict; // @synthesize cityDict=_cityDict;
@property(retain, nonatomic) NSMutableArray *indexArr; // @synthesize indexArr=_indexArr;
@property(retain, nonatomic) APSearchManager *searchMgr; // @synthesize searchMgr=_searchMgr;
- (void).cxx_destruct;
- (id)cityInfoInKey:(id)arg1;
- (void)search:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldIgnoreSearchIndex:(id)arg1;
- (void)buildSearchIndexWithRegionDataList:(id)arg1;

@end

