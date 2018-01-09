//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class NSArray, NSString;

@protocol APConfigService <DTService>
- (void)cleanup;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 key:(NSString *)arg2;
- (_Bool)addConfigChangedObserver:(id <APConfigObserverProtocol>)arg1 key:(NSString *)arg2;
- (void)repairValuesForKeys:(NSArray *)arg1;
- (NSString *)stringValueForKey:(NSString *)arg1 withCompletion:(void (^)(NSString *, NSError *))arg2;
- (NSString *)stringValueForKey:(NSString *)arg1;
@end

