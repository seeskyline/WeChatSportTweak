//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ARUPOrigin, NSMutableArray, NSString;

@interface ARUPTokenInfo : NSObject
{
    NSMutableArray *_apiServerList;
    NSMutableArray *_uploadServerList;
    NSString *_token;
    ARUPOrigin *_origin;
}

@property(retain, nonatomic) ARUPOrigin *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSMutableArray *uploadServerList; // @synthesize uploadServerList=_uploadServerList;
@property(readonly, nonatomic) NSMutableArray *apiServerList; // @synthesize apiServerList=_apiServerList;
- (void).cxx_destruct;

@end

