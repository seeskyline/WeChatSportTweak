//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface LFBaseView : UIView
{
    UIImageView *_avatarView;
    UIView *_titleView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_leftBracket;
    UILabel *_rightBracket;
}

@property(retain, nonatomic) UILabel *rightBracket; // @synthesize rightBracket=_rightBracket;
@property(retain, nonatomic) UILabel *leftBracket; // @synthesize leftBracket=_leftBracket;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (struct CGSize)getLabelWidth:(id)arg1 maxWidth:(double)arg2;
- (void)setTitleFrame;
- (void)setContentAvatar:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (struct CGRect)frameOfTitleView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

