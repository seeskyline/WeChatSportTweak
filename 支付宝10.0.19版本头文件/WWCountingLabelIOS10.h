//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWCountingLabel.h"

@interface WWCountingLabelIOS10 : WWCountingLabel
{
    id <ALPTextDelegate> _textDrawDelegate;
}

+ (Class)layerClass;
@property(nonatomic) __weak id <ALPTextDelegate> textDrawDelegate; // @synthesize textDrawDelegate=_textDrawDelegate;
- (void).cxx_destruct;
- (void)stopAnimation:(_Bool)arg1;
- (void)count:(_Bool)arg1;
- (void)count:(_Bool)arg1 withDuration:(double)arg2;
- (void)setScrollFormat:(id)arg1;
- (void)setTextDelegate:(id)arg1;
- (_Bool)isValid:(id)arg1 pattern:(id)arg2;
- (void)setEndValue:(id)arg1;
- (void)updateTextAlignment:(long long)arg1 withTextColor:(id)arg2 withFont:(id)arg3;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

