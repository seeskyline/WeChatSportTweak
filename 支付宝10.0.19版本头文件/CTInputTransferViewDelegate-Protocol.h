//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTInputTransferView;

@protocol CTInputTransferViewDelegate <NSObject>

@optional
- (void)transferChangeChannel:(CTInputTransferView *)arg1;
- (void)transferPayStyleChanged:(CTInputTransferView *)arg1 payStyle:(int)arg2;
- (void)transferBtnTaped:(CTInputTransferView *)arg1;
- (void)cancelTransfer:(CTInputTransferView *)arg1;
@end

