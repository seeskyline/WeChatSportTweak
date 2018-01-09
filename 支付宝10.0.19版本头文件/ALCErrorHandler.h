//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AUDialogDelegate.h"

@class NSString;

@interface ALCErrorHandler : NSObject <AUDialogDelegate>
{
}

+ (id)sharedInstance;
- (_Bool)isCriticalError:(id)arg1;
- (id)getExceptionViewWithParentView:(id)arg1 exceptionType:(int)arg2 info:(id)arg3 detail:(id)arg4 buttonTitle:(id)arg5 target:(id)arg6 action:(SEL)arg7;
- (id)getExceptionViewWithParentView:(id)arg1 exceptionType:(int)arg2 info:(id)arg3 detail:(id)arg4 target:(id)arg5 action:(SEL)arg6;
- (id)handleRPCException:(id)arg1 hasCache:(_Bool)arg2 isForm:(_Bool)arg3 parentView:(id)arg4 target:(id)arg5 refreshAction:(SEL)arg6 backAction:(SEL)arg7;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sessionExpired:(id)arg1;
- (void)handleRequestError:(id)arg1 withView:(id)arg2;
- (void)handleCertError:(id)arg1 withView:(id)arg2 hasCache:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

