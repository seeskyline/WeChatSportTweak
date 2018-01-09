//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTContext.h"

@class DFMicroApplicationManager, DFServiceManager, UINavigationController, UIWindow;

@interface DFContext : DTContext
{
    UIWindow *_window;
    UINavigationController *_navigationController;
    DFMicroApplicationManager *_applicationManager;
    DFServiceManager *_serviceManager;
}

+ (id)sharedContext;
@property(retain, nonatomic) DFServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(retain, nonatomic) DFMicroApplicationManager *applicationManager; // @synthesize applicationManager=_applicationManager;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)visibleViewControllerForRootVC:(id)arg1;
- (id)presentingViewControllerForRootVC:(id)arg1;
- (id)currentVisibleViewController;
- (id)applicationShouldStartMultapplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sourceId:(id)arg4;
- (_Bool)canHandleStartApplication:(id)arg1 params:(id)arg2;
- (void)setViewControllers:(id)arg1 forApplicationObject:(id)arg2 animated:(_Bool)arg3;
- (void)setViewControllers:(id)arg1 forApplication:(id)arg2 animated:(_Bool)arg3;
- (id)viewControllersOfApplicationObject:(id)arg1;
- (id)viewControllersOfApplication:(id)arg1;
- (void)commitAppTransaction;
- (_Bool)beginAppTransaction;
- (void)unregisterStartApplicationHandler:(id)arg1;
- (_Bool)registerStartApplicationHandler:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)registerStartApplicationHandler:(id)arg1;
- (void)unregisterServiceForName:(id)arg1;
- (_Bool)registerService:(id)arg1 forName:(id)arg2;
- (id)findServiceByName:(id)arg1;
- (id)currentApplication;
- (id)findApplicationsByName:(id)arg1;
- (id)findApplicationByName:(id)arg1;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 appClearTop:(_Bool)arg3 launchMode:(long long)arg4 sourceId:(id)arg5;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sourceId:(id)arg4;
- (_Bool)startLogonApplicationForSync:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 animated:(_Bool)arg3;
- (id)init;

@end

