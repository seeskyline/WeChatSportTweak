//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImage;

@interface APMapCommonMapControl : UIButton
{
    _Bool _clickable;
    NSString *_identifier;
    UIImage *_icon;
}

@property(nonatomic) _Bool clickable; // @synthesize clickable=_clickable;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 andIcon:(id)arg2;

@end

