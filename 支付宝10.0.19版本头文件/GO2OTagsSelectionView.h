//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GO2OTagsView, UIButton, UIScrollView;

@interface GO2OTagsSelectionView : UIView
{
    double _calculatedHeight;
    id <GO2OTagsSelectionDelegate> _delegate;
    UIScrollView *_scrollView;
    GO2OTagsView *_tagsView;
    UIView *_bottomView;
    UIButton *_clearButton;
    UIButton *_okButton;
}

@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) GO2OTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <GO2OTagsSelectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double calculatedHeight; // @synthesize calculatedHeight=_calculatedHeight;
- (void).cxx_destruct;
- (void)ok:(id)arg1;
- (void)clear:(id)arg1;
- (void)layoutSubviews;
- (void)setTags:(id)arg1;
- (id)createBottomView;
- (id)init;

@end

