//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol O2OHTTPModelRPCInterface <NSObject>
- (_Bool)cacheResponse:(id)arg1;
- (NSString *)spmPageTime;
- (_Bool)isPBResponse;
- (_Bool)raise1002Exception;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCResponseClass;
- (Class)RPCServiceClass;
- (Class)RPCRequestClass;
@end

