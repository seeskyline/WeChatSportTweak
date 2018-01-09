//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWEntranceGuideView;

@interface EWEntranceGuideManager : NSObject
{
    _Bool _hasShown;
    int _entryType;
    EWEntranceGuideView *_entranceGuideView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) EWEntranceGuideView *entranceGuideView; // @synthesize entranceGuideView=_entranceGuideView;
@property(nonatomic) int entryType; // @synthesize entryType=_entryType;
@property(nonatomic) _Bool hasShown; // @synthesize hasShown=_hasShown;
- (void).cxx_destruct;
- (void)resetHasShown:(_Bool)arg1;
- (void)showEntranceGuide;
- (_Bool)isLastVC;
- (_Bool)needEntranceGuide;
- (void)userChanged;
- (void)dealloc;
- (id)init;

@end

