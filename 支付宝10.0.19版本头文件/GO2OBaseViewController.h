//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

@class NSDictionary, NSString;

@interface GO2OBaseViewController : DTViewController
{
    NSString *_logEntityId;
    NSString *_logSpmId;
    NSDictionary *_logExtendParam;
}

@property(retain) NSDictionary *logExtendParam; // @synthesize logExtendParam=_logExtendParam;
@property(retain) NSString *logSpmId; // @synthesize logSpmId=_logSpmId;
@property(retain) NSString *logEntityId; // @synthesize logEntityId=_logEntityId;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

