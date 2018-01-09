//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOCard.h"

#import "NSCopying.h"

@class NSDate, NSDictionary, NSString;

@interface SOHomeCard : SOCard <NSCopying>
{
    _Bool _isTop;
    int _topPriority;
    int _groupType;
    int _cardIndex;
    NSString *_clientId;
    NSString *_cardId;
    NSDate *_createTime;
    NSString *_sceneCode;
    NSString *_bizNo;
    NSString *_bizType;
    double _topFromDate;
    double _topToDate;
    NSString *_templateCode;
    NSString *_templateData;
    NSString *_superClientId;
    NSString *_extend;
    NSDictionary *_templateDataInfo;
}

+ (id)SOHomeCardToCCardInCardDetail:(id)arg1;
+ (id)SOHomeCardList2SDKCardList:(id)arg1;
+ (id)SOHomeCard2SDKCard:(id)arg1;
@property(retain, nonatomic) NSDictionary *templateDataInfo; // @synthesize templateDataInfo=_templateDataInfo;
@property(copy, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(nonatomic) int cardIndex; // @synthesize cardIndex=_cardIndex;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(copy, nonatomic) NSString *superClientId; // @synthesize superClientId=_superClientId;
@property(copy, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(copy, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(nonatomic) int topPriority; // @synthesize topPriority=_topPriority;
@property(nonatomic) double topToDate; // @synthesize topToDate=_topToDate;
@property(nonatomic) double topFromDate; // @synthesize topFromDate=_topFromDate;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(copy, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)description;
- (void)updateTemplateData:(id)arg1;
- (_Bool)isValidCard;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (int)currentTopPriority;
- (double)currentTopToDate;
- (double)currentTopFromDate;
- (_Bool)currentIsTop;
- (id)currentExt;
- (id)currentCreateTime;
- (id)currentSceneCode;
- (id)currentBizType;
- (id)currentBizNo;
- (int)currentGroupType;
- (id)currentCardId;
- (id)currentClientId;
- (id)currentTemplateCode;
- (void)setCurrentTemplateData:(id)arg1;
- (id)currentTemplateData;
- (void)setCurrentTemplateDataInfo:(id)arg1;
- (id)currentTemplateDataInfo;

@end

