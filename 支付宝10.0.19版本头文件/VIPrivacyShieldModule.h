//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIModule.h"

@class NSArray, NSNumber;

@interface VIPrivacyShieldModule : VIModule
{
    NSArray *_questions;
    NSNumber *_hasOthers;
}

@property(retain, nonatomic) NSNumber *hasOthers; // @synthesize hasOthers=_hasOthers;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
- (void).cxx_destruct;
- (_Bool)buildModuleWithString:(id)arg1;
- (void)start;

@end

