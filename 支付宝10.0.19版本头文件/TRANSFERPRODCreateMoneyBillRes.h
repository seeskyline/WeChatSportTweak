//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PETRANSFERPRODRPCResponse.h"

@class NSString;

@interface TRANSFERPRODCreateMoneyBillRes : PETRANSFERPRODRPCResponse
{
    NSString *_tradeNo;
    NSString *_bizType;
    NSString *_bizSubType;
    NSString *_confirmCode;
    NSString *_followAction;
}

@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSString *confirmCode; // @synthesize confirmCode=_confirmCode;
@property(retain, nonatomic) NSString *bizSubType; // @synthesize bizSubType=_bizSubType;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;

@end

