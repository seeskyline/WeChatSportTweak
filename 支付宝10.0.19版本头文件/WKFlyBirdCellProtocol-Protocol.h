//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "WKNormalCellProtocol.h"

@class FBDocument, UIView, WKEasyViewBuilder, WKTableCellModel;

@protocol WKFlyBirdCellProtocol <WKNormalCellProtocol, NSObject>
+ (double)cellHeight:(WKTableCellModel *)arg1 viewBuilder:(WKEasyViewBuilder *)arg2;
+ (UIView *)templateLoadingView;
@property(readonly, nonatomic) WKTableCellModel *cellModel;
@property(readonly, nonatomic) FBDocument *document;
- (void)buildCell:(WKTableCellModel *)arg1 viewBuilder:(WKEasyViewBuilder *)arg2;
@end

