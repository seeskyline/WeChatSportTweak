//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface RedMindInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPassId;
    _Bool _hasLogo;
    _Bool _hasLogoText;
    _Bool _hasSecondLogoText;
    _Bool _hasValidText;
    _Bool _hasBgColore;
    _Bool _hasPassDetailUrl;
    _Bool _hasUseLimite;
    NSString *_passId;
    NSString *_logo;
    NSString *_logoText;
    NSString *_secondLogoText;
    NSString *_validText;
    NSString *_bgColore;
    NSString *_passDetailUrl;
    NSString *_useLimite;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *useLimite; // @synthesize useLimite=_useLimite;
@property(retain, nonatomic) NSString *passDetailUrl; // @synthesize passDetailUrl=_passDetailUrl;
@property(retain, nonatomic) NSString *bgColore; // @synthesize bgColore=_bgColore;
@property(retain, nonatomic) NSString *validText; // @synthesize validText=_validText;
@property(retain, nonatomic) NSString *secondLogoText; // @synthesize secondLogoText=_secondLogoText;
@property(retain, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(readonly) _Bool hasUseLimite; // @synthesize hasUseLimite=_hasUseLimite;
@property(readonly) _Bool hasPassDetailUrl; // @synthesize hasPassDetailUrl=_hasPassDetailUrl;
@property(readonly) _Bool hasBgColore; // @synthesize hasBgColore=_hasBgColore;
@property(readonly) _Bool hasValidText; // @synthesize hasValidText=_hasValidText;
@property(readonly) _Bool hasSecondLogoText; // @synthesize hasSecondLogoText=_hasSecondLogoText;
@property(readonly) _Bool hasLogoText; // @synthesize hasLogoText=_hasLogoText;
@property(readonly) _Bool hasLogo; // @synthesize hasLogo=_hasLogo;
@property(readonly) _Bool hasPassId; // @synthesize hasPassId=_hasPassId;
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

