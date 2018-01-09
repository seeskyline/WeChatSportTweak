//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRANSFERPRODRPCResponse.h"

@class NSArray, NSDate, NSString;

@interface TRANSFERPRODBatchDetailInfoQueryResult : TRANSFERPRODRPCResponse
{
    NSString *_batchNo;
    NSString *_payAmountSingle;
    NSString *_payAmountTotal;
    NSString *_showitemsTotal;
    NSString *_realItemsTotal;
    NSString *_successAmountTotal;
    NSString *_successItemsTotal;
    NSString *_batchMemo;
    NSString *_batchStatus;
    NSArray *_detailList;
    NSString *_batchType;
    NSString *_timeOutValue;
    NSString *_createrUserId;
    NSString *_createrLoginId;
    NSString *_createUserName;
    NSString *_createUserHeadUrl;
    NSString *_token;
    NSDate *_createDate;
    NSString *_shareObjId;
    NSString *_shareObjType;
    long long _remainShareCount;
}

+ (Class)detailListElementClass;
@property(nonatomic) long long remainShareCount; // @synthesize remainShareCount=_remainShareCount;
@property(retain, nonatomic) NSString *shareObjType; // @synthesize shareObjType=_shareObjType;
@property(retain, nonatomic) NSString *shareObjId; // @synthesize shareObjId=_shareObjId;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *createUserHeadUrl; // @synthesize createUserHeadUrl=_createUserHeadUrl;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName=_createUserName;
@property(retain, nonatomic) NSString *createrLoginId; // @synthesize createrLoginId=_createrLoginId;
@property(retain, nonatomic) NSString *createrUserId; // @synthesize createrUserId=_createrUserId;
@property(retain, nonatomic) NSString *timeOutValue; // @synthesize timeOutValue=_timeOutValue;
@property(retain, nonatomic) NSString *batchType; // @synthesize batchType=_batchType;
@property(retain, nonatomic) NSArray *detailList; // @synthesize detailList=_detailList;
@property(retain, nonatomic) NSString *batchStatus; // @synthesize batchStatus=_batchStatus;
@property(retain, nonatomic) NSString *batchMemo; // @synthesize batchMemo=_batchMemo;
@property(retain, nonatomic) NSString *successItemsTotal; // @synthesize successItemsTotal=_successItemsTotal;
@property(retain, nonatomic) NSString *successAmountTotal; // @synthesize successAmountTotal=_successAmountTotal;
@property(retain, nonatomic) NSString *realItemsTotal; // @synthesize realItemsTotal=_realItemsTotal;
@property(retain, nonatomic) NSString *showitemsTotal; // @synthesize showitemsTotal=_showitemsTotal;
@property(retain, nonatomic) NSString *payAmountTotal; // @synthesize payAmountTotal=_payAmountTotal;
@property(retain, nonatomic) NSString *payAmountSingle; // @synthesize payAmountSingle=_payAmountSingle;
@property(retain, nonatomic) NSString *batchNo; // @synthesize batchNo=_batchNo;
- (void).cxx_destruct;

@end

