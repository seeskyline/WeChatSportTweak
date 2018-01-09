//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSIndexPath, NSString, UIActivityIndicatorView, UIImageView;

@interface GifSearchPreviewView : UIView
{
    NSIndexPath *_displayOnCellAtIndexPath;
    UIImageView *_backgroundView;
    UIImageView *_contentView;
    UIActivityIndicatorView *_loadingView;
    NSString *_requestLocalId;
}

@property(retain, nonatomic) NSString *requestLocalId; // @synthesize requestLocalId=_requestLocalId;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSIndexPath *displayOnCellAtIndexPath; // @synthesize displayOnCellAtIndexPath=_displayOnCellAtIndexPath;
- (void).cxx_destruct;
- (void)recalulateWithShowFromRect:(struct CGRect)arg1 HWRatio:(double)arg2;
- (void)showWithGifItem:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)dealloc;
- (id)init;

@end

