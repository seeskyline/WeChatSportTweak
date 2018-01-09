//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NebulaDebug : NSObject
{
}

+ (id)shared;
@property(nonatomic) __weak id <NBDebugConfigDelegate> delegate;
@property _Bool weinreSwitch;
@property _Bool hybridSwitch;
@property _Bool showIcon;
@property(retain, nonatomic) NSString *userSource;
@property(retain, nonatomic) NSString *weinreServer;
@property(retain, nonatomic) NSString *customServer;
- (void)resetSwitchSettings;
- (id)switchViewController;
- (void)handleSyncPushNotification:(id)arg1;
- (void)dealloc;
- (void)invokeHybridDebug;
- (id)initInPrivate;
- (id)init;

@end

