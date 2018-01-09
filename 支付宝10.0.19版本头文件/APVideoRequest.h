//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBaseDownloadRequest.h"

@class NSString;

@interface APVideoRequest : APBaseDownloadRequest
{
    NSString *_imageMd5;
    NSString *_videoMd5;
    CDUnknownBlockType _processBlock;
    CDUnknownBlockType _downloadReuestCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType downloadReuestCompletion; // @synthesize downloadReuestCompletion=_downloadReuestCompletion;
@property(copy, nonatomic) CDUnknownBlockType processBlock; // @synthesize processBlock=_processBlock;
@property(copy, nonatomic) NSString *videoMd5; // @synthesize videoMd5=_videoMd5;
@property(copy, nonatomic) NSString *imageMd5; // @synthesize imageMd5=_imageMd5;
- (void).cxx_destruct;
- (id)init;

@end

