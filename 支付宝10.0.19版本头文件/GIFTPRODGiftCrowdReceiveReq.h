//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIFTPRODCommonPagedReq.h"

@class GIFTPRODLocation, NSDictionary, NSString;

@interface GIFTPRODGiftCrowdReceiveReq : GIFTPRODCommonPagedReq
{
    NSString *_crowdNo;
    NSString *_outId;
    NSString *_guess;
    NSString *_groupId;
    NSString *_prevBiz;
    NSDictionary *_extInfo;
    NSString *_sign;
    GIFTPRODLocation *_location;
    NSString *_picId;
}

@property(retain, nonatomic) NSString *picId; // @synthesize picId=_picId;
@property(retain, nonatomic) GIFTPRODLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *prevBiz; // @synthesize prevBiz=_prevBiz;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *guess; // @synthesize guess=_guess;
@property(retain, nonatomic) NSString *outId; // @synthesize outId=_outId;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
- (void).cxx_destruct;

@end

