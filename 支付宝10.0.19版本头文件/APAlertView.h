//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APAlertViewBase.h"

@class APModelAlertViewDelegate;

@interface APAlertView : APAlertViewBase
{
    APModelAlertViewDelegate *_modelAlertViewDelegate;
}

@property(retain, nonatomic) APModelAlertViewDelegate *modelAlertViewDelegate; // @synthesize modelAlertViewDelegate=_modelAlertViewDelegate;
- (void).cxx_destruct;
- (long long)showModel;

@end

