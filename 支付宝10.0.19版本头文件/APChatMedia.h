//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface APChatMedia : NSObject
{
    _Bool _unread;
    _Bool _showBG;
    _Bool _isAutoPlay;
    _Bool _isNextPlay;
    int _type;
    int _status;
    NSString *_url;
    NSData *_data;
    double _duration;
    double _playingProgress;
    double _totalBytes;
    double _downloadingProgress;
    double _scale;
}

@property(nonatomic) _Bool isNextPlay; // @synthesize isNextPlay=_isNextPlay;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) _Bool showBG; // @synthesize showBG=_showBG;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool unread; // @synthesize unread=_unread;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double downloadingProgress; // @synthesize downloadingProgress=_downloadingProgress;
@property(nonatomic) double totalBytes; // @synthesize totalBytes=_totalBytes;
@property(nonatomic) double playingProgress; // @synthesize playingProgress=_playingProgress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

