//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUTHORIZEMobileSecurityResult.h"

@class NSArray, NSString;

@interface AUTHORIZEQueryApproveRecordRes : AUTHORIZEMobileSecurityResult
{
    NSArray *_recordList;
    NSString *_maxId;
}

+ (Class)recordListElementClass;
@property(retain, nonatomic) NSString *maxId; // @synthesize maxId=_maxId;
@property(retain, nonatomic) NSArray *recordList; // @synthesize recordList=_recordList;
- (void).cxx_destruct;

@end

