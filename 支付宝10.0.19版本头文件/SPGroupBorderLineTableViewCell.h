//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface SPGroupBorderLineTableViewCell : UITableViewCell
{
    long long _position;
    UIView *_topLineView;
    UIView *_btmLineView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *btmLineView; // @synthesize btmLineView=_btmLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)sepratorLineWithLocX:(double)arg1 locY:(double)arg2;
- (id)btmLine;
- (id)topLine;
- (void)layoutBorderLine;

@end

