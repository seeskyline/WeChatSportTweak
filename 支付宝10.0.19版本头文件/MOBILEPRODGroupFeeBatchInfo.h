//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface MOBILEPRODGroupFeeBatchInfo : NSObject
{
    int _successCount;
    NSString *_batchNo;
    NSString *_createUserId;
    NSString *_singleAmount;
    NSString *_payAmount;
    NSString *_memo;
    NSDate *_createDate;
}

@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(nonatomic) int successCount; // @synthesize successCount=_successCount;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
@property(retain, nonatomic) NSString *singleAmount; // @synthesize singleAmount=_singleAmount;
@property(retain, nonatomic) NSString *createUserId; // @synthesize createUserId=_createUserId;
@property(retain, nonatomic) NSString *batchNo; // @synthesize batchNo=_batchNo;
- (void).cxx_destruct;

@end

