//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEUtilScrollController.h"

@class CCRUserCardInfo, NSString, UITextField;

@interface CCRCardMemoController : BEEUtilScrollController
{
    UITextField *_textField;
    NSString *_cardMemo;
    CCRUserCardInfo *_card;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)reloadContent;
- (void)didClickFinish;
- (void)viewDidLoad;
- (id)initWithCard:(id)arg1 memo:(id)arg2;

@end

