//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PBManagerBase : NSObject
{
}

+ (id)personsFromVcard:(id)arg1;
+ (id)vcardFromPerson:(id)arg1;
+ (long long)checkAuth;
+ (id)manager;
- (void)unRegisterContactsChangedNotification;
- (void)registerContactsChangedNotificationWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)clearAllContacts;
- (_Bool)updateContacts:(id)arg1;
- (_Bool)updateContact:(id)arg1;
- (_Bool)removeContacts:(id)arg1;
- (_Bool)removeContact:(id)arg1;
- (_Bool)addContacts:(id)arg1;
- (_Bool)addContact:(id)arg1 toContainer:(id)arg2;
- (void)requestAuthWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryAllContactsSummaryWithComplete:(CDUnknownBlockType)arg1;
- (void)queryAllContactsWithComplete:(CDUnknownBlockType)arg1;
- (unsigned long long)getContactsCount;

@end

