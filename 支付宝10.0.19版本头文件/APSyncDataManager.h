//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MADataInterface.h"
#import "MAErrorInterface.h"

@class NSString;

@interface APSyncDataManager : NSObject <MADataInterface, MAErrorInterface>
{
    id <APSyncDataManagerDelegate> _delegate;
}

+ (id)syncDataManager:(id)arg1;
@property(nonatomic) __weak id <APSyncDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendSyncDataToSpanner:(id)arg1;
- (id)cookie;
- (void)sendThroughHttpHead:(id)arg1 body:(id)arg2 forwardIP:(unsigned int)arg3;
- (void)sendSyncData:(id)arg1 forwardIP:(unsigned int)arg2 header:(id)arg3 params:(id)arg4;
- (void)sendSyncData:(id)arg1 forwardIP:(unsigned int)arg2 header:(id)arg3;
- (void)sendSyncHeader:(id)arg1;
- (void)sendSyncData:(id)arg1;
- (void)access:(id)arg1 withError:(id)arg2;
- (void)dataSendtimeout:(id)arg1 withMsgHead:(id)arg2;
- (void)access:(id)arg1 didReceiveDataWithHead:(id)arg2 andBody:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

