//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumberFormatter.h"

@class NSDate, NSDateFormatter;

@interface CPTTimeFormatter : NSNumberFormatter
{
    NSDateFormatter *dateFormatter;
    NSDate *referenceDate;
}

@property(copy, nonatomic) NSDate *referenceDate; // @synthesize referenceDate;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter;
- (id)stringForObjectValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDateFormatter:(id)arg1;
- (id)init;

@end

