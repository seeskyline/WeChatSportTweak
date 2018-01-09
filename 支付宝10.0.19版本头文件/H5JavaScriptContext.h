//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSContext;

@interface H5JavaScriptContext : NSObject
{
    H5JavaScriptContext *_selfReference;
    JSContext *_context;
}

@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
@property(readonly, nonatomic) struct OpaqueJSContext *ctx;
- (id)initWithJSContext:(id)arg1;

@end

