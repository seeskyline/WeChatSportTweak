//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALPBaseTipInfo : NSObject
{
    NSString *_icon;
    NSString *_title;
    NSString *_subTitle;
    NSString *_jumpUrl;
}

+ (id)tipInfoWithDTO:(id)arg1;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)applyJumpUrl:(id)arg1;
- (id)applySubTitle:(id)arg1;
- (id)applyTitle:(id)arg1;
- (id)applyIcon:(id)arg1;

@end

