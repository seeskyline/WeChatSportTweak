//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OService.h"

@class GO2OCouponRequest, GO2OServiceCaller;

@protocol GO2OCouponService <GO2OService>
- (GO2OServiceCaller *)promoPageDataWithRequest:(GO2OCouponRequest *)arg1 onSuccess:(void (^)(id))arg2 onFailure:(void (^)(GO2OServiceError *))arg3;
@end

