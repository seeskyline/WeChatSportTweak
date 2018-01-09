//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTService.h"

@class NSString;

@interface APSettingsService : NSObject <DTService>
{
    NSString *_selectService;
    _Bool _isMockCheck;
    NSString *_envName;
}

+ (id)envName;
@property(copy, nonatomic) NSString *envName; // @synthesize envName=_envName;
- (void).cxx_destruct;
- (void)setMtopConfig:(int)arg1;
- (void)setUrlConfig;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

