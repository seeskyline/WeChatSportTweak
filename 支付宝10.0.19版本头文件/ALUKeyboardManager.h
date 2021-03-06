//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, UIScrollView, UIView;

@interface ALUKeyboardManager : NSObject
{
    NSMutableSet *_registeredClasses;
    UIView *_textFieldView;
    UIScrollView *_scrollView;
}

+ (id)sharedManager;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIView *textFieldView; // @synthesize textFieldView=_textFieldView;
@property(retain, nonatomic) NSMutableSet *registeredClasses; // @synthesize registeredClasses=_registeredClasses;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)hideKeyboard;
- (void)restoreUI;
- (void)addTapGestureForHideKeyboard;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldViewDidEndEditing:(id)arg1;
- (void)textFieldViewDidBeginEditing:(id)arg1;
- (void)dealloc;
- (void)handleViewControllerClass:(Class)arg1;
- (id)init;

@end

