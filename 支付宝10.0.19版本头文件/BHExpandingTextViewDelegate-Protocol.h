//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHExpandingTextView, NSString;

@protocol BHExpandingTextViewDelegate <NSObject>

@optional
- (_Bool)expandingTextViewShouldReturn:(BHExpandingTextView *)arg1;
- (void)expandingTextViewDidChangeSelection:(BHExpandingTextView *)arg1;
- (void)expandingTextView:(BHExpandingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)expandingTextView:(BHExpandingTextView *)arg1 willChangeHeight:(float)arg2;
- (void)expandingTextViewDidChange:(BHExpandingTextView *)arg1;
- (_Bool)expandingTextView:(BHExpandingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)expandingTextViewDidEndEditing:(BHExpandingTextView *)arg1;
- (void)expandingTextViewDidBeginEditing:(BHExpandingTextView *)arg1;
- (_Bool)expandingTextViewShouldEndEditing:(BHExpandingTextView *)arg1;
- (_Bool)expandingTextViewShouldBeginEditing:(BHExpandingTextView *)arg1;
@end

