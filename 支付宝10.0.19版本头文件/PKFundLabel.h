//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PKView.h"

@class NSDictionary, UILabel;

@interface PKFundLabel : PKView
{
    long long _alignmentType;
    NSDictionary *_dataDic;
    UILabel *_fundTagLabel;
    UILabel *_fundTitleCodeLabel;
}

@property(retain, nonatomic) UILabel *fundTitleCodeLabel; // @synthesize fundTitleCodeLabel=_fundTitleCodeLabel;
@property(retain, nonatomic) UILabel *fundTagLabel; // @synthesize fundTagLabel=_fundTagLabel;
@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(nonatomic) long long alignmentType; // @synthesize alignmentType=_alignmentType;
- (void).cxx_destruct;
- (void)bindDataWith:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

