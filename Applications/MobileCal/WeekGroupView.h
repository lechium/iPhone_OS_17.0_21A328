//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSCalendar, NSDateComponents, NSString, NSTimeZone, WeekView;
@protocol WeekGroupViewDelegate;

@interface WeekGroupView : UIView
{
    WeekView *_weekView;	// 8 = 0x8
    UIView *_gutterView;	// 16 = 0x10
    _Bool _showsTimeMarker;	// 24 = 0x18
    _Bool _asyncLoading;	// 25 = 0x19
    id <WeekGroupViewDelegate> _delegate;	// 32 = 0x20
    long long _week;	// 40 = 0x28
    NSDateComponents *_highlightedDateComponents;	// 48 = 0x30
}

+ (double)standardWidthForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x0020000000070429
- (void).cxx_destruct;	// IMP=0x0020000000071cc7
@property _Bool asyncLoading; // @synthesize asyncLoading=_asyncLoading;
@property(retain, nonatomic) NSDateComponents *highlightedDateComponents; // @synthesize highlightedDateComponents=_highlightedDateComponents;
@property(nonatomic) long long week; // @synthesize week=_week;
@property(nonatomic) _Bool showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
@property(readonly, nonatomic) WeekView *weekView; // @synthesize weekView=_weekView;
@property(nonatomic) __weak id <WeekGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)weekViewFirstVisibleSecondChanged:(long long)arg1;	// IMP=0x0010000000071b9a
- (void)weekViewOccurrenceLayoutDidChange:(id)arg1;	// IMP=0x0010000000071b10
- (void)weekViewDidLayout:(id)arg1;	// IMP=0x0010000000071a86
- (void)emptySpaceClickedOnDate:(id)arg1;	// IMP=0x00100000000719f9
- (void)emptySpaceClick;	// IMP=0x0010000000071984
- (void)setHourHeightScale:(double)arg1;	// IMP=0x0010000000071967
- (id)occurrenceViewAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000718d0
- (id)viewForEvent:(id)arg1;	// IMP=0x00100000000718b3
- (_Bool)scrollerIsParentOfView:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x0010000000071896
- (void)addViewToScroller:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x0010000000071879
- (struct CGPoint)pointAtDate:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x0010000000071833
- (_Bool)containsDate:(id)arg1;	// IMP=0x0010000000071816
- (id)dateAtPoint:(struct CGPoint)arg1 isAllDay:(_Bool *)arg2 requireAllDayRegionInsistence:(_Bool)arg3;	// IMP=0x001000000007150d
- (id)dateForXOffset:(double)arg1;	// IMP=0x001000000007146f
- (long long)_secondAtPosition:(double)arg1;	// IMP=0x00100000000713d4
- (void)weekView:(id)arg1 didSelectEvent:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000071337
- (void)loadDataAsyncWithCompletion:(CDUnknownBlockType)arg1 reverse:(_Bool)arg2;	// IMP=0x0010000000071278
- (void)reloadData;	// IMP=0x001000000007125b
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(copy, nonatomic) NSCalendar *calendar;
- (id)highlightedCalendarDateComponents;	// IMP=0x00100000000711ca
@property(copy, nonatomic) NSDateComponents *weekStartDate;
- (id)selectedEventsForEditMenu;	// IMP=0x00100000000710f7
- (id)presentationControllerForEditMenu;	// IMP=0x00100000000710b1
- (id)weekViewForWeekAfter:(id)arg1;	// IMP=0x0010000000070ff5
- (id)weekViewForWeekBefore:(id)arg1;	// IMP=0x0010000000070f39
- (void)weekView:(id)arg1 receivedTapInAllDayAreaOnDate:(id)arg2;	// IMP=0x0010000000070ea5
- (void)weekViewAllDaySectionDidScroll:(id)arg1;	// IMP=0x0010000000070e1b
- (void)weekViewDidEndDecelerating:(id)arg1;	// IMP=0x0010000000070d91
- (void)weekViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0010000000070cff
- (void)weekViewDidScroll:(id)arg1;	// IMP=0x0010000000070c75
- (void)weekViewDidBeginDragging:(id)arg1;	// IMP=0x0010000000070beb
- (void)adjustForVisibleRect:(struct CGRect)arg1;	// IMP=0x0010000000070b48
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000070aae
- (double)gutterWidth;	// IMP=0x0010000000070a71
- (void)showOverlayMonthInCellAtOffset:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000709e9
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0010000000070914
- (void)layoutSubviews;	// IMP=0x00100000000707da
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 targetWindow:(id)arg3 rightClickDelegate:(id)arg4;	// IMP=0x0010000000070462

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
