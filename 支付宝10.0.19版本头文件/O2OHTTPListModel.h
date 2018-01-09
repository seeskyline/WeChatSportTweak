//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZHTTPListModel.h"

#import "O2OHTTPModelRPCInterface.h"
#import "O2OHTTPRequestProtocol.h"

@class NSString, UIViewController;

@interface O2OHTTPListModel : VZHTTPListModel <O2OHTTPRequestProtocol, O2OHTTPModelRPCInterface>
{
    id _spmKey;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id spmKey; // @synthesize spmKey=_spmKey;
- (void).cxx_destruct;
- (_Bool)shouldCacheResponse:(id)arg1;
- (_Bool)shouldRaise1002Exception;
- (id)headerParams;
- (void)prepareRequest;
- (id)createRequest;
- (_Bool)shouldLoad;
- (_Bool)isPBResponse;
- (_Bool)cacheResponse:(id)arg1;
- (_Bool)raise1002Exception;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCResponseClass;
- (Class)RPCServiceClass;
- (Class)RPCRequestClass;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

