//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSString;

@interface O2OItemInstanceModel : O2OHTTPModel
{
    _Bool _isMarket;
    NSString *_passId;
    NSString *_cityId;
    double _latitude;
    double _longitude;
    NSString *_partnerId;
    NSString *_serialNumber;
    NSString *_shareUserId;
    NSString *_shareHeadImg;
    NSString *_shareNickName;
}

@property(copy, nonatomic) NSString *shareNickName; // @synthesize shareNickName=_shareNickName;
@property(copy, nonatomic) NSString *shareHeadImg; // @synthesize shareHeadImg=_shareHeadImg;
@property(copy, nonatomic) NSString *shareUserId; // @synthesize shareUserId=_shareUserId;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(nonatomic) _Bool isMarket; // @synthesize isMarket=_isMarket;
- (void).cxx_destruct;
- (id)operationType;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)cacheKey;
- (_Bool)raise1002Exception;
- (_Bool)isPBResponse;
- (id)rpcRequest;
- (struct requestConfig)requestConfig;

@end

