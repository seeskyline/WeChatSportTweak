//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface O2OMerchantSyncManager : NSObject
{
}

- (id)findBlock:(id)arg1 inData:(id)arg2;
- (_Bool)checkSyncMessage:(id)arg1 shopId:(id)arg2 modelStatus:(long long)arg3 dataSuccess:(_Bool)arg4 lastDataTime:(long long)arg5;
- (id)findCellBlockId:(id)arg1 inData:(id)arg2;
- (_Bool)checkCellMessage:(id)arg1 shopId:(id)arg2 modelStatus:(long long)arg3 dataSuccess:(_Bool)arg4;
- (_Bool)shouldUpdateRightNow:(id)arg1;

@end

