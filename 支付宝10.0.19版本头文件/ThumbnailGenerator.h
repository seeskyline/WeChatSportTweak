//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ThumbnailGenerator : NSObject
{
}

+ (void)generateThumbnailsFromAVAsset:(id)arg1 startPoint:(double)arg2 endPoint:(double)arg3 count:(unsigned long long)arg4 size:(struct CGSize)arg5 completeHandler:(CDUnknownBlockType)arg6;
+ (void)thumbnailFromVideoURL:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
+ (void)thumbnailFromVideoPath:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;

@end

