//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEECustomAlertView.h"

@class NSString, UIImageView, UILabel, UIView;

@interface ShareTokenAlertView : BEECustomAlertView
{
    _Bool _isSocail;
    NSString *_title;
    NSString *_message;
    NSString *_iconUrl;
    NSString *_topImage;
    UIView *_customView;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UILabel *_messageLabel;
    UIView *_captionView;
    UIView *_separatorV;
    UIView *_separatorH;
    double _ratio;
    double _customHeight;
}

@property(nonatomic) double customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) UIView *separatorH; // @synthesize separatorH=_separatorH;
@property(retain, nonatomic) UIView *separatorV; // @synthesize separatorV=_separatorV;
@property(retain, nonatomic) UIView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) _Bool isSocail; // @synthesize isSocail=_isSocail;
@property(retain, nonatomic) NSString *topImage; // @synthesize topImage=_topImage;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setBorders;
- (void)ajustLayout;
- (void)adjustContainerView;
- (void)initContainerWidth;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 topImage:(id)arg4 isSocia:(_Bool)arg5;
- (void)buildCustomView;
- (id)initWithMessage:(id)arg1;

@end

