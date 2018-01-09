//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluBaseBizModel.h"

@class NSString, aluCountryInfo;

@interface aluRegisterBizModel : aluBaseBizModel
{
    NSString *_phoneNumForDefaultDisplay;
    CDUnknownBlockType _callback;
    id _context;
    aluCountryInfo *_countrySelectedByUser;
    NSString *_phoneNumToRegister;
    NSString *_token;
    NSString *_sceneid;
    NSString *_validTime;
}

@property(retain, nonatomic) NSString *validTime; // @synthesize validTime=_validTime;
@property(retain, nonatomic) NSString *sceneid; // @synthesize sceneid=_sceneid;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *phoneNumToRegister; // @synthesize phoneNumToRegister=_phoneNumToRegister;
@property(retain, nonatomic) aluCountryInfo *countrySelectedByUser; // @synthesize countrySelectedByUser=_countrySelectedByUser;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *phoneNumForDefaultDisplay; // @synthesize phoneNumForDefaultDisplay=_phoneNumForDefaultDisplay;
- (void).cxx_destruct;
- (void)dealloc;

@end

