//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MFFunnyImageSentReportReq : NSObject
{
    int _index;
    NSString *_requestType;
    NSString *_query;
    NSString *_md5;
    NSString *_isvId;
    NSString *_hitTag;
    NSString *_targetType;
    NSString *_targetId;
}

@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *targetType; // @synthesize targetType=_targetType;
@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *hitTag; // @synthesize hitTag=_hitTag;
@property(retain, nonatomic) NSString *isvId; // @synthesize isvId=_isvId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;

@end

