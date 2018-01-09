//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class NSArray, NSString;

@interface MOBILECSAMarketingInfo : MOBILECSAToString
{
    _Bool _autoObtain;
    _Bool _hasUnused;
    _Bool _canUse;
    NSString *_mid;
    NSString *_icon;
    NSString *_image;
    NSString *_title;
    NSString *_subTitle;
    NSString *_slogan;
    NSArray *_descList;
    NSString *_url;
    NSString *_current;
    NSString *_original;
    MOBILECSAMarketingInfo *_discountReduce;
    NSString *_itemUnit;
    NSString *_itemType;
    NSString *_useDesc;
    NSString *_mainDesc;
    NSString *_useLimitDesc;
}

+ (Class)descListElementClass;
@property(retain, nonatomic) NSString *useLimitDesc; // @synthesize useLimitDesc=_useLimitDesc;
@property(retain, nonatomic) NSString *mainDesc; // @synthesize mainDesc=_mainDesc;
@property(retain, nonatomic) NSString *useDesc; // @synthesize useDesc=_useDesc;
@property(retain, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *itemUnit; // @synthesize itemUnit=_itemUnit;
@property(retain, nonatomic) MOBILECSAMarketingInfo *discountReduce; // @synthesize discountReduce=_discountReduce;
@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(nonatomic) _Bool hasUnused; // @synthesize hasUnused=_hasUnused;
@property(nonatomic) _Bool autoObtain; // @synthesize autoObtain=_autoObtain;
@property(retain, nonatomic) NSString *original; // @synthesize original=_original;
@property(retain, nonatomic) NSString *current; // @synthesize current=_current;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *descList; // @synthesize descList=_descList;
@property(retain, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;

@end

