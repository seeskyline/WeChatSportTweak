//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSString, NSTimer, UIButton, UIFont, UILabel;

@interface MBProgressHUD : UIView
{
    _Bool useAnimation;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    UILabel *label;
    UILabel *detailsLabel;
    _Bool isFinished;
    struct CGAffineTransform rotationTransform;
    _Bool square;
    _Bool dimBackground;
    _Bool taskInProgress;
    _Bool removeFromSuperViewOnHide;
    int animationType;
    float opacity;
    float xOffset;
    float yOffset;
    float margin;
    float graceTime;
    float minShowTime;
    int mode;
    float progress;
    id <MBProgressHUDDelegate> delegate;
    UIFont *labelFont;
    UIFont *detailsLabelFont;
    UIView *indicator;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    UIView *customView;
    NSDate *showStarted;
    NSString *labelText;
    NSString *detailsLabelText;
    UIButton *confirmButton;
    struct CGSize minSize;
    struct CGSize size;
}

+ (id)allHUDsForView:(id)arg1;
+ (id)HUDForView:(id)arg1;
+ (unsigned long long)hideAllHUDsForView:(id)arg1 animated:(_Bool)arg2;
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
+ (id)sw_showHUDAddedTo:(id)arg1;
@property(nonatomic) UIButton *confirmButton; // @synthesize confirmButton;
@property struct CGSize size; // @synthesize size;
@property float progress; // @synthesize progress;
@property(copy) NSString *detailsLabelText; // @synthesize detailsLabelText;
@property(copy) NSString *labelText; // @synthesize labelText;
@property int mode; // @synthesize mode;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property(retain) UIView *customView; // @synthesize customView;
@property _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property _Bool taskInProgress; // @synthesize taskInProgress;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
@property float minShowTime; // @synthesize minShowTime;
@property float graceTime; // @synthesize graceTime;
@property _Bool dimBackground; // @synthesize dimBackground;
@property float margin; // @synthesize margin;
@property(getter=isSquare) _Bool square; // @synthesize square;
@property struct CGSize minSize; // @synthesize minSize;
@property float yOffset; // @synthesize yOffset;
@property float xOffset; // @synthesize xOffset;
@property(retain) UIView *indicator; // @synthesize indicator;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property float opacity; // @synthesize opacity;
@property __weak id <MBProgressHUDDelegate> delegate; // @synthesize delegate;
@property int animationType; // @synthesize animationType;
- (void).cxx_destruct;
- (void)setTransformForCurrentOrientation:(_Bool)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (void)updateUIForKeypath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateIndicators;
- (void)setupLabels;
- (void)cleanUp;
- (void)launchExecution;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(_Bool)arg4;
- (void)done;
- (void)animationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)hideUsingAnimation:(_Bool)arg1;
- (void)showUsingAnimation:(_Bool)arg1;
- (void)handleMinShowTimer:(id)arg1;
- (void)handleGraceTimer:(id)arg1;
- (void)hideDelayed:(id)arg1;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sw_hideAfter:(double)arg1;

@end

