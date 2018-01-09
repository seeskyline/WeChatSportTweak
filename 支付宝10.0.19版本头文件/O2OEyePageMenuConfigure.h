//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface O2OEyePageMenuConfigure : NSObject
{
    _Bool _animatable;
    unsigned long long _menuState;
    double _titleComplexNormalSize;
    double _titleComplexSelectedSize;
    double _subTitleComplexNormalSize;
    double _subTitleComplexSelectedSize;
    UIColor *_titleComplexSelectedColor;
    UIColor *_titleComplexNormalColor;
    UIColor *_titleSimpleSelectedColor;
    UIColor *_titleSimpleNormalColor;
    UIColor *_subTitleComplexNormalColor;
    UIColor *_subTitleComplexSelectedColor;
    double _titleSimpleNormalSize;
    double _titleSimpleSelectedSize;
    UIColor *_contentComplexNormalBackgroundColor;
    UIColor *_contentComplexSelectedBackgroundColor;
    UIColor *_contentSimpleNormalBackgroundColor;
    UIColor *_contentSimpleSelectedBackgroundColor;
    UIColor *_menuBackgroundColor;
    UIColor *_menuOnlyOneBackgroundColor;
    UIColor *_menuContentViewBackgroundColor;
    UIColor *_menuProgressColor;
    double _menuContentViewMargin;
    double _menuMinHeight;
    NSString *_spm;
    double _menuMaxHeight;
    unsigned long long _indexOfTab;
}

@property(nonatomic) unsigned long long indexOfTab; // @synthesize indexOfTab=_indexOfTab;
@property(nonatomic) double menuMaxHeight; // @synthesize menuMaxHeight=_menuMaxHeight;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(nonatomic) double menuMinHeight; // @synthesize menuMinHeight=_menuMinHeight;
@property(nonatomic) double menuContentViewMargin; // @synthesize menuContentViewMargin=_menuContentViewMargin;
@property(retain, nonatomic) UIColor *menuProgressColor; // @synthesize menuProgressColor=_menuProgressColor;
@property(retain, nonatomic) UIColor *menuContentViewBackgroundColor; // @synthesize menuContentViewBackgroundColor=_menuContentViewBackgroundColor;
@property(retain, nonatomic) UIColor *menuOnlyOneBackgroundColor; // @synthesize menuOnlyOneBackgroundColor=_menuOnlyOneBackgroundColor;
@property(retain, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
@property(retain, nonatomic) UIColor *contentSimpleSelectedBackgroundColor; // @synthesize contentSimpleSelectedBackgroundColor=_contentSimpleSelectedBackgroundColor;
@property(retain, nonatomic) UIColor *contentSimpleNormalBackgroundColor; // @synthesize contentSimpleNormalBackgroundColor=_contentSimpleNormalBackgroundColor;
@property(retain, nonatomic) UIColor *contentComplexSelectedBackgroundColor; // @synthesize contentComplexSelectedBackgroundColor=_contentComplexSelectedBackgroundColor;
@property(retain, nonatomic) UIColor *contentComplexNormalBackgroundColor; // @synthesize contentComplexNormalBackgroundColor=_contentComplexNormalBackgroundColor;
@property(nonatomic) double titleSimpleSelectedSize; // @synthesize titleSimpleSelectedSize=_titleSimpleSelectedSize;
@property(nonatomic) double titleSimpleNormalSize; // @synthesize titleSimpleNormalSize=_titleSimpleNormalSize;
@property(retain, nonatomic) UIColor *subTitleComplexSelectedColor; // @synthesize subTitleComplexSelectedColor=_subTitleComplexSelectedColor;
@property(retain, nonatomic) UIColor *subTitleComplexNormalColor; // @synthesize subTitleComplexNormalColor=_subTitleComplexNormalColor;
@property(retain, nonatomic) UIColor *titleSimpleNormalColor; // @synthesize titleSimpleNormalColor=_titleSimpleNormalColor;
@property(retain, nonatomic) UIColor *titleSimpleSelectedColor; // @synthesize titleSimpleSelectedColor=_titleSimpleSelectedColor;
@property(retain, nonatomic) UIColor *titleComplexNormalColor; // @synthesize titleComplexNormalColor=_titleComplexNormalColor;
@property(retain, nonatomic) UIColor *titleComplexSelectedColor; // @synthesize titleComplexSelectedColor=_titleComplexSelectedColor;
@property(nonatomic) double subTitleComplexSelectedSize; // @synthesize subTitleComplexSelectedSize=_subTitleComplexSelectedSize;
@property(nonatomic) double subTitleComplexNormalSize; // @synthesize subTitleComplexNormalSize=_subTitleComplexNormalSize;
@property(nonatomic) double titleComplexSelectedSize; // @synthesize titleComplexSelectedSize=_titleComplexSelectedSize;
@property(nonatomic) double titleComplexNormalSize; // @synthesize titleComplexNormalSize=_titleComplexNormalSize;
@property(nonatomic) unsigned long long menuState; // @synthesize menuState=_menuState;
@property(nonatomic) _Bool animatable; // @synthesize animatable=_animatable;
- (void).cxx_destruct;
- (void)initMenuBackgroundColorAndSize;
- (void)initTextColorAndSize;
- (void)initSpaceWithCount:(unsigned long long)arg1;
- (id)initWithMenuCount:(unsigned long long)arg1;
- (id)init;

@end

