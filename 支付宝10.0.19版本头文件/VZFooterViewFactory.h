//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VZFooterViewFactory : NSObject
{
}

+ (id)emptyFooterView;
+ (id)errorFooterView:(struct CGRect)arg1 Text:(id)arg2;
+ (id)loadingFooterView:(struct CGRect)arg1 Text:(id)arg2;
+ (id)normalFooterView:(struct CGRect)arg1 Text:(id)arg2;
+ (id)clickableFooterView:(struct CGRect)arg1 Text:(id)arg2 Target:(id)arg3 Action:(SEL)arg4;

@end

