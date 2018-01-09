//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface APChatRoomLabelView : UIView
{
    _Bool _forceHideGenderView;
    _Bool _autoLayout;
    UIImageView *_genderImageView;
    UILabel *_labelContent;
    unsigned long long _deviceScreen;
}

@property(nonatomic) unsigned long long deviceScreen; // @synthesize deviceScreen=_deviceScreen;
@property(retain, nonatomic) UILabel *labelContent; // @synthesize labelContent=_labelContent;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(nonatomic) _Bool autoLayout; // @synthesize autoLayout=_autoLayout;
@property(nonatomic) _Bool forceHideGenderView; // @synthesize forceHideGenderView=_forceHideGenderView;
- (void).cxx_destruct;
- (void)configureLabelView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setUpUI;
- (void)dealloc;

@end

