//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AMSelectView, APSearchManager, NSArray, NSDictionary, NSMutableArray, NSString, UISearchBar, UISearchDisplayController, UITableView, UIView;

@interface H5CommonListViewController : DTViewController <UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _multiSelection;
    _Bool _allowEmpty;
    _Bool _allowSearch;
    _Bool _needBack;
    _Bool _selectable;
    int _maxSelectCount;
    NSDictionary *_sections;
    NSMutableArray *_selectedList;
    NSMutableArray *_disabledList;
    CDUnknownBlockType _selectBlock;
    NSArray *_sectionOrders;
    NSArray *_searchSectionOrders;
    UITableView *_tableView;
    long long _scrollToRowScrollPositionOnSelect;
    UISearchBar *_searchBar;
    NSString *_searchBarPlaceholder;
    UISearchDisplayController *_searchController;
    AMSelectView *_selectView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIView *_emptyView;
    long long _cellType;
    long long _transitionType;
    NSDictionary *_confirmBack;
    NSDictionary *_confirmSelect;
    NSDictionary *_searchItemDic;
    CDUnknownBlockType _callback;
    APSearchManager *_pinyinSearchManager;
    UIView *_selectAllView;
}

@property(retain, nonatomic) UIView *selectAllView; // @synthesize selectAllView=_selectAllView;
@property(retain, nonatomic) APSearchManager *pinyinSearchManager; // @synthesize pinyinSearchManager=_pinyinSearchManager;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSDictionary *searchItemDic; // @synthesize searchItemDic=_searchItemDic;
@property(retain, nonatomic) NSDictionary *confirmSelect; // @synthesize confirmSelect=_confirmSelect;
@property(retain, nonatomic) NSDictionary *confirmBack; // @synthesize confirmBack=_confirmBack;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) AMSelectView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UISearchDisplayController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSString *searchBarPlaceholder; // @synthesize searchBarPlaceholder=_searchBarPlaceholder;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) _Bool needBack; // @synthesize needBack=_needBack;
@property(nonatomic) _Bool allowSearch; // @synthesize allowSearch=_allowSearch;
@property(nonatomic) long long scrollToRowScrollPositionOnSelect; // @synthesize scrollToRowScrollPositionOnSelect=_scrollToRowScrollPositionOnSelect;
@property(nonatomic) int maxSelectCount; // @synthesize maxSelectCount=_maxSelectCount;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *searchSectionOrders; // @synthesize searchSectionOrders=_searchSectionOrders;
@property(retain, nonatomic) NSArray *sectionOrders; // @synthesize sectionOrders=_sectionOrders;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) _Bool allowEmpty; // @synthesize allowEmpty=_allowEmpty;
@property(nonatomic) _Bool multiSelection; // @synthesize multiSelection=_multiSelection;
@property(readonly, nonatomic) NSMutableArray *disabledList; // @synthesize disabledList=_disabledList;
@property(readonly, nonatomic) NSMutableArray *selectedList; // @synthesize selectedList=_selectedList;
@property(copy, nonatomic) NSDictionary *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)itemsFromSectionNum:(long long)arg1 section:(id)arg2 sectionOrder:(id)arg3;
- (id)itemsFromSection:(long long)arg1;
- (_Bool)hasAnyItems;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)back;
- (id)createSelectAllView;
- (void)showEmptyView:(_Bool)arg1;
- (id)disabledObjects;
- (id)selectedObjects;
- (id)objectWithIndexPath:(id)arg1;
- (id)objectWithItemId:(id)arg1;
- (void)clearSelectAllStatus;
- (void)selectAll:(id)arg1;
- (void)SearchItemDicDidChange;
- (void)setSections:(id)arg1 orders:(id)arg2;
- (id)items;
- (id)setItemsWithAutoSections:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setDisabledList:(id)arg1;
- (void)setSelectedList:(id)arg1;
- (void)setDidSelectBlock:(CDUnknownBlockType)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadItems;
- (void)submitButtonClicked;
- (void)setSubmitTextChanged;
- (void)reloadItems;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (id)init;
- (id)initWithSections:(id)arg1 orders:(id)arg2 multiselection:(_Bool)arg3 allowEmpty:(_Bool)arg4 selectedItems:(id)arg5 disabledItems:(id)arg6 selectBlock:(CDUnknownBlockType)arg7 jscallback:(CDUnknownBlockType)arg8;
- (id)initWithItems:(id)arg1 multiselection:(_Bool)arg2 allowEmpty:(_Bool)arg3 selectedItems:(id)arg4 disabledItems:(id)arg5 selectBlock:(CDUnknownBlockType)arg6 jscallback:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

