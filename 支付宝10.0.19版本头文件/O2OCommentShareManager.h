//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSKLaunchpadDelegate.h"

@class APSKClient, APSKLaunchpad, NSString, O2OCommentPublicSuccessShareInfo, O2OCommentShortLinkModel, UIView;

@interface O2OCommentShareManager : NSObject <APSKLaunchpadDelegate>
{
    id _vc;
    O2OCommentPublicSuccessShareInfo *_shareInfo;
    UIView *_hostingView;
    APSKLaunchpad *_launchPad;
    APSKClient *_client;
    O2OCommentShortLinkModel *_shorLinkModel;
}

+ (id)shareIdWithChannel:(id)arg1;
@property(retain, nonatomic) O2OCommentShortLinkModel *shorLinkModel; // @synthesize shorLinkModel=_shorLinkModel;
@property(retain, nonatomic) APSKClient *client; // @synthesize client=_client;
@property(retain, nonatomic) APSKLaunchpad *launchPad; // @synthesize launchPad=_launchPad;
@property(nonatomic) __weak UIView *hostingView; // @synthesize hostingView=_hostingView;
@property(retain, nonatomic) O2OCommentPublicSuccessShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(nonatomic) __weak id vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (id)generateMerchantSchemeWithTarget:(id)arg1;
- (id)defaultZhiCodePreContent;
- (id)contentWithChannel:(id)arg1;
- (id)linkUrlWithChannel:(id)arg1;
- (id)title;
- (void)shareToContact;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)sharingLaunchpadDidCancel:(id)arg1;
- (void)showInView:(id)arg1 shareInfo:(id)arg2;
- (void)share2Weibo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

