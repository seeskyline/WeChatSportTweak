//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIInputViewAudioFeedback.h"

@class NSString, UIImageView;

@interface AUNumKeyboards : UIView <UIInputViewAudioFeedback>
{
    id <UITextInput> _input;
    _Bool _tfShouldChange;
    _Bool _tvShouldChange;
    UIImageView *_backgroundView;
    _Bool _idNumber;
    _Bool _dotHidden;
    _Bool _dismissHidden;
    _Bool _submitEnable;
    id <UITextInput> _textInput;
    NSString *_submitText;
}

+ (id)sharedKeyboardWithMode:(long long)arg1;
+ (id)sharedKeyboard;
@property(retain, nonatomic) NSString *submitText; // @synthesize submitText=_submitText;
@property(nonatomic) _Bool submitEnable; // @synthesize submitEnable=_submitEnable;
@property(nonatomic) _Bool dismissHidden; // @synthesize dismissHidden=_dismissHidden;
@property(nonatomic) _Bool dotHidden; // @synthesize dotHidden=_dotHidden;
@property(nonatomic) _Bool idNumber; // @synthesize idNumber=_idNumber;
@property(nonatomic) __weak id <UITextInput> textInput; // @synthesize textInput=_textInput;
- (void).cxx_destruct;
- (void)backspaceTapped;
- (void)clearTapped;
- (void)returnTapped;
- (void)dismissTapped;
- (void)digitTapped:(id)arg1;
- (void)buttonTapped:(id)arg1;
@property(readonly, nonatomic) _Bool enableInputClicksWhenVisible;
- (void)click:(id)arg1;
- (void)checkInput:(id)arg1;
- (void)layoutSubviews;
- (void)createButtons;
@property(readonly, nonatomic) long long mode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

