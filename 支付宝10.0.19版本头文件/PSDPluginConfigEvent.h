//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSDPluginConfigEvent : NSObject
{
    _Bool _useCapture;
    NSString *_event;
}

+ (id)pluginConfigEvent:(id)arg1 useCapture:(_Bool)arg2;
@property(readonly, nonatomic) _Bool useCapture; // @synthesize useCapture=_useCapture;
@property(readonly, copy, nonatomic) NSString *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1 useCapture:(_Bool)arg2;

@end

