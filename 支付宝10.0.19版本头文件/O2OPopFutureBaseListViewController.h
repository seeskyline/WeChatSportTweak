//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OListViewController.h"

@class APExceptionView, UIActivityIndicatorView, UIView;

@interface O2OPopFutureBaseListViewController : O2OListViewController
{
    UIActivityIndicatorView *_indicatorView;
    APExceptionView *_netErrorView;
    APExceptionView *_netLimitView;
    APExceptionView *_emptyErrorView;
    APExceptionView *_locationErrorView;
    UIView *_loadingView;
}

@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) APExceptionView *locationErrorView; // @synthesize locationErrorView=_locationErrorView;
@property(retain, nonatomic) APExceptionView *emptyErrorView; // @synthesize emptyErrorView=_emptyErrorView;
@property(retain, nonatomic) APExceptionView *netLimitView; // @synthesize netLimitView=_netLimitView;
@property(retain, nonatomic) APExceptionView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)startLocating;
- (void)stopLoading;
- (void)handleError:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (_Bool)isFirstRequest;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

