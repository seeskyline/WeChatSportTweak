//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface H5LaunchParamsProcessor : NSObject
{
}

+ (void)p_selectOptionForName:(id)arg1 shortName:(id)arg2 inDictionary:(id)arg3 acceptableValues:(id)arg4 selectedIndex:(int)arg5;
+ (_Bool)p_isAliOrFileUrl:(id)arg1;
+ (_Bool)p_isAlipayOrFileUrl:(id)arg1;
+ (id)p_postprocessLaunchOptions:(id)arg1 appId:(id)arg2;
+ (void)p_checkShowOptionMenu:(id)arg1 urlString:(id)arg2;
+ (void)p_checkShowDomain:(id)arg1 urlString:(id)arg2;
+ (void)p_checkPullRefresh:(id)arg1 urlString:(id)arg2;
+ (void)p_checkCanPullDown:(id)arg1 urlString:(id)arg2;
+ (id)getFinallaunchOptions:(id)arg1 appId:(id)arg2 sourceId:(id)arg3;
+ (void)checkAndProcessDomainInvolved:(id)arg1 appId:(id)arg2 urlString:(id)arg3;
+ (void)checkAndProcessLaunchParams:(id)arg1 appId:(id)arg2 urlString:(id)arg3;

@end

