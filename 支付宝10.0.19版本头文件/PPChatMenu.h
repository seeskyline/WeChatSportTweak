//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, PPChatMenuController;

@interface PPChatMenu : UIView
{
    int _type;
    NSArray *_menuItems;
    NSMutableArray *_buttons;
    NSMutableArray *_separators;
    double _width;
    double _height;
    double _arrowXInScreen;
    double _arrowXInMenu;
    PPChatMenuController *_menuControl;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak PPChatMenuController *menuControl; // @synthesize menuControl=_menuControl;
@property(nonatomic) double arrowXInMenu; // @synthesize arrowXInMenu=_arrowXInMenu;
@property(nonatomic) double arrowXInScreen; // @synthesize arrowXInScreen=_arrowXInScreen;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSMutableArray *separators; // @synthesize separators=_separators;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)separatorView;
- (id)stretchImage:(id)arg1 withWidth:(double)arg2 height:(double)arg3 leftCap:(double)arg4;
- (void)dealloc;
- (void)onSubMenuClicked:(id)arg1;
- (id)initWithMenuControl:(id)arg1 type:(int)arg2 menuItems:(id)arg3 arrowXInScreen:(double)arg4;

@end

