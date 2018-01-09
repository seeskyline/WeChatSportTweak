//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class H5JSCBridge, H5JSCExecutor, NSMutableDictionary;

@interface H5JSCManager : NSObject
{
    _Bool _isBaseJsLoaded;
    H5JSCBridge *_bridge;
    NSMutableDictionary *_workers;
    H5JSCExecutor *_jsexecutor;
}

@property(nonatomic) _Bool isBaseJsLoaded; // @synthesize isBaseJsLoaded=_isBaseJsLoaded;
@property(retain, nonatomic) H5JSCExecutor *jsexecutor; // @synthesize jsexecutor=_jsexecutor;
@property(retain, nonatomic) NSMutableDictionary *workers; // @synthesize workers=_workers;
@property(nonatomic) __weak H5JSCBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)addWorker:(id)arg1;
- (_Bool)isWorkerExist:(id)arg1;
- (void)dealloc;
- (void)loadBaseJS;
- (id)initWithSession:(id)arg1;

@end

