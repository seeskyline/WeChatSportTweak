//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface MultiSelectCreateReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) _Bool addFriends; // @dynamic addFriends;
@property(retain, nonatomic) NSString *bizType; // @dynamic bizType;
@property(readonly) _Bool hasAddFriends; // @dynamic hasAddFriends;
@property(readonly) _Bool hasBizType; // @dynamic hasBizType;
@property(readonly) _Bool hasSaveFailList; // @dynamic hasSaveFailList;
@property(readonly) _Bool hasScene; // @dynamic hasScene;
@property(nonatomic) _Bool saveFailList; // @dynamic saveFailList;
@property(retain, nonatomic) NSString *scene; // @dynamic scene;
@property(retain, nonatomic) NSArray *userReqs; // @dynamic userReqs;

@end

