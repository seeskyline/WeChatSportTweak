//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "MFAttributedLabelDelegate.h"
#import "MFCell.h"
#import "MFLongAttributeLabelDelegate.h"
#import "MFPhotoWallViewDelegate.h"
#import "MFVideoPlayerDataSource.h"

@class NSDictionary, NSIndexPath, NSString;

@interface MFHeadFooter : UITableViewHeaderFooterView <MFCell, MFAttributedLabelDelegate, MFLongAttributeLabelDelegate, MFPhotoWallViewDelegate, MFVideoPlayerDataSource>
{
    NSString *_identifier;
    NSString *_tId;
    NSDictionary *_dataItem;
    id _originData;
    long long _section;
    long long _row;
    NSIndexPath *_indexPath;
    id <MFCellDelegate> _delegate;
}

@property(nonatomic) __weak id <MFCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(retain, nonatomic) id originData; // @synthesize originData=_originData;
@property(retain, nonatomic) NSDictionary *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) NSString *tId; // @synthesize tId=_tId;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (int)isEnablePlayVideo:(id)arg1;
- (void)photoWallView:(id)arg1 cell:(id)arg2 longPressAtIndex:(unsigned long long)arg3;
- (void)photoWallView:(id)arg1 cell:(id)arg2 selectedPhotoAtIndex:(unsigned long long)arg3;
- (void)onClickMFLongAttributeLabel:(id)arg1 state:(int)arg2;
- (void)mfAttributedLabel:(id)arg1 longPressOnLink:(id)arg2 CGRect:(struct CGRect)arg3;
- (void)mfAttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)widgetSpecialHandleing:(id)arg1;
- (void)specialHandling;
- (id)mfContentView;
- (void)setupUI;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

