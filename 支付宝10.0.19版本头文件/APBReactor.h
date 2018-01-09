//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APBEventProtocol.h"

@class APBEventListener, APBResponse, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, NSTimer;

@interface APBReactor : NSObject <APBEventProtocol>
{
    NSObject<OS_dispatch_semaphore> *_reactorLock;
    NSMutableDictionary *_currentPipeInfo;
    long long _currentTaskIndex;
    CDUnknownBlockType _rcb;
    APBEventListener *_eventListener;
    APBResponse *_response;
    NSArray *_tasks;
    NSDictionary *_globalConfig;
    NSDictionary *_taskConfig;
    NSMutableArray *_parallelTasks;
    NSTimer *_globalTimer;
    NSTimer *_taskTimer;
    id <IBioAuthFactor> _factor;
    id <IBioAuthTask> _currentTask;
}

@property(nonatomic) __weak id <IBioAuthTask> currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) id <IBioAuthFactor> factor; // @synthesize factor=_factor;
@property(retain, nonatomic) NSTimer *taskTimer; // @synthesize taskTimer=_taskTimer;
@property(retain, nonatomic) NSTimer *globalTimer; // @synthesize globalTimer=_globalTimer;
@property(retain, nonatomic) NSMutableArray *parallelTasks; // @synthesize parallelTasks=_parallelTasks;
@property(retain, nonatomic) NSDictionary *taskConfig; // @synthesize taskConfig=_taskConfig;
@property(retain, nonatomic) NSDictionary *globalConfig; // @synthesize globalConfig=_globalConfig;
@property(retain, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) APBResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) APBEventListener *eventListener; // @synthesize eventListener=_eventListener;
@property(copy, nonatomic) CDUnknownBlockType rcb; // @synthesize rcb=_rcb;
@property(nonatomic) long long currentTaskIndex; // @synthesize currentTaskIndex=_currentTaskIndex;
@property(nonatomic) __weak NSMutableDictionary *currentPipeInfo; // @synthesize currentPipeInfo=_currentPipeInfo;
- (void).cxx_destruct;
- (void)_addGlobalTimer;
- (void)_addTaskTimer;
- (id)eventByType:(long long)arg1 parm:(id)arg2;
- (void)_addKVOObserver:(id)arg1;
- (void)_removeKVObserver:(id)arg1;
- (void)_removeAllKVObserver:(id)arg1;
- (void)_resetAllTask:(id)arg1 forceOnMainThread:(_Bool)arg2;
- (void)_resetTask:(id)arg1 forceOnMainThread:(_Bool)arg2;
- (void)eventTriggered:(id)arg1;
- (void)runTask:(long long)arg1 withPipeInfo:(id)arg2;
- (void)processParallelStateChange:(id)arg1 withObject:(id)arg2;
- (void)processStateChange:(id)arg1;
- (void)onTaskTimer:(id)arg1;
- (void)onGlobalTimer:(id)arg1;
- (void)internalExit;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)execBackwardCommand:(id)arg1;
- (_Bool)_object:(id)arg1 responseToSelector:(SEL)arg2;
- (void)exec:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)runWithGlobalConfig:(id)arg1 withResponseCallback:(CDUnknownBlockType)arg2;
- (void)setTaskList:(id)arg1;
- (_Bool)isBusy;
- (void)_setUp;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

