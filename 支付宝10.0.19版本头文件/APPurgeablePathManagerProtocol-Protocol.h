//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, APPurgeablePathInfo, NSArray, NSNumber, NSString;

@protocol APPurgeablePathManagerProtocol <APDAOProtocol>
- (NSArray *)getAllStorageInfo;
- (APPurgeablePathInfo *)getStorageInfo:(NSString *)arg1;
- (APDAOResult *)updateStorageInfo:(NSString *)arg1 type:(NSNumber *)arg2 size:(NSNumber *)arg3;
@end

