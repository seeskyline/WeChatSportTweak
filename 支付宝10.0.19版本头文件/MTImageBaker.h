//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MTImageBaker : NSObject
{
    NSMutableDictionary *_imgToCache;
    NSMutableDictionary *_imgCache;
    NSMutableDictionary *_imgInfos;
    int _toMapIndex;
    char *_imgMapBase[10];
    long long _imgMapLen[10];
    long long _pageSize;
}

+ (id)sharedInstance;
+ (void)markBakeEndPoint;
+ (void)doBakeImages;
+ (void)doHookImages;
- (void).cxx_destruct;
- (void)saveHotImgsAndInfos;
- (void)recordHotImg:(id)arg1 img:(id)arg2;
- (void)saveHotImgsWithMapIndex:(int)arg1 infosContainer:(id)arg2;
- (id)hotImg:(id)arg1;
- (char *)mapFile:(int)arg1 returnMapLen:(long long *)arg2;
- (void)recordHotImgInfo:(id)arg1 name:(id)arg2 mapIndex:(int)arg3 imgIndex:(int)arg4 width:(double)arg5 height:(double)arg6;
- (_Bool)hotImgInfo:(id)arg1 returnMapIndex:(int *)arg2 returnImgIndex:(int *)arg3 returnWidth:(double *)arg4 returnHight:(double *)arg5;
- (void)loadHotImgInfos;
- (void)saveHotImgInfos:(id)arg1;
- (id)imgMapPathName:(int)arg1;
- (id)imgMetadataPathName;
- (void)delCacheDir;
- (void)makeCacheDir;
- (void)checkAppVersionChanged;
- (id)init;

@end

