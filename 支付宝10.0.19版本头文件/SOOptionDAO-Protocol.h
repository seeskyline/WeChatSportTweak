//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, NSArray, NSNumber, NSString;

@protocol SOOptionDAO <APDAOProtocol>
- (NSArray *)daoSelectOptionDESCWithTypeList:(NSArray *)arg1 bizNo:(NSString *)arg2 cardBizType:(NSString *)arg3 cardSceneCode:(NSString *)arg4 limit:(NSNumber *)arg5;
- (NSArray *)daoSelectOptionWithTypeList:(NSArray *)arg1 bizNo:(NSString *)arg2 cardBizType:(NSString *)arg3 cardSceneCode:(NSString *)arg4 limit:(NSNumber *)arg5;
- (NSNumber *)daoCountOptionWithBizNo:(NSString *)arg1 cardBizType:(NSString *)arg2 cardSceneCode:(NSString *)arg3 type:(NSString *)arg4;
- (APDAOResult *)daoDeleteOptionWithBizNo:(NSString *)arg1 cardBizType:(NSString *)arg2 cardSceneCode:(NSString *)arg3 type:(NSString *)arg4 userId:(NSString *)arg5;
- (NSArray *)daoSelectOptionWithBizNo:(NSString *)arg1 cardBizType:(NSString *)arg2 cardSceneCode:(NSString *)arg3 type:(NSString *)arg4 userId:(NSString *)arg5;
- (APDAOResult *)daoCleanAllOptionWithBizNo:(NSString *)arg1 cardBizType:(NSString *)arg2 cardSceneCode:(NSString *)arg3;
- (NSArray *)daoSelectAllLocalOptionWithBizNo:(NSString *)arg1 cardBizType:(NSString *)arg2 cardSceneCode:(NSString *)arg3 type:(NSString *)arg4;
- (NSArray *)daoSelectOptionWithClientIdList:(NSArray *)arg1;
- (APDAOResult *)daoDeleteOptionWithClientIdList:(NSArray *)arg1;
- (APDAOResult *)daoInsertOptionList:(NSArray *)arg1;
@end

