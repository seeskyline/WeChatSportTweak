//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSDValue : NSObject
{
    id _weakObject;
    id _object;
}

+ (id)valueWithObject:(id)arg1;
+ (id)valueWithWeakObject:(id)arg1;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) __weak id weakObject; // @synthesize weakObject=_weakObject;
- (void).cxx_destruct;
- (id)objectValue;
- (id)weakObjectValue;

@end

