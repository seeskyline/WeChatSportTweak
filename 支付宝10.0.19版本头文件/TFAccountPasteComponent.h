//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFAccountPasteComponent : NSObject
{
    NSString *_accountString;
}

@property(readonly, nonatomic) NSString *accountString; // @synthesize accountString=_accountString;
- (void).cxx_destruct;
- (_Bool)configTransferToAccountShowCopy;
- (id)enumerateMatchesMobileAndEmail:(id)arg1;
- (void)markAccountShown;
- (void)readPasteStringWithCompletion:(CDUnknownBlockType)arg1;

@end

