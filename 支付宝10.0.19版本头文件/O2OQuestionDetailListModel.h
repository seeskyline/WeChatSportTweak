//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSArray, NSString, O2OMistListItem, UITableView, UIViewController;

@interface O2OQuestionDetailListModel : O2OMistModel
{
    _Bool _hasMore;
    _Bool _isReloadResult;
    _Bool _isMyQuestion;
    _Bool _notExistOrAvailable;
    _Bool _responseHasMore;
    int _hasShowNumber;
    UIViewController *_vc;
    UITableView *_tableView;
    NSString *_questionId;
    NSArray *_tableItems;
    O2OMistListItem *_headerItem;
    O2OMistListItem *_lastItem;
}

@property(nonatomic) _Bool responseHasMore; // @synthesize responseHasMore=_responseHasMore;
@property(retain, nonatomic) O2OMistListItem *lastItem; // @synthesize lastItem=_lastItem;
@property(nonatomic) int hasShowNumber; // @synthesize hasShowNumber=_hasShowNumber;
@property(nonatomic) _Bool notExistOrAvailable; // @synthesize notExistOrAvailable=_notExistOrAvailable;
@property(nonatomic) _Bool isMyQuestion; // @synthesize isMyQuestion=_isMyQuestion;
@property(nonatomic) _Bool isReloadResult; // @synthesize isReloadResult=_isReloadResult;
@property(retain, nonatomic) O2OMistListItem *headerItem; // @synthesize headerItem=_headerItem;
@property(retain, nonatomic) NSArray *tableItems; // @synthesize tableItems=_tableItems;
@property(retain, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (_Bool)hasMore;
- (void).cxx_destruct;
- (void)handleHasMoreForData:(id)arg1;
- (id)responseObjects:(id)arg1;
- (_Bool)shouldDowngrade;
- (id)templateConfig;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (_Bool)raise1002Exception;
- (struct requestConfig)requestConfig;
- (id)cacheKey;
- (_Bool)loadMore;
- (void)load;
- (void)reload;
- (id)rpcRequest;

@end

