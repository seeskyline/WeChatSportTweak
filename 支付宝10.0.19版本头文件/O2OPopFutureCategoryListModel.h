//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMistModel.h"

@class MOBILECSARqySearchFutureListResponse, MOBILECSARqySearchFutureRequest, O2OPageMenuItem;

@interface O2OPopFutureCategoryListModel : O2OMistModel
{
    _Bool _downGradeFlag;
    _Bool _isFirstRequest;
    MOBILECSARqySearchFutureRequest *_categoryRequest;
    MOBILECSARqySearchFutureListResponse *_categoryResponse;
    O2OPageMenuItem *_pageMenuItem;
}

@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(nonatomic) __weak O2OPageMenuItem *pageMenuItem; // @synthesize pageMenuItem=_pageMenuItem;
@property(nonatomic) _Bool downGradeFlag; // @synthesize downGradeFlag=_downGradeFlag;
@property(retain, nonatomic) MOBILECSARqySearchFutureListResponse *categoryResponse; // @synthesize categoryResponse=_categoryResponse;
@property(retain, nonatomic) MOBILECSARqySearchFutureRequest *categoryRequest; // @synthesize categoryRequest=_categoryRequest;
- (void).cxx_destruct;
- (id)operationType;
- (_Bool)shouldDowngrade;
- (id)templateConfig;
- (id)responseObjects:(id)arg1;
- (_Bool)isPBResponse;
- (_Bool)raise1002Exception;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)initWithViewController:(id)arg1;

@end

