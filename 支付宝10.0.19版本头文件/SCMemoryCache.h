//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCacheBase.h"

@class NSCache;

@interface SCMemoryCache : SCCacheBase
{
    NSCache *_internalCache;
}

+ (id)memoryCacheWithType:(long long)arg1;
+ (id)memoryCache;
@property(retain, nonatomic) NSCache *internalCache; // @synthesize internalCache=_internalCache;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3;
- (id)objectInCacheForKey:(id)arg1;
- (id)objectForKey:(id)arg1 expires:(id)arg2 withContent:(CDUnknownBlockType)arg3;
- (_Bool)objectExistsForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithName:(id)arg1;

@end

