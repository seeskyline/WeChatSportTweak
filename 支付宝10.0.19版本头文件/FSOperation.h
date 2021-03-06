//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<OS_dispatch_queue>, NSURLRequest;

@interface FSOperation : NSOperation
{
    CDUnknownBlockType _callbackBlock;
    NSURLRequest *_request;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void).cxx_destruct;
- (_Bool)isConcurrent;
- (void)main;
- (id)initWithRequest:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;

@end

