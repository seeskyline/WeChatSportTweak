//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KBCONTENTApiResult.h"

@class NSDictionary, NSString;

@interface KBCONTENTContentCreateResp : KBCONTENTApiResult
{
    NSString *_contentId;
    NSDictionary *_ext;
}

+ (Class)extElementClass;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;

@end

