//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTNavigationController.h"

@interface BEENaviController : DTNavigationController
{
    _Bool _toastWhenLoadAssets;
    id <BEENaviControllerDelegate> _beeNaviDelegate;
}

@property(nonatomic) _Bool toastWhenLoadAssets; // @synthesize toastWhenLoadAssets=_toastWhenLoadAssets;
@property(nonatomic) __weak id <BEENaviControllerDelegate> beeNaviDelegate; // @synthesize beeNaviDelegate=_beeNaviDelegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (id)initWithRootViewController:(id)arg1;

@end

