//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APCommonMultiSelectView.h"

@interface APGroupMultiSelectView : APCommonMultiSelectView
{
    long long _selectedCount;
}

@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
- (_Bool)selectedItem:(id)arg1;
- (_Bool)itemIsInDefault:(id)arg1;
- (_Bool)checkCanAdd;
- (_Bool)itemIsSelected:(id)arg1;
- (void)adjustFrames;
- (void)setupMultiInputView;
- (void)configCell:(id)arg1 indexPath:(id)arg2 item:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 superVC:(id)arg2 delegate:(id)arg3 paramDict:(id)arg4;

@end

