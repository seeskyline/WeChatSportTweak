//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSString;

@interface GO2OTitleBtnInfo : GO2OServiceObject
{
    NSString *_type;
    NSString *_normalImageUrl;
    NSString *_pressedImageUrl;
    NSString *_translucentImgUrl;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *translucentImgUrl; // @synthesize translucentImgUrl=_translucentImgUrl;
@property(copy, nonatomic) NSString *pressedImageUrl; // @synthesize pressedImageUrl=_pressedImageUrl;
@property(copy, nonatomic) NSString *normalImageUrl; // @synthesize normalImageUrl=_normalImageUrl;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

