//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSDEvent.h"

@interface NBProgressViewEvent : PSDEvent
{
    id <NBProgressViewProtocol> _progressView;
}

+ (id)createAfterEvent:(id)arg1;
+ (id)createBeforeEvent:(id)arg1;
+ (id)allEvent:(id)arg1;
@property(retain, nonatomic) id <NBProgressViewProtocol> progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;

@end

