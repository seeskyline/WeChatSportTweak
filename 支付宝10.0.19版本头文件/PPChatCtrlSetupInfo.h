//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatCtrlInfo.h"

@class UILabel, UIView;

@interface PPChatCtrlSetupInfo : PPChatCtrlInfo
{
    UILabel *_detailTitle;
    UILabel *_detailMsg;
    UIView *_publicView;
    UIView *_publicInfoView;
    UIView *_publicDetailView;
    UIView *_viewLine;
}

@property(retain, nonatomic) UIView *viewLine; // @synthesize viewLine=_viewLine;
@property(retain, nonatomic) UIView *publicDetailView; // @synthesize publicDetailView=_publicDetailView;
@property(retain, nonatomic) UIView *publicInfoView; // @synthesize publicInfoView=_publicInfoView;
@property(retain, nonatomic) UIView *publicView; // @synthesize publicView=_publicView;
@property(retain, nonatomic) UILabel *detailMsg; // @synthesize detailMsg=_detailMsg;
@property(retain, nonatomic) UILabel *detailTitle; // @synthesize detailTitle=_detailTitle;
- (void).cxx_destruct;
- (void)ctrlLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 param:(id)arg2 notify:(CDUnknownBlockType)arg3;

@end

