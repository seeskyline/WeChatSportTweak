//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MVShowModel, NSIndexPath, UICollectionView;

@protocol MVFilmListCollectionViewControllerDeleagte <NSObject>
- (void)collectionViewDidFinishLoadingFilmList:(UICollectionView *)arg1;
- (void)collectionViewDidErrorLoadingFilmList:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 didScrollToMovie:(MVShowModel *)arg2;
- (void)collectionView:(UICollectionView *)arg1 tappedOnCenteredMovie:(MVShowModel *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 didSelectMovie:(MVShowModel *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

