//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UICalendarSelectionSingleDate, UICalendarView, UIDatePicker, _UIDatePickerCalendarTimeView, _UIDatePickerDataModel, _UIDatePickerStyle;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarView : UIView
{
    struct {
        unsigned int needsUpdateDate:1;
        unsigned int animateUpdateDate:1;
        unsigned int isEnabled:1;
    } _flags;	// 8 = 0x8
    _UIDatePickerStyle *_visualStyle;	// 16 = 0x10
    UICalendarView *_calendarView;	// 24 = 0x18
    UICalendarSelectionSingleDate *_selection;	// 32 = 0x20
    _UIDatePickerCalendarTimeView *_timeView;	// 40 = 0x28
    struct CGSize _lastSize;	// 48 = 0x30
    unsigned long long _stateUpdatesInFlight;	// 64 = 0x40
    UIDatePicker *_datePicker;	// 72 = 0x48
    _UIDatePickerDataModel *_data;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000016140e
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (id)primaryFirstResponder;	// IMP=0x000000000016131c
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x00000000001612f5
- (_Bool)hasDefaultSize;	// IMP=0x00000000001612ed
- (struct CGSize)defaultSize;	// IMP=0x00000000001612d7
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001612c1
- (_Bool)usesAutoLayout;	// IMP=0x00000000001612b9
@property(readonly, nonatomic) struct UIEdgeInsets appliedInsetsToEdgeOfContent;
- (void)didChangeCustomFontDesign;	// IMP=0x000000000016113b
- (void)didChangeToday;	// IMP=0x0000000000161129
- (void)didReset;	// IMP=0x0000000000161117
- (void)didChangeRoundsToMinuteInterval;	// IMP=0x00000000001610d3
- (void)didChangeMinuteInterval;	// IMP=0x000000000016108f
- (void)didChangeMaximumDate;	// IMP=0x000000000016107d
- (void)didChangeMinimumDate;	// IMP=0x000000000016106b
- (void)displaySelectedDateAnimated:(_Bool)arg1;	// IMP=0x0000000000161009
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000160ff5
- (void)didChangeCalendar;	// IMP=0x0000000000160fe3
- (void)didChangeTimeZone;	// IMP=0x0000000000160fd1
- (void)didChangeLocale;	// IMP=0x0000000000160fbf
- (void)didChangeMode;	// IMP=0x0000000000160f58
@property(readonly, nonatomic) long long datePickerStyle;
- (id)createDatePickerForTimeView:(id)arg1;	// IMP=0x0000000000160e45
- (void)timeViewDidEndEditing:(id)arg1;	// IMP=0x0000000000160df8
- (void)timeViewDidBeginEditing:(id)arg1;	// IMP=0x0000000000160dbb
- (void)timeViewWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000160da9
- (void)timeView:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x0000000000160d8f
- (_Bool)dateSelection:(id)arg1 canSelectDate:(id)arg2;	// IMP=0x0000000000160d83
- (void)dateSelection:(id)arg1 didSelectDate:(id)arg2;	// IMP=0x0000000000160c11
- (void)_updateSelectedTime:(id)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000160b03
- (void)_updateSelectedDay:(id)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x0000000000160a7b
- (void)_updateSelectedDay:(id)arg1 time:(id)arg2 animated:(_Bool)arg3 notify:(_Bool)arg4;	// IMP=0x0000000000160654
- (void)_updateTimeViewForSelectedDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000160637
- (_Bool)_shouldUpdateTimeViewForSelectedTime:(id)arg1;	// IMP=0x00000000001605bd
- (void)_updateDataForComponents:(id)arg1;	// IMP=0x0000000000160557
- (_Bool)_shouldUpdateDataForComponents:(id)arg1 date:(id)arg2;	// IMP=0x00000000001604dd
- (void)_updateCustomFonts;	// IMP=0x0000000000160457
- (void)_updateModuleVisibility;	// IMP=0x00000000001602cb
- (_Bool)_shouldDisplayTimeView;	// IMP=0x0000000000160291
- (_Bool)_shouldDisplayCalendarView;	// IMP=0x0000000000160259
- (void)_updateEnabledStyling;	// IMP=0x00000000001601a3
- (void)_reload;	// IMP=0x0000000000160005
- (void)_reloadCalendarView;	// IMP=0x000000000015fd11
- (void)_reloadTimeView;	// IMP=0x000000000015fc3e
- (void)_reloadDateRange;	// IMP=0x000000000015fb93
- (void)_updateDate;	// IMP=0x000000000015f9f9
- (void)_updateDateIfNeeded;	// IMP=0x000000000015f9d8
- (void)_setNeedsUpdateDateAnimated:(_Bool)arg1;	// IMP=0x000000000015f9af
- (void)_updateContentSizeLimitations;	// IMP=0x000000000015f8b8
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000015f826
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000015f60b
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x000000000015f2fd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000015f2eb
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;	// IMP=0x000000000015f2e0
- (void)layoutSubviews;	// IMP=0x000000000015edc0
- (void)layoutMarginsDidChange;	// IMP=0x000000000015ed7f
- (void)_updateLayoutMargins;	// IMP=0x000000000015ecb9
- (void)_workaround66574039_datePickerDidUpdateLayoutMargins;	// IMP=0x000000000015ebf4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000015e9f4

// Remaining properties
@property(readonly, nonatomic) double contentWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) double timeInterval;

@end

