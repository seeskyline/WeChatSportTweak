//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ASICloudFilesContainer : NSObject
{
    NSString *name;
    unsigned long long count;
    unsigned long long bytes;
    _Bool cdnEnabled;
    unsigned long long ttl;
    NSString *cdnURL;
    _Bool logRetention;
    NSString *referrerACL;
    NSString *useragentACL;
}

+ (id)container;
@property(retain) NSString *useragentACL; // @synthesize useragentACL;
@property(retain) NSString *referrerACL; // @synthesize referrerACL;
@property _Bool logRetention; // @synthesize logRetention;
@property(retain) NSString *cdnURL; // @synthesize cdnURL;
@property unsigned long long ttl; // @synthesize ttl;
@property _Bool cdnEnabled; // @synthesize cdnEnabled;
@property unsigned long long bytes; // @synthesize bytes;
@property unsigned long long count; // @synthesize count;
@property(retain) NSString *name; // @synthesize name;
- (void)dealloc;

@end

