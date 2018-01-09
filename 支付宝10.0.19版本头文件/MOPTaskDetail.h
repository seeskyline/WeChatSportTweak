//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MOPTaskParticipator, NSArray, NSDictionary, NSString;

@interface MOPTaskDetail : NSObject
{
    NSString *_taskId;
    NSString *_relatedOrderId;
    NSString *_taskType;
    NSString *_taskStatus;
    MOPTaskParticipator *_publisher;
    NSArray *_servers;
    NSString *_title;
    NSString *_detail;
    NSArray *_imgs;
    NSString *_price;
    NSString *_currency;
    NSString *_categoryId;
    NSString *_category;
    NSString *_partnerId;
    NSString *_createTime;
    NSString *_taskCountry;
    NSString *_taskCityCode;
    NSString *_taskCityName;
    NSString *_taskAddress;
    double _taskX;
    double _taskY;
    NSArray *_blackUserIds;
    NSString *_validityPeriod;
    NSDictionary *_extInfos;
}

+ (Class)extInfosElementClass;
+ (Class)blackUserIdsElementClass;
+ (Class)imgsElementClass;
+ (Class)serversElementClass;
@property(retain, nonatomic) NSDictionary *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) NSString *validityPeriod; // @synthesize validityPeriod=_validityPeriod;
@property(retain, nonatomic) NSArray *blackUserIds; // @synthesize blackUserIds=_blackUserIds;
@property(nonatomic) double taskY; // @synthesize taskY=_taskY;
@property(nonatomic) double taskX; // @synthesize taskX=_taskX;
@property(retain, nonatomic) NSString *taskAddress; // @synthesize taskAddress=_taskAddress;
@property(retain, nonatomic) NSString *taskCityName; // @synthesize taskCityName=_taskCityName;
@property(retain, nonatomic) NSString *taskCityCode; // @synthesize taskCityCode=_taskCityCode;
@property(retain, nonatomic) NSString *taskCountry; // @synthesize taskCountry=_taskCountry;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSArray *imgs; // @synthesize imgs=_imgs;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *servers; // @synthesize servers=_servers;
@property(retain, nonatomic) MOPTaskParticipator *publisher; // @synthesize publisher=_publisher;
@property(retain, nonatomic) NSString *taskStatus; // @synthesize taskStatus=_taskStatus;
@property(retain, nonatomic) NSString *taskType; // @synthesize taskType=_taskType;
@property(retain, nonatomic) NSString *relatedOrderId; // @synthesize relatedOrderId=_relatedOrderId;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;

@end

