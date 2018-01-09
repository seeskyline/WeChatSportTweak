//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@class AMRPCSession;

@interface AMRPCProtocol : NSURLProtocol
{
    AMRPCSession *_session;
    _Bool _rpcResponse;
    double _rpcStartTime;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(nonatomic) _Bool rpcResponse; // @synthesize rpcResponse=_rpcResponse;
@property(nonatomic) double rpcStartTime; // @synthesize rpcStartTime=_rpcStartTime;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;

@end

