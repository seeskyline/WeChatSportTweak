//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface O2OVoucherDesc : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasIcon;
    _Bool _hasTitle;
    _Bool _hasLinkUrl;
    NSString *_icon;
    NSString *_title;
    NSString *_linkUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(readonly) _Bool hasLinkUrl; // @synthesize hasLinkUrl=_hasLinkUrl;
@property(readonly) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property(readonly) _Bool hasIcon; // @synthesize hasIcon=_hasIcon;
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

