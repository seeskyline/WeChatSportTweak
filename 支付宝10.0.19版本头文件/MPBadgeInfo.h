//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSMutableArray, NSString;

@interface MPBadgeInfo : NSObject <NSCoding>
{
    NSMutableArray *_entries;
    NSArray *_widgetIds;
    NSString *_badgeId;
    NSString *_style;
    NSString *_bizId;
    NSString *_userId;
    unsigned long long _temporaryBadgeNumber;
    unsigned long long _persistentBadgeNumber;
}

+ (id)badgeInfoWithBadgeId:(id)arg1;
@property(nonatomic) unsigned long long persistentBadgeNumber; // @synthesize persistentBadgeNumber=_persistentBadgeNumber;
@property(nonatomic) unsigned long long temporaryBadgeNumber; // @synthesize temporaryBadgeNumber=_temporaryBadgeNumber;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *badgeId; // @synthesize badgeId=_badgeId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)allWidgetIds;
- (id)initWithWidgetIdString:(id)arg1;

@end

