//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SCWebSocketConfigMgr : NSObject
{
    NSDictionary *_configJson;
}

+ (id)shareInstance;
@property(retain) NSDictionary *configJson; // @synthesize configJson=_configJson;
- (void).cxx_destruct;
- (id)getConfigForAppID:(id)arg1;
- (void)freshConfig:(id)arg1;
- (id)init;

@end

