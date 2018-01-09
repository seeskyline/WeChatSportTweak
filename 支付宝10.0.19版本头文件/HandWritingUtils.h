//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HandWritingUtils : NSObject
{
}

+ (_Bool)isUsingWifi;
+ (_Bool)writePointsJsonData:(id)arg1 toFile:(id)arg2;
+ (struct SigPoint *)getSigPointFromSignature:(id)arg1 pointLen:(int *)arg2;
+ (void)sigClose;
+ (struct SigAlgoResult)validateForRegistWithUserId:(id)arg1 inputSignature:(id)arg2 level:(int)arg3;
+ (struct SigAlgoResult)sigInit;
+ (struct SigAlgoResult)validateWithUserId:(id)arg1 inputSignature:(id)arg2 level:(int)arg3;
+ (void)deleteAllfilesAboutUserId:(id)arg1;
- (void)close;

@end

