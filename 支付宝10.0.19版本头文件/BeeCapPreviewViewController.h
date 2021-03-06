//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

@class NSArray, UIButton, UIImage, UIImageView, UIView;

@interface BeeCapPreviewViewController : DTViewController
{
    _Bool _isShowOneMore;
    UIImage *_image;
    CDUnknownBlockType _redoAction;
    CDUnknownBlockType _confirmAction;
    CDUnknownBlockType _oneMoreAction;
    NSArray *_options;
    UIImageView *_imageView;
    UIButton *_redoBtn;
    UIButton *_confirmBtn;
    UIButton *_oneMoreBtn;
    UIView *_toolView;
}

@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIButton *oneMoreBtn; // @synthesize oneMoreBtn=_oneMoreBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *redoBtn; // @synthesize redoBtn=_redoBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType oneMoreAction; // @synthesize oneMoreAction=_oneMoreAction;
@property(copy, nonatomic) CDUnknownBlockType confirmAction; // @synthesize confirmAction=_confirmAction;
@property(copy, nonatomic) CDUnknownBlockType redoAction; // @synthesize redoAction=_redoAction;
@property(nonatomic) _Bool isShowOneMore; // @synthesize isShowOneMore=_isShowOneMore;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)pressOneMoreBtn;
- (void)pressConfirmBtn;
- (void)pressRedoBtn;
- (id)circleBtn;
- (void)dealloc;
- (_Bool)autohideNavigationBar;
- (_Bool)isSpecialColorForAction:(long long)arg1;
- (id)titleForAction:(long long)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithOptions:(id)arg1;

@end

