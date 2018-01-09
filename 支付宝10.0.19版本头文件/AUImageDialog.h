//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUDialogBaseView.h"

@class NSString;

@interface AUImageDialog : AUDialogBaseView
{
}

+ (void)dismissAll;
- (void)configImageAreaSize:(struct CGSize)arg1;
- (void)setMessageAlignment:(long long)arg1;
- (void)setGrayMessage:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (id)addActionButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)addLinkButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)addButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 delegate:(id)arg4 linkText:(id)arg5 actionButtonTitle:(id)arg6;
- (id)initWithImageUrl:(id)arg1 placeholder:(id)arg2 title:(id)arg3 message:(id)arg4 delegate:(id)arg5;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 delegate:(id)arg4 actionButtonTitle:(id)arg5;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 delegate:(id)arg4 buttonTitles:(id)arg5;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(nonatomic) _Bool buttonsUseNormalColor; // @dynamic buttonsUseNormalColor;
@property(readonly, nonatomic) _Bool isDisplay; // @dynamic isDisplay;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

