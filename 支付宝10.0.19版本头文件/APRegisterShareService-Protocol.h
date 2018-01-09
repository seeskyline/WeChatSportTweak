//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class APMediaMessage, APSendMessageToAPReq, APShareExtInfo, NSDictionary, NSError, NSMutableDictionary, NSString, UIViewController;

@protocol APRegisterShareService <DTService>
- (NSError *)sendTimeLineFeed:(NSDictionary *)arg1 extendInfo:(NSDictionary *)arg2;
- (void)shareToCircle:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 infoDic:(NSDictionary *)arg3 channel:(NSString *)arg4 jumpToCircle:(_Bool)arg5 superVC:(UIViewController *)arg6 callback:(void (^)(long long, NSString *, NSString *, NSString *))arg7 commonPreJudge:(_Bool)arg8;
- (void)shareToTimeLine:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 jumpToTimeLine:(_Bool)arg4 superVC:(UIViewController *)arg5 callback:(void (^)(long long, NSString *, NSString *, NSString *))arg6;
- (NSMutableDictionary *)extractDicFromMsg:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2;
- (void)shareMsg:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 tUserId:(NSString *)arg4 tUserType:(NSString *)arg5 addMessage:(NSString *)arg6 callback:(void (^)(NSError *))arg7;
- (void)shareMsg:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 tUserId:(NSString *)arg4 tUserType:(NSString *)arg5 addMessage:(NSString *)arg6 extSend:(NSString *)arg7 callback:(void (^)(NSError *))arg8;
- (void)shareMsgWithoutPickContact:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 hasTextField:(_Bool)arg4 tUserId:(NSString *)arg5 tUserType:(NSString *)arg6 callback:(void (^)(long long, NSString *, NSString *, NSString *))arg7;
- (void)shareMsgToMultiContactWithoutSend:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 showStranger:(_Bool)arg4 jumpToChat:(_Bool)arg5 superVC:(UIViewController *)arg6 callback:(void (^)(long long, NSString *, NSArray *, int, _Bool, _Bool))arg7;
- (void)shareMsgToMultiContact:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 showStranger:(_Bool)arg4 jumpToChat:(_Bool)arg5 superVC:(UIViewController *)arg6 callback:(void (^)(long long, NSString *, NSString *, NSString *))arg7;
- (void)shareMsgToStrangeGroupWithoutSend:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 jumpToChat:(_Bool)arg4 superVC:(UIViewController *)arg5 callback:(void (^)(long long, NSString *, NSArray *, int, _Bool, _Bool))arg6;
- (void)shareMsgToStrangeGroup:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 jumpToChat:(_Bool)arg4 superVC:(UIViewController *)arg5 callback:(void (^)(long long, NSString *, NSString *, NSString *))arg6;
- (void)shareMsgWithoutSend:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 jumpToChat:(_Bool)arg4 superVC:(UIViewController *)arg5 callback:(void (^)(long long, NSString *, NSArray *, int, _Bool, _Bool))arg6;
- (void)shareMsg:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 jumpToChat:(_Bool)arg4 superVC:(UIViewController *)arg5 callback:(void (^)(long long, NSString *, NSString *, NSString *))arg6;
- (void)shareUnion:(APMediaMessage *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 superVC:(UIViewController *)arg4 callback:(void (^)(long long, NSString *, NSString *, NSString *))arg5;
- (void)shareRequset:(APSendMessageToAPReq *)arg1 extInfo:(APShareExtInfo *)arg2 channel:(NSString *)arg3 callback:(void (^)(long long, NSString *, NSString *, NSString *))arg4;
@end

