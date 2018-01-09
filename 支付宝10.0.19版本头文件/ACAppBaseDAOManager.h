//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCustomStorage;

@interface ACAppBaseDAOManager : NSObject
{
    id <ACAppBaseDAOProxy> _daoProxy;
    APCustomStorage *_storage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) id <ACAppBaseDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
- (void).cxx_destruct;
- (id)getAllAppBaseInfos;
- (id)queryBaseInfoList:(id)arg1;
- (id)queryBaseInfo:(id)arg1;
- (void)saveAppBaseList:(id)arg1;
- (void)saveAppBase:(id)arg1;
- (void)initDataBase;

@end

