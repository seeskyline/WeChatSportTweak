//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

@class ImmPayDevAuthSession;

@interface ImmPayPluginWearAuth : ImmPayEventPlugin
{
    ImmPayDevAuthSession *_session;
}

+ (void)load;
@property(retain, nonatomic) ImmPayDevAuthSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)loadingAlert;
- (void)swload_onEvent:(id)arg1;
- (void)onWearAuth:(id)arg1 param:(id)arg2;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end

