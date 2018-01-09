//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EWHorizontalScrollMenuDelegate.h"
#import "EWTabMenuItemDelegate.h"

@class EWCategoryModuleVM, EWHorizontalScrollMenu, EWScrollMenuItem, NSString;

@interface EWCategoryMenuView : UIView <EWHorizontalScrollMenuDelegate, EWTabMenuItemDelegate>
{
    EWCategoryModuleVM *_categoryModuleVM;
    id <EWCategoryMenuClickDelegate> _delegate;
    EWHorizontalScrollMenu *_scrollMenu;
    EWScrollMenuItem *_moreItem;
}

@property(retain, nonatomic) EWScrollMenuItem *moreItem; // @synthesize moreItem=_moreItem;
@property(retain, nonatomic) EWHorizontalScrollMenu *scrollMenu; // @synthesize scrollMenu=_scrollMenu;
@property(retain, nonatomic) id <EWCategoryMenuClickDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EWCategoryModuleVM *categoryModuleVM; // @synthesize categoryModuleVM=_categoryModuleVM;
- (void).cxx_destruct;
- (void)tapToActive:(id)arg1;
- (void)clickedMenu:(id)arg1;
- (void)reloadImage;
- (id)initWithFrame:(struct CGRect)arg1 categoryModuleVM:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

