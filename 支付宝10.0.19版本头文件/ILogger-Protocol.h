//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ILogger <NSObject>
- (_Bool)getLogEnabled;
- (void)setLogEnabled:(_Bool)arg1;
- (void)logInfo:(NSString *)arg1;
- (void)logWarning:(NSString *)arg1;
- (void)logDebug:(NSString *)arg1;
@end

