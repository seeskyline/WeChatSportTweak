//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class NSArray, NSMutableArray, NSString, SAUserInfo;

@protocol SAAccountService <DTService>
@property(readonly, nonatomic) NSString *desensityLoginID;
@property(readonly, nonatomic) NSString *desensityPhoneNumber;
@property(retain, nonatomic) NSString *lastUserId;
@property(readonly, nonatomic) NSMutableArray *accountList;
@property(readonly, nonatomic) SAUserInfo *userInfo;
- (NSString *)hideRule:(NSString *)arg1;
- (void)saveAccount;
- (void)resetCurrentAccount;
- (_Bool)updateAllAccounts:(NSArray *)arg1;
- (void)addAccountWithSAUserInfoInArray:(NSArray *)arg1;
- (void)addAccountWithMSUserFlagEntityInArray:(NSArray *)arg1;
- (NSArray *)accountsWithLoginType:(unsigned long long)arg1 returnNumber:(int)arg2;
- (NSArray *)accountsWithLoginType:(unsigned long long)arg1;
- (NSArray *)allAccount;
- (NSArray *)allAccountName;
- (SAUserInfo *)findUserByUserId:(NSString *)arg1;
- (SAUserInfo *)findUserByLoginId:(NSString *)arg1;
- (_Bool)updateAccountInfo:(SAUserInfo *)arg1;
- (_Bool)addAccountWithUserInfo:(SAUserInfo *)arg1;
- (void)deleteTaobaoAccountWithLoginId:(NSString *)arg1;
- (_Bool)deleteAccountWithName:(NSString *)arg1;
- (SAUserInfo *)createNewUserWithUserId:(NSString *)arg1 loginId:(NSString *)arg2;
- (_Bool)isValidUser:(SAUserInfo *)arg1;
- (_Bool)setCurrentUser:(SAUserInfo *)arg1;
@end

