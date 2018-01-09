//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VIContextRuntimeWrapper;

@interface VIContextManager : NSObject
{
    id <VIToast> _toastAdapter;
    id <VIBarButtonItem> _barButtonItemAdapter;
    id <VIAlertView> _alertViewAdapter;
    id <VIContextRuntime> _runtimeContextAdapter;
    id <VIRPCClient> _rpcClientAdapter;
    id <VIContextLogger> _loggerAdapter;
    id <VIContextEnv> _envAdapter;
    id <VIButtonGenerator> _buttonGeneratorAdapter;
    id <VIContextCashierLogger> _cashierLoggerAdapter;
    id <VIRPCExecutor> _rpcExecutorAdapter;
    VIContextRuntimeWrapper *_runtimeWrapper;
}

+ (id)sharedInstance;
@property(retain, nonatomic) VIContextRuntimeWrapper *runtimeWrapper; // @synthesize runtimeWrapper=_runtimeWrapper;
@property(retain, nonatomic) id <VIRPCExecutor> rpcExecutorAdapter; // @synthesize rpcExecutorAdapter=_rpcExecutorAdapter;
@property(retain, nonatomic) id <VIContextCashierLogger> cashierLoggerAdapter; // @synthesize cashierLoggerAdapter=_cashierLoggerAdapter;
@property(retain, nonatomic) id <VIButtonGenerator> buttonGeneratorAdapter; // @synthesize buttonGeneratorAdapter=_buttonGeneratorAdapter;
@property(retain, nonatomic) id <VIContextEnv> envAdapter; // @synthesize envAdapter=_envAdapter;
@property(retain, nonatomic) id <VIContextLogger> loggerAdapter; // @synthesize loggerAdapter=_loggerAdapter;
@property(retain, nonatomic) id <VIRPCClient> rpcClientAdapter; // @synthesize rpcClientAdapter=_rpcClientAdapter;
@property(retain, nonatomic) id <VIContextRuntime> runtimeContextAdapter; // @synthesize runtimeContextAdapter=_runtimeContextAdapter;
@property(retain, nonatomic) id <VIAlertView> alertViewAdapter; // @synthesize alertViewAdapter=_alertViewAdapter;
@property(retain, nonatomic) id <VIBarButtonItem> barButtonItemAdapter; // @synthesize barButtonItemAdapter=_barButtonItemAdapter;
@property(retain, nonatomic) id <VIToast> toastAdapter; // @synthesize toastAdapter=_toastAdapter;
- (void).cxx_destruct;
- (id)init;

@end

