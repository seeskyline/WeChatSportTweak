//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface APSHOPCENTERPromoPageRequest : NSObject
{
    NSString *_systemType;
    NSString *_templateType;
    NSString *_templateParams;
    NSDictionary *_blockMd5s;
    NSString *_areaCode;
    NSString *_areaType;
    NSString *_category;
    NSString *_labels;
    double _latitude;
    double _longitude;
    NSString *_chInfo;
}

+ (Class)blockMd5sElementClass;
@property(retain, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *areaType; // @synthesize areaType=_areaType;
@property(retain, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
@property(retain, nonatomic) NSDictionary *blockMd5s; // @synthesize blockMd5s=_blockMd5s;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
- (void).cxx_destruct;

@end

