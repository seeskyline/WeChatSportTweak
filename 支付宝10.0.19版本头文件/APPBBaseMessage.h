//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface APPBBaseMessage : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    NSMutableArray *_propertyInfoArray;
    NSMutableDictionary *_propertyTagMap;
    NSNumber *_bHasPbPre;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSNumber *bHasPbPre; // @synthesize bHasPbPre=_bHasPbPre;
@property(retain, nonatomic) NSMutableDictionary *propertyTagMap; // @synthesize propertyTagMap=_propertyTagMap;
@property(retain, nonatomic) NSMutableArray *propertyInfoArray; // @synthesize propertyInfoArray=_propertyInfoArray;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
- (void)executeSelector:(id)arg1 withParam:(id)arg2;
- (id)executeSelector:(id)arg1;
- (_Bool)isArray:(id)arg1;
- (_Bool)propertyHasValue:(id)arg1;
- (_Bool)isRealSelector:(id)arg1;
- (_Bool)HasRealSelector:(id)arg1;
- (id)findRealSelectorName:(id)arg1;
- (_Bool)isHASSelectorExist:(id)arg1;
- (void)buildPropertyInfoMap;
- (void)pBInfoLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

