//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAMAppInterface.h"

@class NSString;

@interface NAAppInterface : NSObject <NAMAppInterface>
{
}

- (_Bool)isNebulaApp:(id)arg1 nebulaVersion:(id *)arg2;
- (_Bool)enableLoadPubAppId:(id)arg1 contextApp:(id)arg2 version:(id *)arg3;
- (_Bool)enableStableReq;
- (id)sceneForApp:(id)arg1;
- (_Bool)enableCommonResourceDegrade:(id)arg1;
- (id)permanentVersionsForApp:(id)arg1;
- (id)findApp:(id)arg1 version:(id)arg2;
- (_Bool)supportNebulaApp:(id)arg1 version:(id)arg2 nebulaVersion:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

