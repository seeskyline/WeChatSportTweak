//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPProfilePickerData.h"

@class NSString;

@interface SPProfileConstelation : SPProfilePickerData
{
    NSString *_startDate;
    NSString *_endDate;
}

+ (id)blankConstelation;
@property(retain, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)displayName;

@end

