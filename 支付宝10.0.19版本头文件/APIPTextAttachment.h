//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

@class NSString;

@interface APIPTextAttachment : NSTextAttachment
{
    _Bool _loaded;
    NSString *_cloudId;
    long long _index;
}

@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
- (void).cxx_destruct;
- (id)init;

@end

