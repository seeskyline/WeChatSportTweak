//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KABAOPRODPassInfo;

@interface APPassBaseView : UIView
{
    KABAOPRODPassInfo *_passInfo;
}

@property(retain, nonatomic) KABAOPRODPassInfo *passInfo; // @synthesize passInfo=_passInfo;
- (void).cxx_destruct;
- (void)reloadData;
- (void)reloadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 passInfo:(id)arg2;

@end

