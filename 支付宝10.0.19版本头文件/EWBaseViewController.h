//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEBaseController.h"

@class APExceptionView, EWBaseViewModel, EWDataEngine;

@interface EWBaseViewController : BEEBaseController
{
    EWBaseViewModel *_viewModel;
    EWDataEngine *_dataEngine;
    APExceptionView *_errorStateView;
}

@property(retain, nonatomic) APExceptionView *errorStateView; // @synthesize errorStateView=_errorStateView;
@property(retain, nonatomic) EWDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) EWBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)retry;
- (void)hideExceptionView;
- (void)showExceptionView:(id)arg1 enableRetry:(_Bool)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (void)back;

@end

