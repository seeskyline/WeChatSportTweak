//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class H5MonthYearPickerView, H5PickerView, NSDate, NSString, UIDatePicker, UIView;

@interface H5DatePicker : NSObject <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIView *_superView;
    _Bool _isIDCard;
    NSString *_target;
    UIView *_dateView;
    UIView *_maskView;
    H5PickerView *_pickerView;
    UIDatePicker *_datePicker;
    H5MonthYearPickerView *_monthYearPicker;
    CDUnknownBlockType _clickCallback;
    long long _mode;
    NSDate *_minDate;
    NSDate *_maxDate;
    long long _minuteInterval;
    NSDate *_beginDate;
    NSString *_format;
}

@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(nonatomic) _Bool isIDCard; // @synthesize isIDCard=_isIDCard;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(retain, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) CDUnknownBlockType clickCallback; // @synthesize clickCallback=_clickCallback;
@property(nonatomic) __weak H5MonthYearPickerView *monthYearPicker; // @synthesize monthYearPicker=_monthYearPicker;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak H5PickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)compelteDatePicker;
- (void)hideDatePicker;
- (void)cancelDatePicker;
- (void)destroy;
- (void)longPeriodTap;
- (void)showDatePickerInview:(id)arg1 clickOkButtonBlock:(CDUnknownBlockType)arg2;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

