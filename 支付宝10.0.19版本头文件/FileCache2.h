//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMCache.h"

@class APFileCacheCounter;

@interface FileCache2 : APMCache
{
    unsigned long long _type;
    APFileCacheCounter *_counter;
}

+ (id)defaultCache;
@property(retain, nonatomic) APFileCacheCounter *counter; // @synthesize counter=_counter;
- (void).cxx_destruct;
- (void)clearMemoryCache;
- (long long)totalCost;
- (id)generatePathForKey:(id)arg1;
- (id)rootCachePath;
- (id)temporaryCachePath;
- (void)removeTag:(unsigned long long)arg1 forKey:(id)arg2;
- (void)addTag:(unsigned long long)arg1 forKey:(id)arg2;
- (void)updateAliasKey:(id)arg1 business:(id)arg2 forKey:(id)arg3;
- (void)updateAliasKey:(id)arg1 forKey:(id)arg2;
- (void)updateBusiness:(id)arg1 forKey:(id)arg2;
- (id)aliasKeyForKey:(id)arg1;
- (id)objectPathForKey:(id)arg1 checkExistence:(_Bool)arg2;
- (_Bool)setObjectWithPath:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (id)initWithName:(id)arg1;

@end

