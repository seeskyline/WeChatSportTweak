//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FalconARTools : NSObject
{
}

+ (_Bool)isAppActive;
+ (_Bool)checkARResourceFile:(id)arg1;
+ (_Bool)checkDevice:(id)arg1;
+ (id)getiPhoneModel;
+ (_Bool)IsiPod;
+ (_Bool)IsiPad;
+ (_Bool)IsIPhone;
+ (id)getVideoSessionPreset;
+ (char *)getDataFromImg:(id)arg1;
+ (id)imageFromSampleBuffer:(struct __CVBuffer *)arg1;
+ (id)convertRGBToUIImage:(char *)arg1 width:(int)arg2 height:(int)arg3 nchanel:(int)arg4;
+ (_Bool)regist3DMaterialPath:(id)arg1;
+ (id)compressImage:(id)arg1;
+ (_Bool)isIntelligentCompress:(id)arg1;
+ (id)getConpressConfig;
+ (unsigned long long)getLevelWithConfig:(int)arg1;
+ (void)compressImage:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end

