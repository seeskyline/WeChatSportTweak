//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString, SyncSelfStatInfo;

@interface SyncSelfPayload : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasAction;
    _Bool _hasStatInfo;
    int _action;
    SyncSelfStatInfo *_statInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) SyncSelfStatInfo *statInfo; // @synthesize statInfo=_statInfo;
@property(nonatomic) int action; // @synthesize action=_action;
@property(readonly) _Bool hasStatInfo; // @synthesize hasStatInfo=_hasStatInfo;
@property(readonly) _Bool hasAction; // @synthesize hasAction=_hasAction;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

