//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHCommonResult.h"

@class NSString, WEALTHQuotaSubInfo;

@interface WEALTHAccountQuotaUpgradeResult : WEALTHCommonResult
{
    NSString *_successTips;
    NSString *_quotaDesc;
    WEALTHQuotaSubInfo *_quotaInfo;
}

@property(retain, nonatomic) WEALTHQuotaSubInfo *quotaInfo; // @synthesize quotaInfo=_quotaInfo;
@property(retain, nonatomic) NSString *quotaDesc; // @synthesize quotaDesc=_quotaDesc;
@property(retain, nonatomic) NSString *successTips; // @synthesize successTips=_successTips;
- (void).cxx_destruct;

@end

