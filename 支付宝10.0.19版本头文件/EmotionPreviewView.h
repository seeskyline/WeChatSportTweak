//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EmotionShowView, UIImageView, UILabel;

@interface EmotionPreviewView : UIView
{
    int _previewType;
    UIImageView *_baseBackgroudView;
    UIImageView *_baseEmotionView;
    UILabel *_baseEmotionDesLabel;
    UIImageView *_bigBackgroudView;
    EmotionShowView *_emotionShowView;
}

@property(retain, nonatomic) EmotionShowView *emotionShowView; // @synthesize emotionShowView=_emotionShowView;
@property(retain, nonatomic) UIImageView *bigBackgroudView; // @synthesize bigBackgroudView=_bigBackgroudView;
@property(retain, nonatomic) UILabel *baseEmotionDesLabel; // @synthesize baseEmotionDesLabel=_baseEmotionDesLabel;
@property(retain, nonatomic) UIImageView *baseEmotionView; // @synthesize baseEmotionView=_baseEmotionView;
@property(retain, nonatomic) UIImageView *baseBackgroudView; // @synthesize baseBackgroudView=_baseBackgroudView;
@property(nonatomic) int previewType; // @synthesize previewType=_previewType;
- (void).cxx_destruct;
- (void)setPreviewFrame:(struct CGRect)arg1;
- (void)showPreviewView:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3;
- (void)setBackgroudViewType:(int)arg1;
- (void)initViews;
- (int)getPreviewType:(struct CGRect)arg1 emotion:(id)arg2;
- (id)init;

@end

