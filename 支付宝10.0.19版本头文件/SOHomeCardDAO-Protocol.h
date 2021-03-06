//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, NSArray, NSNumber, NSString;

@protocol SOHomeCardDAO <APDAOProtocol>
- (NSArray *)daoSelectValidCardListWithLimit:(NSNumber *)arg1;
- (NSNumber *)daoSelectAllValidCardCount;
- (NSArray *)daoSelectTopCardList;
- (NSArray *)daoSelectCardListWithBizNos:(NSArray *)arg1 bizTypes:(NSArray *)arg2 sceneCodes:(NSArray *)arg3;
- (APDAOResult *)daoUpdateCardTemplateData:(NSString *)arg1 clientId:(NSString *)arg2;
- (APDAOResult *)daoUpdateCardList:(NSArray *)arg1;
- (NSArray *)daoSelectAllLocalCard;
- (NSArray *)daoSelectAllInvalidCard;
- (APDAOResult *)daoCleanAllCard;
- (NSArray *)daoSelectCardWithCardIdList:(NSArray *)arg1;
- (NSArray *)daoSelectCardWithClientIdList:(NSArray *)arg1;
- (NSArray *)daoSelectAllCard;
- (APDAOResult *)daoDeleteCardWithClientIdList:(NSArray *)arg1;
- (APDAOResult *)daoInsertCardList:(NSArray *)arg1;
@end

