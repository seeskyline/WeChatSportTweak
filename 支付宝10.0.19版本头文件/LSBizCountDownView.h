//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface LSBizCountDownView : UIView
{
    int _flag;
    CDUnknownBlockType _removedBlock;
    UILabel *_countDownLabel;
}

+ (id)countDownView:(id)arg1;
+ (id)remindView:(id)arg1;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(copy, nonatomic) CDUnknownBlockType removedBlock; // @synthesize removedBlock=_removedBlock;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)updateCountDownTip:(id)arg1;

@end

