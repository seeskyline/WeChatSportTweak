//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEDataController.h"

@class AFAcountManagerView, AFStockAcountListModel, AFStockAcountModel, AUBarButtonItem, NSString;

@interface AFAcountMangerPlugin : BEEDataController
{
    NSString *_instId;
    CDUnknownBlockType _addAccountBlock;
    AFAcountManagerView *_acountView;
    AFStockAcountListModel *_listModel;
    AFStockAcountModel *_selectAcount;
    AUBarButtonItem *_rightButton;
}

@property(retain, nonatomic) AUBarButtonItem *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) AFStockAcountModel *selectAcount; // @synthesize selectAcount=_selectAcount;
@property(retain, nonatomic) AFStockAcountListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) AFAcountManagerView *acountView; // @synthesize acountView=_acountView;
@property(copy, nonatomic) CDUnknownBlockType addAccountBlock; // @synthesize addAccountBlock=_addAccountBlock;
@property(copy, nonatomic) NSString *instId; // @synthesize instId=_instId;
- (void).cxx_destruct;
- (void)loadException:(int)arg1 info:(id)arg2 retry:(_Bool)arg3;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)loadBegan;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setDefaultValues;
- (void)accountQuery;
- (void)back;
- (void)viewDidLoad;

@end

