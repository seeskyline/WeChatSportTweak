//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface WAResultCell : UIView
{
    _Bool _isHighlight;
    _Bool _showLineView;
    UIImageView *_iconImage;
    UIView *_firstLineView;
    UIView *_lastLineView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

+ (double)heightOfResultCell;
@property(nonatomic) _Bool showLineView; // @synthesize showLineView=_showLineView;
@property(nonatomic) _Bool isHighlight; // @synthesize isHighlight=_isHighlight;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *lastLineView; // @synthesize lastLineView=_lastLineView;
@property(retain, nonatomic) UIView *firstLineView; // @synthesize firstLineView=_firstLineView;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)buildSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

