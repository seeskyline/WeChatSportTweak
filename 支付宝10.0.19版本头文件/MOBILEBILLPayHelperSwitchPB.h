//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

#import "NSCoding.h"

@class NSString;

@interface MOBILEBILLPayHelperSwitchPB : APDPBGeneratedMessage <NSCoding>
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *actionLabel; // @dynamic actionLabel;
@property(retain, nonatomic) NSString *actionParam; // @dynamic actionParam;
@property(retain, nonatomic) NSString *closedNote; // @dynamic closedNote;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(readonly) _Bool hasActionLabel; // @dynamic hasActionLabel;
@property(readonly) _Bool hasActionParam; // @dynamic hasActionParam;
@property(readonly) _Bool hasClosedNote; // @dynamic hasClosedNote;
@property(readonly) _Bool hasEnabled; // @dynamic hasEnabled;
@property(readonly) _Bool hasLabel; // @dynamic hasLabel;
@property(readonly) _Bool hasName; // @dynamic hasName;
@property(readonly) _Bool hasNote; // @dynamic hasNote;
@property(retain, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *note; // @dynamic note;

@end

