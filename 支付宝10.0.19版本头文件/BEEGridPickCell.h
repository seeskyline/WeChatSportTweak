//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class BEEAsset, BEEPhotoCheckButton, BEEVideoLabelView, UIImage, UIImageView, UILabel;

@interface BEEGridPickCell : UICollectionViewCell
{
    UILabel *_gifLabel;
    BEEVideoLabelView *_videoView;
    BEEPhotoCheckButton *_checkButton;
    _Bool _hasSetVoiceOver;
    UIImageView *_maskView;
    _Bool _isSelected;
    id <BEEGridPickCellDelegate> _delegate;
    BEEAsset *_beeAsset;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) BEEAsset *beeAsset; // @synthesize beeAsset=_beeAsset;
@property(nonatomic) __weak id <BEEGridPickCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setVoiceOverWithForce:(_Bool)arg1;
- (_Bool)shouldTapWithKey:(id)arg1;
- (void)clickCheckButton;
- (void)setIndex:(unsigned long long)arg1 animation:(_Bool)arg2;
- (void)setSelection:(_Bool)arg1 animation:(_Bool)arg2;
- (void)showMaskWithKey:(id)arg1;
- (id)gifLabel;
- (id)videoLabelView;
- (void)setBeeAsset:(id)arg1 selectWithIndex:(unsigned long long)arg2;
- (void)setBeeAsset:(id)arg1 withSelection:(_Bool)arg2;
@property(retain, nonatomic) UIImage *thumbnailImage;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

