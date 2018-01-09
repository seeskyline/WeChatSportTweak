//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALPBasePassListModel.h"

@class NSString;

@interface ALPComPassListModel : ALPBasePassListModel
{
    _Bool _hasCacheData;
    _Bool _isLoading;
    _Bool _hasMoreInternal;
    NSString *_groupType;
    NSString *_partnerId;
    long long _pageNumber;
}

@property(nonatomic) _Bool hasMoreInternal; // @synthesize hasMoreInternal=_hasMoreInternal;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasCacheData; // @synthesize hasCacheData=_hasCacheData;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didFinishLoading;
- (void)reload;
- (id)operationType;
- (id)createPassListCommon:(id)arg1;
- (id)responseObjects:(id)arg1;
- (_Bool)hasNSArrayItem:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (_Bool)raise1002Exception;
- (_Bool)isPBResponse;
- (struct requestConfig)requestConfig;
- (id)detailSeedIDWithItem:(id)arg1;
- (id)seedIdForInvalidItem;
- (id)seedIdForPage;
- (int)actionTypeWithItem:(id)arg1;
- (_Bool)hasMore;
- (id)initWithViewController:(id)arg1;

@end

