//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SystemAuthorizationCheck : NSObject
{
}

+ (id)getSettingNotifyState;
- (unsigned int)getHealthKitAuthorizationStatus;
- (unsigned int)getBluetoothPeripheralAuthorizationStatus;
- (int)getLocationAuthorizationStatus;
- (unsigned int)getMicrophoneAuthorizationStatus;
- (unsigned int)getContactsAuthorizationStatus;
- (unsigned int)getCameraAuthorizationStatus;
- (unsigned int)getPhotoLibraryAuthorizationStatus;
- (unsigned long long)getNotificationAuthorizationStatus;
- (void)updateReportTime;
- (_Bool)shouldReport;
- (void)reportSettingNotify;
- (void)startCheck;

@end

