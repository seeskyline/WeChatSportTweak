//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSLock, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@interface APFileUploadManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    NSURLSession *_session;
    NSLock *_lock;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_mutableTaskDelegatesKeyedByTaskIdentifier;
}

@property(retain, nonatomic) NSMutableDictionary *mutableTaskDelegatesKeyedByTaskIdentifier; // @synthesize mutableTaskDelegatesKeyedByTaskIdentifier=_mutableTaskDelegatesKeyedByTaskIdentifier;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)uploadTaskWithStreamedRequest:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addDelegateForUploadTask:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDelegateForTask:(id)arg1;
- (void)setDelegate:(id)arg1 forTask:(id)arg2;
- (id)delegateForTask:(id)arg1;
- (void)dealloc;
- (id)initWithSessionConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

