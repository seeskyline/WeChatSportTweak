//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface APConfigManager : NSObject
{
    unsigned int _logCountIncredment;
    NSMutableDictionary *_cfgFileDict;
    NSString *_openId;
    NSString *_offerId;
}

+ (id)sharedInstance;
- (void)sync;
- (void)save:(CDUnknownBlockType)arg1;
- (void)readIn:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isNewReceiptEnabled) _Bool enableNewReceipt;
@property(readonly, nonatomic) unsigned int logCountIncredment;
- (void)loadByOfferId:(id)arg1 openId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

