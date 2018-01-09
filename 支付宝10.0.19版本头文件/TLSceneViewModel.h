//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TLFeed, UIImage;

@interface TLSceneViewModel : NSObject
{
    int _type;
    NSString *_videoIdentifer;
    NSString *_readyImageId;
    TLFeed *_feed;
    UIImage *_readyImage;
    NSString *_downloadingVideoKey;
    NSString *_downloadingImageKey;
    struct CGSize _realSize;
}

@property(retain, nonatomic) NSString *downloadingImageKey; // @synthesize downloadingImageKey=_downloadingImageKey;
@property(retain, nonatomic) NSString *downloadingVideoKey; // @synthesize downloadingVideoKey=_downloadingVideoKey;
@property(retain, nonatomic) UIImage *readyImage; // @synthesize readyImage=_readyImage;
@property(readonly, nonatomic) TLFeed *feed; // @synthesize feed=_feed;
@property(nonatomic) struct CGSize realSize; // @synthesize realSize=_realSize;
@property(retain, nonatomic) NSString *readyImageId; // @synthesize readyImageId=_readyImageId;
@property(retain, nonatomic) NSString *videoIdentifer; // @synthesize videoIdentifer=_videoIdentifer;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithFeed:(id)arg1;

@end

