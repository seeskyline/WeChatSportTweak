//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliTallyPictureWallView;

@protocol AliTallyPictureWallViewDelegate <NSObject>

@optional
- (void)pictureWall:(AliTallyPictureWallView *)arg1 didDeletedPictureIndex:(long long)arg2;
- (void)pictureWall:(AliTallyPictureWallView *)arg1 willDeletePictureIndex:(long long)arg2;
- (void)pictureWall:(AliTallyPictureWallView *)arg1 didSelectedPictureIndex:(long long)arg2;
- (void)pictureWall:(AliTallyPictureWallView *)arg1 willSelectPictureIndex:(long long)arg2;
- (void)pictureWallClickedAddPictureButton:(AliTallyPictureWallView *)arg1;
@end

