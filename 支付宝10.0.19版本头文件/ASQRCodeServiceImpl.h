//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASQRCodeService.h"

@class AccountQRView, NSString, UIView;

@interface ASQRCodeServiceImpl : NSObject <ASQRCodeService>
{
    AccountQRView *_qrView;
    double _scaleFactor;
    UIView *_alertBackgroundView;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) UIView *alertBackgroundView; // @synthesize alertBackgroundView=_alertBackgroundView;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) AccountQRView *qrView; // @synthesize qrView=_qrView;
- (void).cxx_destruct;
- (void)showQRView:(id)arg1 withInfoData:(id)arg2 exceptionToastView:(id)arg3;
- (void)loadDataForQRView:(id)arg1 withExceptionView:(id)arg2;
- (void)setupViewForAlertStyleOnView:(id)arg1;
- (void)clearViews;
- (void)gestureHandler:(id)arg1;
- (void)addGestureHandler;
- (void)showQRCodeOnView:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void)showQRCodeOnView:(id)arg1;
- (void)dismiss;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

