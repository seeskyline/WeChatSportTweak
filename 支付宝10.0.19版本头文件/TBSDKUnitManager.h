//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBSDKUnitAPIListManager, TBSDKUserUnitConfigureManager;

@interface TBSDKUnitManager : NSObject
{
    TBSDKUnitAPIListManager *_unitAPIListManager;
    TBSDKUserUnitConfigureManager *_userUnitConfigureManager;
    struct dispatch_queue_s *_apiListQueue;
    _Bool _enableUnit;
}

+ (void)updateCurUserUnit:(id)arg1 userId:(id)arg2;
+ (id)getCurUserUnit:(id)arg1;
+ (void)loadNwUnitMgrInstaance;
+ (_Bool)readNetworkSdkUnitInfo;
+ (id)shareInstance;
@property(nonatomic) _Bool enableUnit; // @synthesize enableUnit=_enableUnit;
- (void).cxx_destruct;
- (void)apiUnitResponseHeaders:(id)arg1 withUserId:(id)arg2;
- (id)currentUserHost:(id)arg1 apiVersion:(id)arg2 apiListVersion:(id *)arg3 host:(id)arg4 unitPrefix:(id)arg5 userId:(id)arg6;
- (id)init;

@end

