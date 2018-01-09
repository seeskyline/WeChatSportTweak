//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface LFHomeCardMonitor : NSObject
{
    NSString *_publicId;
    NSMutableSet *_historyCardIds;
}

@property(retain, nonatomic) NSMutableSet *historyCardIds; // @synthesize historyCardIds=_historyCardIds;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (void)lifeMultiImageTextCardClick:(id)arg1 cardIndex:(long long)arg2 contentId:(id)arg3;
- (void)viewController:(id)arg1 didDisappear:(_Bool)arg2;
- (void)exposureCard:(id)arg1 cardIndex:(long long)arg2;
- (id)init;

@end

