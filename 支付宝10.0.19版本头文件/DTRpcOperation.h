//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTRpcBaseOperation.h"

@class DTRpcMethod, NSArray, NSCachedURLResponse, NSLock, NSMutableDictionary, NSURLConnection, NSURLProtocol, NSURLRequest;

@interface DTRpcOperation : DTRpcBaseOperation
{
    _Bool _shouldAppendCTUExtraParams;
    _Bool _shouldAppendTrafficControlParams;
    _Bool _isSDPYProtocol;
    _Bool _ignoreInterceptor;
    _Bool _canResend;
    _Bool _isIgnoreNetStatus;
    _Bool _isForegroundRPC;
    _Bool _isBlackListRPC;
    _Bool _isSpecialChannelRPC;
    _Bool _isLoginRPC;
    int _retryCount;
    unsigned int _rpcSeq;
    double _startTime;
    CDUnknownBlockType _responseBlock;
    double _timeoutInterval;
    DTRpcMethod *_method;
    NSArray *_params;
    id _resultObject;
    NSMutableDictionary *_userInfo;
    NSURLRequest *_etagRequest;
    NSCachedURLResponse *_cachedResponse;
    NSURLConnection *_connection;
    NSURLProtocol *_protocol;
    NSLock *_cookieLock;
}

@property(nonatomic) unsigned int rpcSeq; // @synthesize rpcSeq=_rpcSeq;
@property(retain, nonatomic) NSLock *cookieLock; // @synthesize cookieLock=_cookieLock;
@property(retain, nonatomic) NSURLProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSCachedURLResponse *cachedResponse; // @synthesize cachedResponse=_cachedResponse;
@property(retain, nonatomic) NSURLRequest *etagRequest; // @synthesize etagRequest=_etagRequest;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) id resultObject; // @synthesize resultObject=_resultObject;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) DTRpcMethod *method; // @synthesize method=_method;
@property(nonatomic) _Bool isLoginRPC; // @synthesize isLoginRPC=_isLoginRPC;
@property(nonatomic) _Bool isSpecialChannelRPC; // @synthesize isSpecialChannelRPC=_isSpecialChannelRPC;
@property(nonatomic) _Bool isBlackListRPC; // @synthesize isBlackListRPC=_isBlackListRPC;
@property(nonatomic) _Bool isForegroundRPC; // @synthesize isForegroundRPC=_isForegroundRPC;
@property(nonatomic) _Bool isIgnoreNetStatus; // @synthesize isIgnoreNetStatus=_isIgnoreNetStatus;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) _Bool canResend; // @synthesize canResend=_canResend;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(nonatomic) _Bool ignoreInterceptor; // @synthesize ignoreInterceptor=_ignoreInterceptor;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isSDPYProtocol; // @synthesize isSDPYProtocol=_isSDPYProtocol;
@property(nonatomic) _Bool shouldAppendTrafficControlParams; // @synthesize shouldAppendTrafficControlParams=_shouldAppendTrafficControlParams;
@property(nonatomic) _Bool shouldAppendCTUExtraParams; // @synthesize shouldAppendCTUExtraParams=_shouldAppendCTUExtraParams;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didURLProtocolFinishLoading;
- (void)didURLProtocolLoadData:(id)arg1;
- (void)didURLProtocolReceiveResponse:(id)arg1;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)stopSendRPC;
- (void)setResponseToPBIntoClass;
- (void)signRequest:(id)arg1;
- (void)startConnection;
- (id)rpcOperationType;
- (void)cacheResponseString;
- (id)parsePBFromResultData;
- (void)logVoidResultObject;
- (void)didFinish;
- (void)didStart;
- (id)buildPBRequestDataWithMethod:(id)arg1 params:(id)arg2;
- (void)buildRequestDataWithMethod:(id)arg1 params:(id)arg2;
- (id)copy;
- (void)start;
- (void)filRequestlValue:(id)arg1 contentType:(id)arg2 method:(id)arg3 params:(id)arg4;
- (void)toCDN:(id)arg1 cdn:(_Bool)arg2 reqURL:(id)arg3;
- (id)requestWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 amrpc:(_Bool)arg4 cdn:(_Bool)arg5;
- (id)initWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 headerFields:(id)arg4 amrpc:(_Bool)arg5 cdn:(_Bool)arg6;
- (id)initWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 method:(id)arg2 params:(id)arg3;
- (id)initWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 amrpc:(_Bool)arg4 cdn:(_Bool)arg5;

@end

