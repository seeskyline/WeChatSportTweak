//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSDKernel.h"

@interface PSDService : PSDKernel
{
    struct {
        unsigned int isStarted:1;
    } _myFlags;
}

+ (id)allocPrivate;
+ (void)initialize;
+ (id)sharedInstance;
- (id)components;
- (void)unRegisterComponentWithName:(id)arg1;
- (void)registerComponentWithName:(id)arg1 clsName:(id)arg2;
- (void)unregisterPluginCfgs:(id)arg1;
- (void)unregisterPluginCfg:(id)arg1;
- (void)registerPluginCfgs:(id)arg1;
- (void)registerPluginCfg:(id)arg1;
- (void)unregisterJsApiCfgs:(id)arg1;
- (void)unregisterJsApiCfg:(id)arg1;
- (void)registerJsApiCfgs:(id)arg1;
- (void)registerJsApiCfg:(id)arg1;
- (id)plugin:(id)arg1;
- (id)plugin:(id)arg1 groupId:(id)arg2;
- (id)plugins;
- (id)plugins:(id)arg1;
- (id)jsApis;
- (id)jsApis:(id)arg1;
- (id)jsApi:(id)arg1;
- (id)jsApi:(id)arg1 groupId:(id)arg2;
- (void)unRegisterJsApis:(id)arg1;
- (void)unregisterJsApi:(id)arg1;
- (void)registerJsApis:(id)arg1;
- (void)registerJsApi:(id)arg1;
- (void)registerJsApis:(id)arg1 groupId:(id)arg2;
- (void)registerJsApi:(id)arg1 groupId:(id)arg2;
- (id)createViewWithViewParam:(id)arg1 parentObject:(id)arg2;
- (id)createViewWithViewParam:(id)arg1;
- (id)createSceneWithSceneParam:(id)arg1 parentObject:(id)arg2;
- (id)createSceneWithSceneParam:(id)arg1;
- (id)createSessionWithSessionParam:(id)arg1;
- (id)createSessionWithSessionParam:(id)arg1 expando:(id)arg2;
- (id)lastScene;
- (void)start;
- (void)configAll;
- (void)willTerminate:(id)arg1;
- (void)dealloc;
- (id)initPrivate;

@end

