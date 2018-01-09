//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SSCDPSpaceObjectInfo : NSObject
{
    _Bool _preload;
    _Bool _clickRealtimeReport;
    _Bool _showRealtimeReport;
    int _priority;
    NSString *_objectId;
    NSString *_contentType;
    NSArray *_behaviors;
    NSString *_widgetId;
    NSString *_resVersion;
    NSString *_content;
    NSString *_hrefUrl;
    NSString *_shortImgUrl;
    NSString *_actionUrl;
    long long _gmtStart;
    long long _gmtEnd;
    NSString *_fgColor;
    NSString *_bgColor;
    NSString *_textColor;
    NSString *_widgetColor;
    NSString *_md5;
    NSString *_userId;
    NSString *_mrpRuleId;
}

+ (Class)behaviorsElementClass;
@property(retain, nonatomic) NSString *mrpRuleId; // @synthesize mrpRuleId=_mrpRuleId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) _Bool showRealtimeReport; // @synthesize showRealtimeReport=_showRealtimeReport;
@property(nonatomic) _Bool clickRealtimeReport; // @synthesize clickRealtimeReport=_clickRealtimeReport;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *widgetColor; // @synthesize widgetColor=_widgetColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSString *fgColor; // @synthesize fgColor=_fgColor;
@property(nonatomic) long long gmtEnd; // @synthesize gmtEnd=_gmtEnd;
@property(nonatomic) long long gmtStart; // @synthesize gmtStart=_gmtStart;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *shortImgUrl; // @synthesize shortImgUrl=_shortImgUrl;
@property(retain, nonatomic) NSString *hrefUrl; // @synthesize hrefUrl=_hrefUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool preload; // @synthesize preload=_preload;
@property(retain, nonatomic) NSString *resVersion; // @synthesize resVersion=_resVersion;
@property(retain, nonatomic) NSString *widgetId; // @synthesize widgetId=_widgetId;
@property(retain, nonatomic) NSArray *behaviors; // @synthesize behaviors=_behaviors;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;

@end

