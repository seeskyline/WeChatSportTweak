//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APVideoInfo, NSString;

@protocol APMovieRecordPickerDelegate <NSObject>

@optional
- (void)onSelectSightId:(NSString *)arg1;
- (void)onCloseDraftBox;
- (void)onCloseSight;
- (void)movieControlFinishRecord:(APVideoInfo *)arg1;
@end

