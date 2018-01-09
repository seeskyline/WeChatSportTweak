//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseCellView.h"

@class CAGradientLayer, FavCloudIdImageView, NSString, UIImageView;

@interface FavSightCellView : FavBaseCellView
{
    UIImageView *_iconImageView;
    UIImageView *_playIconImageView;
    CAGradientLayer *_maskLayer;
    FavCloudIdImageView *_sightPreView;
    NSString *_sightId;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) NSString *sightId; // @synthesize sightId=_sightId;
@property(retain, nonatomic) FavCloudIdImageView *sightPreView; // @synthesize sightPreView=_sightPreView;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)buildCell:(id)arg1;
- (void)buildSubView;

@end

