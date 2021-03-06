//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSKLaunchpadDelegate.h"

@class APSKLaunchpad, NSString, UIImage;

@interface MQPShareComponent : NSObject <APSKLaunchpadDelegate>
{
    NSString *_type;
    id _content;
    NSString *_title;
    NSString *_desc;
    UIImage *_screenShot;
    APSKLaunchpad *_panel;
    CDUnknownBlockType _block;
}

+ (id)snapshot:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) APSKLaunchpad *panel; // @synthesize panel=_panel;
@property(retain, nonatomic) UIImage *screenShot; // @synthesize screenShot=_screenShot;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (id)buildShareObj;
- (void)showSharePanelInView:(id)arg1 withSelectBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

