//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MVTabTheme;

@interface MVThemeKit : NSObject
{
    MVTabTheme *_currentTabTheme;
}

+ (id)sharedManager;
@property(retain, nonatomic) MVTabTheme *currentTabTheme; // @synthesize currentTabTheme=_currentTabTheme;
- (void).cxx_destruct;
- (void)querySeatThemeForShowId:(id)arg1 cinemaId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateTabTheme;
- (id)init;

@end

