//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIColor, UIImage, UIImageView, UILabel;

@interface AUSearchTitleView : UIView
{
    _Bool _isShowVoiceIcon;
    long long _style;
    NSString *_placeHolder;
    UIColor *_placeHolderColor;
    id <AUSearchTitleViewDelegate> _delegate;
    UIImage *_searchIconImage;
    UIColor *_normalBackgroundColor;
    UIButton *_voiceIconButton;
    double _marginBetweenItem;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_backgroundButton;
    UIImageView *_searchIconImageView;
}

@property(retain, nonatomic) UIImageView *searchIconImageView; // @synthesize searchIconImageView=_searchIconImageView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double marginBetweenItem; // @synthesize marginBetweenItem=_marginBetweenItem;
@property(retain, nonatomic) UIButton *voiceIconButton; // @synthesize voiceIconButton=_voiceIconButton;
@property(nonatomic) _Bool isShowVoiceIcon; // @synthesize isShowVoiceIcon=_isShowVoiceIcon;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(retain, nonatomic) UIImage *searchIconImage; // @synthesize searchIconImage=_searchIconImage;
@property(nonatomic) __weak id <AUSearchTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onClickedVoiceIcon;
- (void)onClicked;
- (void)createVoiceIconButton;
- (void)removeSearchIconImageViewFromSuperView;
- (void)createSearchIconImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 searchStyle:(long long)arg2;
- (id)initWithSearchStyle:(long long)arg1;

@end

