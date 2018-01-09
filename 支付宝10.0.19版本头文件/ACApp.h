//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSearchDataProtocol.h"
#import "NSCopying.h"

@class ACAppBase, ACAppLayout, NSDictionary, NSString;

@interface ACApp : NSObject <NSCopying, APSearchDataProtocol>
{
    NSString *_bundleExtra;
    NSString *_stageSchemeUri;
    NSString *_cdpObjectId;
    NSString *_displayName;
    ACAppBase *_appBase;
    ACAppLayout *_appLayout;
}

+ (id)defaultIconForApp:(id)arg1 stageName:(id)arg2;
@property(retain, nonatomic) ACAppLayout *appLayout; // @synthesize appLayout=_appLayout;
@property(retain, nonatomic) ACAppBase *appBase; // @synthesize appBase=_appBase;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *cdpObjectId; // @synthesize cdpObjectId=_cdpObjectId;
@property(retain, nonatomic) NSString *stageSchemeUri; // @synthesize stageSchemeUri=_stageSchemeUri;
@property(retain, nonatomic) NSString *bundleExtra; // @synthesize bundleExtra=_bundleExtra;
- (void).cxx_destruct;
- (id)primarySearchData;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool tinyApp;
@property(readonly, nonatomic) NSString *appSource;
@property(readonly, nonatomic) NSString *stageExtProp;
@property(nonatomic) int recommendStatus;
- (int)appType;
- (id)unzipFilePath;
- (_Bool)isInstalled;
- (int)appSourceType;
- (int)appStatus;
- (id)defaultIcon:(id)arg1 isForce:(_Bool)arg2;
- (id)defaultIcon:(id)arg1;
- (id)defaultIcon;
@property(readonly, nonatomic) NSDictionary *layoutOptions;
@property(readonly, nonatomic) _Bool movable;
@property(readonly, nonatomic) _Bool display;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) NSDictionary *extra;
@property(readonly, nonatomic) NSString *md5;
@property(readonly, nonatomic) _Bool autoAuthorize;
@property(readonly, nonatomic) _Bool needAuthorize;
@property(readonly, nonatomic) NSString *schemeUri;
@property(readonly, nonatomic) NSString *thirdPkgName;
@property(readonly, nonatomic) _Bool alipayApp;
@property(readonly, nonatomic) _Bool autoStatus;
@property(readonly, nonatomic) NSString *h5AppCdnBaseUrl;
@property(readonly, nonatomic) NSString *incrementPkgUrl;
@property(readonly, nonatomic) NSString *pkgType;
@property(readonly, nonatomic) NSString *pkgUrl;
@property(readonly, nonatomic) NSString *pkgSize;
@property(readonly, nonatomic) NSString *iconUrl;
@property(readonly, nonatomic) NSString *desc;
@property(readonly, nonatomic) NSString *slogan;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *appId;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppBase:(id)arg1 appLayout:(id)arg2;
- (id)currentAppLayout;
- (id)currentAppBase;
@property(retain, nonatomic) NSString *wwpersonalSubTitle;
@property(retain, nonatomic) NSString *wwpersonalClickUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

