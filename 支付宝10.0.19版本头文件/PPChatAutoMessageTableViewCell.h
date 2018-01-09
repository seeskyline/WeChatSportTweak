//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatMessageCell.h"

#import "FBDocumentDelegate.h"

@class FBDocument, NSString, UIView;

@interface PPChatAutoMessageTableViewCell : PPChatMessageCell <FBDocumentDelegate>
{
    _Bool _isLoadingTemplate;
    UIView *_messageView;
    FBDocument *_doc;
}

+ (id)viewFromMessage:(id)arg1 doc:(id *)arg2 viewBuilder:(id)arg3;
+ (double)cellHeightForData:(id)arg1 ofMessage:(id)arg2 viewBuilder:(id)arg3;
@property(retain, nonatomic) FBDocument *doc; // @synthesize doc=_doc;
@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) _Bool isLoadingTemplate; // @synthesize isLoadingTemplate=_isLoadingTemplate;
- (void).cxx_destruct;
- (_Bool)onEventNotify:(id)arg1 andDocument:(id)arg2;
- (void)setHighlightedFinally:(_Bool)arg1;
- (void)loadData:(id)arg1 viewBuilder:(id)arg2;
- (id)getPPCellContentView;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

