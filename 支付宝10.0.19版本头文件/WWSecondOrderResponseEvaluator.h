//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WWEvaluate.h"

@interface WWSecondOrderResponseEvaluator : NSObject <WWEvaluate>
{
    double omega;
    double zeta;
}

- (double)evaluateAt:(double)arg1;
- (id)initWithOmega:(double)arg1 zeta:(double)arg2;

@end

