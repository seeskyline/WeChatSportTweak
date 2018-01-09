//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString;

@interface BLCategoryPanelView : UIView
{
    _Bool _enableSelected;
    id <BLCategoryPanelViewDelegate> _delegate;
    NSString *_code;
    NSString *_name;
    long long _sourceType;
    NSArray *_buttons;
}

@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool enableSelected; // @synthesize enableSelected=_enableSelected;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) __weak id <BLCategoryPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCategory:(id)arg1;
- (void)clickCategoryButton:(id)arg1;
- (void)updateButtons:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

