//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKChatImageState.h"

@class NSString, PKCloudImageView;

@interface PKChatImageiCloudInSynchronousState : NSObject <PKChatImageState>
{
    PKCloudImageView *_imageView;
}

@property(nonatomic) __weak PKCloudImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updateProgress:(double)arg1;
- (void)show;
- (id)initWithImageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

