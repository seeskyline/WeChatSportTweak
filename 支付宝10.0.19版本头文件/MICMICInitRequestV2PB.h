//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface MICMICInitRequestV2PB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizId; // @dynamic bizId;
@property(retain, nonatomic) NSString *bizRequestData; // @dynamic bizRequestData;
@property(retain, nonatomic) NSString *envData; // @dynamic envData;
@property(retain, nonatomic) PBMapStringString *externParams; // @dynamic externParams;
@property(readonly) _Bool hasBizId; // @dynamic hasBizId;
@property(readonly) _Bool hasBizRequestData; // @dynamic hasBizRequestData;
@property(readonly) _Bool hasEnvData; // @dynamic hasEnvData;
@property(readonly) _Bool hasExternParams; // @dynamic hasExternParams;
@property(readonly) _Bool hasSceneId; // @dynamic hasSceneId;
@property(retain, nonatomic) NSString *sceneId; // @dynamic sceneId;

@end

