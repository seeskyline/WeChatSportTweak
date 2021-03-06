//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCustomStorage;

@interface APGRecentDataAccessor : NSObject
{
    APCustomStorage *_storage;
    id <APGRecentSearchDataProxy> _recentSearchDataProxy;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <APGRecentSearchDataProxy> recentSearchDataProxy; // @synthesize recentSearchDataProxy=_recentSearchDataProxy;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)clearOldRecords;
- (void)processClickForRecentData:(id)arg1;
- (id)queryRecentDatasByKeyword:(id)arg1;
- (_Bool)deleteRecentDatas:(id)arg1;
- (_Bool)insertRecentDatas:(id)arg1;
- (id)init;

@end

