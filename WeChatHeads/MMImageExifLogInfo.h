//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMImageExifLogInfo : NSObject
{
    NSString *_localID;
    unsigned long long _mediaType;
    unsigned long long _originWidth;
    unsigned long long _originHeight;
    unsigned long long _compressedWidth;
    unsigned long long _compressedHeight;
    unsigned long long _originSize;
    unsigned long long _compressedSize;
    NSString *_fNumber;
    NSString *_exposureTime;
    unsigned long long _iso;
    unsigned long long _flash;
    NSString *_lensModel;
    NSString *_creatTime;
    unsigned long long _isFromWeChat;
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long isFromWeChat; // @synthesize isFromWeChat=_isFromWeChat;
@property(copy, nonatomic) NSString *creatTime; // @synthesize creatTime=_creatTime;
@property(copy, nonatomic) NSString *lensModel; // @synthesize lensModel=_lensModel;
@property(nonatomic) unsigned long long flash; // @synthesize flash=_flash;
@property(nonatomic) unsigned long long iso; // @synthesize iso=_iso;
@property(copy, nonatomic) NSString *exposureTime; // @synthesize exposureTime=_exposureTime;
@property(copy, nonatomic) NSString *fNumber; // @synthesize fNumber=_fNumber;
@property(nonatomic) unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property(nonatomic) unsigned long long originSize; // @synthesize originSize=_originSize;
@property(nonatomic) unsigned long long compressedHeight; // @synthesize compressedHeight=_compressedHeight;
@property(nonatomic) unsigned long long compressedWidth; // @synthesize compressedWidth=_compressedWidth;
@property(nonatomic) unsigned long long originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) unsigned long long originWidth; // @synthesize originWidth=_originWidth;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *localID; // @synthesize localID=_localID;
- (void).cxx_destruct;
- (void)updateForWechatSight;
- (void)report;

@end

