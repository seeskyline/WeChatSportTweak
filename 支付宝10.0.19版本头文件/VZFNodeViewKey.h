//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VZFNodeViewKey : NSObject
{
    Class _nodeClass;
    NSString *_identifier;
}

+ (id)viewKeyForNodeClass:(Class)arg1 Identifier:(id)arg2;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) Class nodeClass; // @synthesize nodeClass=_nodeClass;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

