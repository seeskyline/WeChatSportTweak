//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSMutableArray, NSMutableDictionary, VZAListViewDataSource, VZAListViewDelegate, VZANodeManager;

@interface UITableView (VZANode)
- (id)dequeueReusableNodeWithIdentifier:(id)arg1;
@property(retain, nonatomic) VZAListViewDelegate *VZADelegate; // @dynamic VZADelegate;
@property(retain, nonatomic) VZAListViewDataSource *VZADataSource; // @dynamic VZADataSource;
@property(retain, nonatomic) NSMutableArray *visiableCellNodes;
@property(retain, nonatomic) NSMutableDictionary *reusableTableCellNodes;
- (void)createNodeManager;
@property(retain, nonatomic) VZANodeManager *nodeM; // @dynamic nodeM;
@end

