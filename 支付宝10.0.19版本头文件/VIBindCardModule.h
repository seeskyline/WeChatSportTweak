//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIModule.h"

@class NSString;

@interface VIBindCardModule : VIModule
{
    NSString *_headLine;
    NSString *_title;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *headLine; // @synthesize headLine=_headLine;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doCallbackWithNote:(id)arg1 success:(_Bool)arg2;
- (void)addBankCardCanceledWithNote:(id)arg1;
- (void)addBankCardSuccessWithNote:(id)arg1;
- (void)addNotification;
- (void)start;

@end

