//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCDBSyncAnalysisRecord : NSObject
{
    long long lastCorruptTime;
    long long lastFSyncFailedTime;
    long long lastFullFSyncFailedTime;
}

+ (void)initialize;
@property(nonatomic) long long lastFullFSyncFailedTime; // @synthesize lastFullFSyncFailedTime;
@property(nonatomic) long long lastFSyncFailedTime; // @synthesize lastFSyncFailedTime;
@property(nonatomic) long long lastCorruptTime; // @synthesize lastCorruptTime;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

