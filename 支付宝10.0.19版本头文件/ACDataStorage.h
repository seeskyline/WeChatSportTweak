//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAppSystemSearchDelegate, APPreferencesAccessor, NSDictionary, NSString;

@interface ACDataStorage : NSObject
{
    NSString *_documentPath;
    NSString *_unzipFilePath;
    NSString *_downloadFilePath;
    ACAppSystemSearchDelegate *_systemSearchDelegate;
    NSDictionary *_preloadSettings;
    NSDictionary *_preloadLanguageSettings;
    NSDictionary *_configInfos;
    APPreferencesAccessor *_dataAccessor;
}

+ (id)shared;
@property(retain, nonatomic) APPreferencesAccessor *dataAccessor; // @synthesize dataAccessor=_dataAccessor;
@property(retain, nonatomic) NSDictionary *configInfos; // @synthesize configInfos=_configInfos;
@property(retain, nonatomic) NSDictionary *preloadLanguageSettings; // @synthesize preloadLanguageSettings=_preloadLanguageSettings;
@property(retain, nonatomic) NSDictionary *preloadSettings; // @synthesize preloadSettings=_preloadSettings;
@property(retain, nonatomic) ACAppSystemSearchDelegate *systemSearchDelegate; // @synthesize systemSearchDelegate=_systemSearchDelegate;
@property(retain, nonatomic) NSString *downloadFilePath; // @synthesize downloadFilePath=_downloadFilePath;
@property(retain, nonatomic) NSString *unzipFilePath; // @synthesize unzipFilePath=_unzipFilePath;
@property(retain, nonatomic) NSString *documentPath; // @synthesize documentPath=_documentPath;
- (void).cxx_destruct;
- (id)appsRefreshDate;
- (void)saveAppsRefreshDate:(id)arg1;
- (id)recentUseAppList;
- (void)saveRecentUseAppList:(id)arg1;
- (void)removeCommonValueForKey:(id)arg1;
- (void)saveCommonValue:(id)arg1 forKey:(id)arg2;
- (id)commonValueForKey:(id)arg1;
- (void)saveStageForceRequestList:(id)arg1;
- (id)stageForceRequestList;
- (id)dictionaryFromData:(id)arg1;
- (id)dataFromDictionary:(id)arg1;
- (id)dataFromAppBaseContainer:(id)arg1;
- (id)appBaseContainerFromData:(id)arg1;
- (void)saveLanguagelist:(id)arg1;
- (id)languagelist;
- (void)removeStageInfoWithParentCode:(id)arg1;
- (void)saveStageInfo:(id)arg1 parentCode:(id)arg2;
- (id)stageInfo:(id)arg1;
- (id)appendVersionToStageCode:(id)arg1;
- (void)removeStageViewWithCode:(id)arg1;
- (void)saveStageView:(id)arg1 stageCode:(id)arg2;
- (id)stageView:(id)arg1;
- (void)saveStageRelations:(id)arg1;
- (void)saveInstalledApps:(id)arg1;
- (id)installedApps;
- (_Bool)saveApps:(id)arg1;
- (id)stageRelations;
- (id)allApps;
- (id)schemaPrefix;
- (id)configInfosValueForKey:(id)arg1 class:(Class)arg2;
- (id)languageSettingsValueForKey:(id)arg1 class:(Class)arg2;
- (id)settingsValueForKey:(id)arg1 class:(Class)arg2;
- (id)settingsValueForKey:(id)arg1;
- (void)doCountryChanged:(id)arg1;
- (void)dataCenterDidUserLogout:(id)arg1;
- (void)dataCenterDidUserUpdated:(id)arg1;
- (void)unregistNotification;
- (void)registNotification;
- (id)configInfosPath;
- (id)languageSettingsPath;
- (id)settingsPath;
- (void)prepareStoragePath;
- (id)userValueForKey:(id)arg1 class:(Class)arg2;
- (id)commonValueForKey:(id)arg1 class:(Class)arg2;
- (void)dealloc;
- (id)initInPrivate;
- (id)init;
- (id)childStageCodesForStageNames:(id)arg1;
- (void)updateSystemSearchIndex;
- (void)updateAllSearchIndexWithAppid:(id)arg1;
- (void)updateSearchIndexWithAppid:(id)arg1;
- (void)updateSearchIndexWithStageCodes:(id)arg1;
- (void)languageDidUpdated:(id)arg1;
- (void)appDidUpdated:(id)arg1;
- (void)unregisterSearchIndexUpdateNotification;
- (void)registerSearchIndexUpdateNotification;
- (void)registerSearchIndex;

@end

