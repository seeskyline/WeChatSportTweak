//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APLogTrackManager : NSObject
{
}

+ (id)pageInfoWithIndex:(id)arg1;
+ (void)logAutoClickWithContext:(id)arg1;
+ (void)logPageUpdateWithIndex:(id)arg1 context:(id)arg2 updateType:(int)arg3;
+ (void)logPageUpdateWithIndex:(id)arg1 context:(id)arg2;
+ (void)logPageEndWithIndex:(id)arg1;
+ (void)logPageStartWithIndex:(id)arg1 context:(id)arg2;
+ (void)logPageEndWithViewId:(id)arg1 pageInfo:(id)arg2 key:(id)arg3 index:(id)arg4;
+ (id)stringWithDate:(id)arg1;

@end

