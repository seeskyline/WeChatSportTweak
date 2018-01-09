//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface INPhotoTextConfig : NSObject
{
    NSString *_textStr;
    UIColor *_textColor;
    double _fontSize;
    struct CGPoint _center;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *textStr; // @synthesize textStr=_textStr;
- (void).cxx_destruct;

@end

