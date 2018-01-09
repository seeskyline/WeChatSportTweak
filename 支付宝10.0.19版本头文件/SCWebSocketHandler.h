//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SRWebSocketDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL, SCWebSocketConfig, SRWebSocket;

@interface SCWebSocketHandler : NSObject <SRWebSocketDelegate>
{
    _Bool _isOpen;
    NSString *_appID;
    unsigned long long _appVersion;
    SCWebSocketConfig *_webSocketConfig;
    SRWebSocket *_webSocket;
    NSObject<OS_dispatch_queue> *_workerQueue;
    id <SCWebSocketHandlerDelegate> _delegate;
    CDUnknownBlockType _openCallBack;
    CDUnknownBlockType _messageCallBack;
    CDUnknownBlockType _errorCallBack;
    CDUnknownBlockType _closeCallBack;
    NSMutableArray *_uploadMsgs;
    NSMutableArray *_downloadMsgs;
    double _startTime;
    double _connectedTime;
    double _closeTime;
    NSURL *_connectUrl;
}

@property(retain, nonatomic) NSURL *connectUrl; // @synthesize connectUrl=_connectUrl;
@property(nonatomic) double closeTime; // @synthesize closeTime=_closeTime;
@property(nonatomic) double connectedTime; // @synthesize connectedTime=_connectedTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *downloadMsgs; // @synthesize downloadMsgs=_downloadMsgs;
@property(retain, nonatomic) NSMutableArray *uploadMsgs; // @synthesize uploadMsgs=_uploadMsgs;
@property(copy, nonatomic) CDUnknownBlockType closeCallBack; // @synthesize closeCallBack=_closeCallBack;
@property(copy, nonatomic) CDUnknownBlockType errorCallBack; // @synthesize errorCallBack=_errorCallBack;
@property(copy, nonatomic) CDUnknownBlockType messageCallBack; // @synthesize messageCallBack=_messageCallBack;
@property(copy, nonatomic) CDUnknownBlockType openCallBack; // @synthesize openCallBack=_openCallBack;
@property(nonatomic) __weak id <SCWebSocketHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) SRWebSocket *webSocket; // @synthesize webSocket=_webSocket;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) SCWebSocketConfig *webSocketConfig; // @synthesize webSocketConfig=_webSocketConfig;
@property(nonatomic) unsigned long long appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocket:(id)arg1 didReceiveMessageWithString:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (id)getErrorInfoWithError:(id)arg1;
- (id)getCloseInfo;
- (id)getConnectInfo;
- (void)callbackWithError:(id)arg1;
- (void)close;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithRequest:(id)arg1 isIgnoreCheckDomain:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

