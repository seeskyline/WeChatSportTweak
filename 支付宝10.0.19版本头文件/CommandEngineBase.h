//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CommandEngineBase : NSObject
{
    NSString *_EngineName;
    id _delegate;
}

@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *EngineName; // @synthesize EngineName=_EngineName;
- (void).cxx_destruct;
- (_Bool)StopEngine;
- (_Bool)ExcuteCmd:(id)arg1;
- (_Bool)StartEngine;

@end

