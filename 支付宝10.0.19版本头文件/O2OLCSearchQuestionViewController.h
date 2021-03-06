//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCommonSchemeProtocol.h"
#import "UITextFieldDelegate.h"

@class NSString, O2OLCSearchQuestionDataSource, O2OLCSearchQuestionDelegate, O2OLCSearchQuestionModel, UILabel, UIView;

@interface O2OLCSearchQuestionViewController : O2OListViewController <UITextFieldDelegate, O2OCommonSchemeProtocol>
{
    UIView *_textFiledContainerView;
    O2OLCSearchQuestionModel *_searchModel;
    O2OLCSearchQuestionModel *_recommendModel;
    O2OLCSearchQuestionDataSource *_searchDataSource;
    O2OLCSearchQuestionDelegate *_searchDataDelegate;
    UIView *_titleView;
    UILabel *_titleLabel;
    UIView *_errorView;
    UILabel *_errorLabel;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) O2OLCSearchQuestionDelegate *searchDataDelegate; // @synthesize searchDataDelegate=_searchDataDelegate;
@property(retain, nonatomic) O2OLCSearchQuestionDataSource *searchDataSource; // @synthesize searchDataSource=_searchDataSource;
@property(retain, nonatomic) O2OLCSearchQuestionModel *recommendModel; // @synthesize recommendModel=_recommendModel;
@property(retain, nonatomic) O2OLCSearchQuestionModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) UIView *textFiledContainerView; // @synthesize textFiledContainerView=_textFiledContainerView;
- (void).cxx_destruct;
- (id)pageSpm;
- (void)showSearch;
- (void)showRecommend;
- (_Bool)isShowingRecommend;
- (void)resetKeyModel:(id)arg1;
- (void)load;
- (void)reload;
- (void)loadSearch;
- (void)loadRecommend;
- (void)cancelAll;
- (void)textFieldTextDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)hasShowingData;
- (void)removeErrorView;
- (void)showErrorView:(int)arg1 title:(id)arg2;
- (id)footerViewError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showNoResult:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)back;
- (void)setUpTitleView;
- (void)setUpSearchTextArea;
- (void)viewDidLoad;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

