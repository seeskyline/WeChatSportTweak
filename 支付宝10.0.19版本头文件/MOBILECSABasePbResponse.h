//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class NSString;

@interface MOBILECSABasePbResponse : MOBILECSAToString
{
    _Bool _success;
    NSString *_resultCode;
    NSString *_resultDesc;
}

@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end

