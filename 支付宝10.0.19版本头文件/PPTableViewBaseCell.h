//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface PPTableViewBaseCell : UITableViewCell
{
    double _marginX;
    UIImageView *_logoImageView;
    UIImage *_defaultImage;
    NSString *_imageUrl;
    struct CGSize _logoSize;
    double _logoRadius;
    UILabel *_titleLabel;
    double _titleRightOffsetX;
    UILabel *_detailTitleLabel;
    double _detailRightOffsetX;
    UIView *_footLine;
    double _footLineMargin;
}

- (void).cxx_destruct;
- (void)setLogoImageUrl:(id)arg1 defaultImage:(id)arg2;
- (void)setDetailTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)reset;
- (void)config;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

