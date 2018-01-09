//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface EMJStickerRenderParams : NSObject
{
    UIImage *_faceImage;
    UIImage *_lowerBodyImage;
    UIImage *_bodyImage;
    struct CGSize _canvasSize;
    struct AKQuad _faceQuad;
}

@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(nonatomic) struct AKQuad faceQuad; // @synthesize faceQuad=_faceQuad;
@property(retain, nonatomic) UIImage *bodyImage; // @synthesize bodyImage=_bodyImage;
@property(retain, nonatomic) UIImage *lowerBodyImage; // @synthesize lowerBodyImage=_lowerBodyImage;
@property(retain, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
- (void).cxx_destruct;

@end

