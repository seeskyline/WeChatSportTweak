//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer, TYMemoryWarningReporter;

@interface TYMemoryMonitor : NSObject
{
    float maxMem;
    NSMutableArray *rateArr;
    TYMemoryWarningReporter *reporter;
    NSTimer *_clearMemTimer;
    double _usedMemOnWarning;
}

+ (void)uploadMemoryCrash;
+ (id)shareMemMonitor;
- (void).cxx_destruct;
- (void)clearMemoryCrashLog;
- (void)writeMemoryCrashLog;
- (void)handleMemoryWarningForCrash;
- (id)loadRateArr;
- (void)saveRateArr:(id)arg1;
- (void)postMemWarn;
- (void)appDidEnterBg;
- (void)appWillEnterFg;
- (void)receiveMemoryWarning;
- (void)refreshMemoryInfo;
- (void)initRateArr;
- (id)caculateHealthRate;
- (void)checkCurrentMemory;
- (void)getMemUsage;
- (void)startMonitor;
- (id)init;

@end

