//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface CCACHelper : NSObject <UIAlertViewDelegate>
{
}

+ (id)foreignCurrencyChange:(id)arg1;
+ (id)supportedColorString:(id)arg1;
+ (id)colorFromHexRGB:(id)arg1;
+ (id)colorWithRGBString:(id)arg1;
+ (void)loadLogoImage:(id)arg1 bankInfo:(id)arg2;
+ (id)imageWithBundle:(id)arg1 Name:(id)arg2;
+ (id)bankIconImageNamed:(id)arg1;
+ (id)imageWithName:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;
+ (double)cellWidth;
+ (id)filterSpecificStr:(id)arg1 FromStr:(id)arg2;
+ (id)amountAddSeparator:(id)arg1;
+ (void)destoryInstance;
+ (id)shareInstance;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doIndentifyAlertWidthMsg:(id)arg1;
- (void)doIndentifyAlertWidthMsg:(id)arg1 didGotoCerntify:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

