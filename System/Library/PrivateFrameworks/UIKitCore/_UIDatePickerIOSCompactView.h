//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSDateFormatter, NSDictionary, NSString, UIDatePicker, UILayoutGuide, UIPanGestureRecognizer, _UIDatePickerCompactDateLabel, _UIDatePickerCompactTimeLabel, _UIDatePickerDataModel, _UIDatePickerOverlayPresentation;

__attribute__((visibility("hidden")))
@interface _UIDatePickerIOSCompactView : UIControl
{
    struct {
        unsigned int isEnabled:1;
        unsigned int implementsCustomDidSelectComponent:1;
    } _flags;	// 128 = 0x80
    NSDateFormatter *_dateFormatterMedium;	// 136 = 0x88
    NSDateFormatter *_dateFormatterShort;	// 144 = 0x90
    UILayoutGuide *_timeViewLayoutGuide;	// 152 = 0x98
    UILayoutGuide *_contentLayoutGuide;	// 160 = 0xa0
    NSDateFormatter *_layoutFormatter;	// 168 = 0xa8
    _Bool _dateOnLeadingSide;	// 176 = 0xb0
    NSArray *_dateTimeConstraints;	// 184 = 0xb8
    _UIDatePickerOverlayPresentation *_presentation;	// 192 = 0xc0
    long long _activeComponent;	// 200 = 0xc8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 208 = 0xd0
    UIDatePicker *_datePicker;	// 216 = 0xd8
    _UIDatePickerDataModel *_data;	// 224 = 0xe0
    _UIDatePickerCompactDateLabel *_dateView;	// 232 = 0xe8
    _UIDatePickerCompactTimeLabel *_timeView;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000001496bb9
@property(readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeView; // @synthesize timeView=_timeView;
@property(readonly, nonatomic) _UIDatePickerCompactDateLabel *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (_Bool)hasDefaultSize;	// IMP=0x0000000001496b51
- (struct CGSize)defaultSize;	// IMP=0x0000000001496b3b
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000001496b25
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x0000000001496b01
- (_Bool)usesAutoLayout;	// IMP=0x0000000001496af9
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x0000000001496af1
@property(readonly, nonatomic) struct UIEdgeInsets appliedInsetsToEdgeOfContent;
- (void)didChangeToday;	// IMP=0x0000000001496acc
- (void)didReset;	// IMP=0x0000000001496a9e
- (void)didChangeRoundsToMinuteInterval;	// IMP=0x00000000014969e0
- (void)didChangeMinuteInterval;	// IMP=0x0000000001496924
- (void)didChangeMaximumDate;	// IMP=0x00000000014968a1
- (void)didChangeMinimumDate;	// IMP=0x000000000149681e
- (void)displaySelectedDateAnimated:(_Bool)arg1;	// IMP=0x0000000001496799
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000001496683
- (void)didChangeCalendar;	// IMP=0x00000000014965e9
- (void)didChangeTimeZone;	// IMP=0x000000000149654f
- (void)didChangeLocale;	// IMP=0x00000000014964b5
- (void)didChangeMode;	// IMP=0x0000000001496475
@property(readonly, nonatomic) long long datePickerStyle;
- (void)_reloadTimeViewTimeFormat;	// IMP=0x000000000149626b
- (void)updateTimeZoneDisplay;	// IMP=0x0000000001496259
@property(retain, nonatomic) NSDictionary *overrideAttributes;
- (void)_resignActiveComponentAnimated:(_Bool)arg1;	// IMP=0x000000000149616b
- (void)setActiveComponent:(long long)arg1;	// IMP=0x000000000149610e
- (void)_datePickerPresentation:(id)arg1 didChangeActiveMode:(long long)arg2;	// IMP=0x0000000001496044
- (void)didChangeCompactStyleDelegate;	// IMP=0x0000000001495fa7
- (id)createDatePickerForCompactDateLabel:(id)arg1;	// IMP=0x0000000001495db4
- (id)createDatePickerForCompactTimeLabel:(id)arg1;	// IMP=0x0000000001495cff
- (void)compactDateLabelDidEndEditing:(id)arg1;	// IMP=0x0000000001495ccb
- (void)compactDateLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000001495c97
- (_Bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000001495bf9
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000001495bb2
- (void)compactTimeLabelDidEndEditing:(id)arg1;	// IMP=0x0000000001495b26
- (void)compactTimeLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000001495af2
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x00000000014957e3
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000014957cf
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000014957ab
- (void)_didReceivePanGestureRecognizer:(id)arg1;	// IMP=0x0000000001495794
- (void)updateConstraints;	// IMP=0x00000000014926c0
- (void)tintColorDidChange;	// IMP=0x0000000001492618
@property(readonly, nonatomic) _Bool alignConstraintsToLayoutGuide;
- (void)_updateDateViewTextAlignment;	// IMP=0x0000000001492551
- (void)_updateEnabledStyling;	// IMP=0x00000000014924a9
- (void)_updateUI;	// IMP=0x000000000149205e
- (void)_updateDateBeforeTimeValue;	// IMP=0x0000000001491c9f
- (void)_contentSizeCategoryDidChange:(id)arg1 previousTraits:(id)arg2;	// IMP=0x0000000001491bbe
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000001491b6f
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000001491b20
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000149170e
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x00000000014916a0

// Remaining properties
@property(readonly, nonatomic) double contentWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) double timeInterval;

@end
