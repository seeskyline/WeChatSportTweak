//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface APLogManualContext : NSObject
{
    NSMutableDictionary *_pageInfos;
    NSString *_lastPageSpmId;
    NSString *_lastPageId;
    NSString *_lastViewId;
}

+ (id)sharedInstance;
@property(retain) NSString *lastViewId; // @synthesize lastViewId=_lastViewId;
@property(retain) NSString *lastPageId; // @synthesize lastPageId=_lastPageId;
@property(retain) NSString *lastPageSpmId; // @synthesize lastPageSpmId=_lastPageSpmId;
- (void).cxx_destruct;
- (void)checkWeakPageInfo;
- (void)insertPageInfo:(id)arg1 forKey:(id)arg2;
- (void)updatePageInfo:(id)arg1 withSpmId:(id)arg2;
- (id)pageInfoForKey:(id)arg1;

@end

