//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface O2OSearchResultMenuInfo : NSObject <NSCopying>
{
    _Bool _isSelected;
    int _count;
    NSString *_code;
    NSString *_name;
    NSString *_dname;
    NSArray *_icons;
    NSString *_iconNormal;
    NSString *_iconClicked;
    NSArray *_subMenuInfos;
    NSString *_style;
}

+ (id)parseRpcItem:(id)arg1;
+ (Class)subMenuInfosElementClass;
+ (Class)iconsElementClass;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *subMenuInfos; // @synthesize subMenuInfos=_subMenuInfos;
@property(retain, nonatomic) NSString *iconClicked; // @synthesize iconClicked=_iconClicked;
@property(retain, nonatomic) NSString *iconNormal; // @synthesize iconNormal=_iconNormal;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *dname; // @synthesize dname=_dname;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)selectedSubMenu;
- (_Bool)isHuiMenu;
- (long long)selectedIndex;

@end

