//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "streamDelegate.h"

@class MASSChannelInstance;

@interface MASSStreamUnit : NSObject <streamDelegate>
{
    _Bool _isTimeout;
    _Bool _waitingPerform;
    struct __CFReadStream *_readstream;
    struct __CFWriteStream *_writestream;
    struct __CFRunLoop *_runloop;
    MASSChannelInstance *_workInstance;
    long long _streamStat;
    unsigned long long _reconnectCount;
}

@property(nonatomic) _Bool waitingPerform; // @synthesize waitingPerform=_waitingPerform;
@property(nonatomic) _Bool isTimeout; // @synthesize isTimeout=_isTimeout;
@property(nonatomic) unsigned long long reconnectCount; // @synthesize reconnectCount=_reconnectCount;
@property(nonatomic) long long streamStat; // @synthesize streamStat=_streamStat;
@property(retain, nonatomic) MASSChannelInstance *workInstance; // @synthesize workInstance=_workInstance;
@property struct __CFRunLoop *runloop; // @synthesize runloop=_runloop;
@property struct __CFWriteStream *writestream; // @synthesize writestream=_writestream;
@property struct __CFReadStream *readstream; // @synthesize readstream=_readstream;
- (void).cxx_destruct;
- (void)destructSelf;
- (long long)startStreamLife:(id)arg1 host:(id)arg2 port:(long long)arg3;
- (void)onDataComming;
- (void)onDataCanSending;
- (void)onCloseHappens;
- (void)onConnectComplate;
- (void)startRequest;
- (id)init;

@end

