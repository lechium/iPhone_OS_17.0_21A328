//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class DayNavigationWeekScrollView, DayTwoPartLabel, NSCalendar, NSDate, NSString, NSTimeZone, ScrollSpringFactory, UILabel;
@protocol DayNavigationViewDelegate;

@interface DayNavigationView : UIView
{
    NSCalendar *_calendar;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
    NSDate *_selectedDate;	// 24 = 0x18
    NSDate *_currentWeekDayLabelDate;	// 32 = 0x20
    ScrollSpringFactory *_springFactory;	// 40 = 0x28
    DayNavigationWeekScrollView *_weekScrollView;	// 48 = 0x30
    DayTwoPartLabel *_weekDayLabel;	// 56 = 0x38
    DayTwoPartLabel *_fadingWeekDayLabel;	// 64 = 0x40
    UILabel *;	// 72 = 0x48
    UILabel *_fadingWeekNumberLabel;	// 80 = 0x50
    UIView *_weekNumberLabelBackgroundView;	// 88 = 0x58
    _Bool _showWeekNumber;	// 96 = 0x60
    _Bool _showOverlayCalendar;	// 97 = 0x61
    id <DayNavigationViewDelegate> _delegate;	// 104 = 0x68
    double _sideMargin;	// 112 = 0x70
    struct UIEdgeInsets _paletteSafeAreaInsets;	// 120 = 0x78
}

+ (id)_weekNumberFont;	// IMP=0x002000000010c643
+ (id)_weekdayFont;	// IMP=0x001000000010c59c
+ (id)_normalWeekdayFont;	// IMP=0x001000000010c555
+ (id)_smallWeekdayFont;	// IMP=0x001000000010c50e
+ (id)_weekdayFontOfSize:(double)arg1;	// IMP=0x001000000010c4f5
- (void).cxx_destruct;	// IMP=0x002000000010d1b7
@property(nonatomic) struct UIEdgeInsets paletteSafeAreaInsets; // @synthesize paletteSafeAreaInsets=_paletteSafeAreaInsets;
@property(nonatomic) double sideMargin; // @synthesize sideMargin=_sideMargin;
@property(nonatomic) _Bool showOverlayCalendar; // @synthesize showOverlayCalendar=_showOverlayCalendar;
@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
@property(nonatomic) __weak id <DayNavigationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animateView:(id)arg1 toAlpha:(double)arg2;	// IMP=0x001000000010d0ee
- (id)_animateView:(id)arg1 toPosition:(struct CGPoint)arg2 setDelegate:(_Bool)arg3;	// IMP=0x001000000010d0d1
- (void)_updateLabelsWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000010d023
- (void)_updateLabels:(long long)arg1;	// IMP=0x001000000010c729
- (void)_stopPulsingToday;	// IMP=0x001000000010c4d8
- (void)pulseToday;	// IMP=0x001000000010c4bb
- (_Bool)canAnimateToDate:(id)arg1;	// IMP=0x001000000010c49e
- (void)contentSizeCategoryChanged;	// IMP=0x001000000010c465
- (void)significantTimeChangeOccurred;	// IMP=0x001000000010c448
- (void)setCalendar:(id)arg1;	// IMP=0x001000000010c350
- (void)setSelectedDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000010c1df
@property(readonly, nonatomic) UILabel *weekNumberLabel;
- (void)_updateFontSizes;	// IMP=0x001000000010c0c1
@property(readonly, nonatomic) DayTwoPartLabel *weekDayLabel;
@property(readonly, nonatomic) DayNavigationWeekScrollView *weekScrollView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x001000000010bc5b
- (void)animationDidStart:(id)arg1;	// IMP=0x001000000010bc55
- (id)dayNavigationWeekScrollView:(id)arg1 dayDataForDate:(id)arg2;	// IMP=0x001000000010bbaf
- (_Bool)dayNavigationWeekScrollViewIsLoadingSpecialDayData:(id)arg1;	// IMP=0x001000000010bb38
- (void)dayNavigationWeekScrollView:(id)arg1 didChangeCellWidth:(double)arg2;	// IMP=0x001000000010baaf
- (void)dayNavigationWeekScrollView:(id)arg1 selectedDateChanged:(id)arg2;	// IMP=0x001000000010ba06
- (void)dayNavigationWeekScrollViewFailedToSelectDate:(CDUnknownBlockType)arg1;	// IMP=0x001000000010b97b
- (_Bool)dayNavigationWeekScrollViewAllowedToChangeSelectedDate;	// IMP=0x001000000010b8ff
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x001000000010b8de
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x001000000010b89b
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000010b865
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x001000000010b814
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x001000000010b7c3
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x001000000010b4b6
- (void)willTransitionToSize;	// IMP=0x001000000010b499
- (void)setBackgroundColor:(id)arg1;	// IMP=0x001000000010b3bd
- (void)layoutSubviews;	// IMP=0x001000000010a781
- (void)layoutMarginsDidChange;	// IMP=0x001000000010a740
- (void)_updateWeekDayLabelLayout;	// IMP=0x001000000010a4cc
- (struct CGRect)_frameForWeekDayLabel:(id)arg1;	// IMP=0x001000000010a1da
- (_Bool)_shouldLeftAlignWeekNumber;	// IMP=0x001000000010a191
- (_Bool)_shouldCenterWeekNumberTogetherWithWeekday;	// IMP=0x001000000010a156
- (double)_weekNumberRightEdge;	// IMP=0x001000000010a06d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000109eaf
- (void)_dayTimeViewHourWidthChanged;	// IMP=0x0010000000109e9d
- (void)dealloc;	// IMP=0x0010000000109e1b
- (id)initWithCalendar:(id)arg1 selectedDate:(id)arg2 cellFactory:(id)arg3 showWeekdayLabel:(_Bool)arg4 eventSpringLoadingEnabled:(_Bool)arg5;	// IMP=0x0010000000109a86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

