//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class AUIconView, NSString, UILabel;

@interface OSPTabBarItem : UIButton
{
    UILabel *_titleLabel;
    AUIconView *_imageView;
    AUIconView *_selectImageView;
    NSString *_imageName;
}

- (void).cxx_destruct;
- (void)setTitleColor:(id)arg1;
- (void)setSelected:(_Bool)arg1 titleColor:(id)arg2;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageName:(id)arg2;

@end

