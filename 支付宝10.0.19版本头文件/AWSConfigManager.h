//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller, NSMutableDictionary, NSTimer;

@interface AWSConfigManager : NSObject
{
    _Bool _shouldInvoke;
    _Bool _isFirstInvoke;
    NSMutableDictionary *_currentConfig;
    DTRpcAsyncCaller *_caller;
    NSTimer *_timer;
}

+ (void)cleanAllResource;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isFirstInvoke; // @synthesize isFirstInvoke=_isFirstInvoke;
@property(retain, nonatomic) DTRpcAsyncCaller *caller; // @synthesize caller=_caller;
@property(retain, nonatomic) NSMutableDictionary *currentConfig; // @synthesize currentConfig=_currentConfig;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)suspend;
- (id)queryBy:(unsigned long long)arg1;
- (void)callerBlock;
- (void)start;
- (void)didEnterBackground;
- (void)didEnterForground;
- (id)init;

@end

