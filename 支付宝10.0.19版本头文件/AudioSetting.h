//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SettingUpdateProtocal.h"

@class NSString;

@interface AudioSetting : NSObject <SettingUpdateProtocal>
{
    _Bool _enableNoiseSuppression;
}

+ (id)audioSetting;
@property(nonatomic) _Bool enableNoiseSuppression; // @synthesize enableNoiseSuppression=_enableNoiseSuppression;
- (void)update;
- (void)onSettingUpdate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

