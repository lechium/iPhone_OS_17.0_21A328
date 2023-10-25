//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompactMonthListViewController, CompactMonthWeekView, EKCalendarDate, LargeDayNavigationWrapperView, ListViewController, NSCalendar, NSString, NSTimer, PaletteView, TappableDayNumber, UIButton, UILongPressGestureRecognizer, UINavigationController, UITapGestureRecognizer, UIView, UIViewController;

@interface MultiColumnMonthViewController
{
    EKCalendarDate *_pressedDay;	// 16 = 0x10
    TappableDayNumber *_pressHighlight;	// 24 = 0x18
    CompactMonthWeekView *_pressedMonthView;	// 32 = 0x20
    CompactMonthWeekView *_selectedMonthWeekView;	// 40 = 0x28
    UIView *_listViewContainer;	// 48 = 0x30
    CompactMonthListViewController *_singleDayListViewController;	// 56 = 0x38
    ListViewController *_multiDayListViewController;	// 64 = 0x40
    NSCalendar *_weekCalculationCalendar;	// 72 = 0x48
    UIView *_dividerLineBetweenListAndMonth;	// 80 = 0x50
    UIView *_dividerLineBetweenListAndEventDetails;	// 88 = 0x58
    _Bool _shouldSetSelectedDate;	// 96 = 0x60
    _Bool _hasSetInitialSelectedDate;	// 97 = 0x61
    _Bool _isRotating;	// 98 = 0x62
    _Bool _loadingOccurrenceCache;	// 99 = 0x63
    _Bool _currentlyVisible;	// 100 = 0x64
    _Bool _needToReloadEventsOnAppear;	// 101 = 0x65
    _Bool _eventLoadingSuspendedForScroll;	// 102 = 0x66
    _Bool _reloadAfterStoppedScrolling;	// 103 = 0x67
    EKCalendarDate *_navigationBarDisplayedDate;	// 104 = 0x68
    _Bool _editorDismissedFromDelete;	// 112 = 0x70
    _Bool _editorPresentedProgramatically;	// 113 = 0x71
    _Bool _listViewContainerDidScrollMessagesSuppressed;	// 114 = 0x72
    _Bool _viewingEventDetailsColumn;	// 115 = 0x73
    UIButton *_cancelEventDetailViewModeButton;	// 120 = 0x78
    PaletteView *_palette;	// 128 = 0x80
    UINavigationController *_eventDetailsColumnNavigationController;	// 136 = 0x88
    UIViewController *_blankViewController;	// 144 = 0x90
    LargeDayNavigationWrapperView *_navigationWrapperView;	// 152 = 0x98
    UIViewController *_currentDetailsView;	// 160 = 0xa0
    NSTimer *_refreshTimer;	// 168 = 0xa8
    UITapGestureRecognizer *_dayCellsTapGestureRecognizer;	// 176 = 0xb0
    UILongPressGestureRecognizer *_dayCellsScrubbingGestureRecognizer;	// 184 = 0xb8
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0020000000128ff4
- (void).cxx_destruct;	// IMP=0x0020000000130880
@property(retain, nonatomic) UILongPressGestureRecognizer *dayCellsScrubbingGestureRecognizer; // @synthesize dayCellsScrubbingGestureRecognizer=_dayCellsScrubbingGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *dayCellsTapGestureRecognizer; // @synthesize dayCellsTapGestureRecognizer=_dayCellsTapGestureRecognizer;
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x001000000013082e
- (_Bool)listViewControllerContainerHandlesShowEvent;	// IMP=0x0010000000130826
- (void)listViewController:(id)arg1 didScrollToDate:(id)arg2;	// IMP=0x001000000013054a
- (_Bool)wantsScrollingMessagesOnEveryFrameFromListViewController:(id)arg1;	// IMP=0x0010000000130536
- (void)compactMonthListViewController:(id)arg1 didSelectEvent:(id)arg2 showMode:(unsigned long long)arg3;	// IMP=0x0010000000130519
- (void)compactMonthListViewController:(id)arg1 wantsToCommitViewControllerFromPreview:(id)arg2;	// IMP=0x00100000001304bc
- (void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(_Bool)arg2;	// IMP=0x00100000001304ac
- (void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2;	// IMP=0x00100000001303c8
- (void)eventViewControllerWillDisappear:(id)arg1;	// IMP=0x00100000001303a6
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x0010000000130279
- (void)_showDetailsForEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x001000000012ffdc
- (void)_autoSelectEvent;	// IMP=0x001000000012fe8b
- (_Bool)_shouldDisplayThreeColumns;	// IMP=0x001000000012fe83
- (_Bool)_threeColumnsDisplayIsAllowed;	// IMP=0x001000000012fe7b
- (void)_cancelEventDetailViewModeButtonPressed:(id)arg1;	// IMP=0x001000000012fe64
- (void)_updateListViewFrame;	// IMP=0x001000000012fb8b
- (struct CGRect)frameOfListView;	// IMP=0x001000000012fb4d
- (_Bool)_listViewShowsSingleDay;	// IMP=0x001000000012fae0
- (void)_updateListViewModeForCurrentTraits;	// IMP=0x001000000012f9ab
- (void)_setupListViewController;	// IMP=0x001000000012f6a4
- (void)_updateInfiniteScrollViewFrame;	// IMP=0x001000000012f4c0
- (long long)eventCountDisplayedForDate:(id)arg1;	// IMP=0x001000000012f329
- (id)monthWeekViewForCalendarDate:(id)arg1;	// IMP=0x001000000012f317
- (double)_showDateVerticalOffsetWithVerticalCompression:(_Bool)arg1;	// IMP=0x001000000012f22c
- (double)showDateVerticalOffset;	// IMP=0x001000000012f1fb
- (double)decelerationDistanceThresholdToStopShowingMonthBanner;	// IMP=0x001000000012f1bf
- (double)decelerationDistanceThresholdForDisplayingMonthBanner;	// IMP=0x001000000012f183
- (double)decelerationDistanceThresholdForPreferringMonthBoundary;	// IMP=0x001000000012f147
- (double)showDateVerticalOffsetForDate:(id)arg1;	// IMP=0x001000000012f0e7
- (double)topInsetForSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000012f05b
- (double)heightForSubviewWithCalendarDate:(id)arg1;	// IMP=0x001000000012efbd
- (struct CGRect)frameForTodayHighlight;	// IMP=0x001000000012ee0c
- (struct CGRect)frameForWeekContainingDate:(id)arg1;	// IMP=0x001000000012ec65
- (id)nextLevelWeekViewControllerWithDate:(id)arg1;	// IMP=0x001000000012ebde
- (id)pushedWeekViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000012eb6f
- (void)_refreshListView;	// IMP=0x001000000012eb52
- (void)_updateTimerFired;	// IMP=0x001000000012eb40
- (void)_invalidateUpdateTimer;	// IMP=0x001000000012eb08
- (void)_startUpdateTimer;	// IMP=0x001000000012e91e
- (double)detailsRightInsetAdjustment;	// IMP=0x001000000012e915
- (double)detailsLeftInsetAdjustment;	// IMP=0x001000000012e90c
- (double)rightSplitViewSideInset;	// IMP=0x001000000012e8c6
- (void)_resetPaletteState;	// IMP=0x001000000012e881
- (void)_setPaletteDisplaced;	// IMP=0x001000000012e839
- (void)_slideToHideEventDetailsAnimated:(_Bool)arg1;	// IMP=0x001000000012e58a
- (void)_slideToAnimatePalleteShowingBackButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000012e3c4
- (void)_slideToShowEventDetails:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000012de42
- (void)_updateEventDetailsColumnViewFrame;	// IMP=0x000000000012dc1e
- (void)_createEventDetailsColumn;	// IMP=0x001000000012da3b
- (_Bool)_viewingEventDetailsColumn;	// IMP=0x001000000012da18
- (_Bool)_allowedToDisplayEventDetailsColumn;	// IMP=0x001000000012d992
- (double)_scrollViewVerticalVelocity;	// IMP=0x001000000012d849
- (_Bool)_shouldAnimateDots;	// IMP=0x001000000012d817
- (id)_loadEventsForStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x001000000012cb45
- (void)_loadEventsForAllSubviews;	// IMP=0x001000000012c976
- (void)_loadEventsForViewsInRangeStartingAt:(id)arg1 endingAt:(id)arg2;	// IMP=0x001000000012c6f9
- (void)_occurrencesChanged:(id)arg1;	// IMP=0x001000000012c5e0
- (void)_cachedOccurrencesChanged:(id)arg1;	// IMP=0x001000000012c5b4
- (double)_listviewColumnCollapsedWidth;	// IMP=0x001000000012c539
- (void)_setSelectedDay:(id)arg1 onMonthWeekView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000012c482
- (void)_setSelectedDay:(id)arg1;	// IMP=0x001000000012c3d1
- (void)_removeMonthHighlight;	// IMP=0x001000000012c263
- (void)_createMonthHighlightForMonthView:(id)arg1 day:(id)arg2;	// IMP=0x001000000012c1a8
- (id)_dayInMonth:(id)arg1 fromGesture:(id)arg2;	// IMP=0x001000000012c143
- (void)monthView:(id)arg1 gestureCancelled:(id)arg2;	// IMP=0x001000000012c0e6
- (void)monthView:(id)arg1 gestureEnded:(id)arg2;	// IMP=0x001000000012be78
- (void)monthView:(id)arg1 gestureChanged:(id)arg2;	// IMP=0x001000000012bcbf
- (void)monthView:(id)arg1 gestureBegan:(id)arg2;	// IMP=0x001000000012ba61
- (id)_viewFromGesture:(id)arg1;	// IMP=0x001000000012b643
- (void)_scrollListToNewSelectedDateAnimated:(_Bool)arg1;	// IMP=0x001000000012b53e
- (void)_scrubGestureCallback:(id)arg1;	// IMP=0x001000000012b2e7
- (void)_tapGestureCallback:(id)arg1;	// IMP=0x001000000012b05d
- (void)infiniteScrollViewSafeAreasDidChange;	// IMP=0x001000000012af96
- (void)showDate:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000012acc1
- (void)showDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000012ac83
- (void)didScroll;	// IMP=0x001000000012ac47
- (void)willEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;	// IMP=0x001000000012a3a8
- (void)didEndScrolling;	// IMP=0x001000000012a20c
- (_Bool)shouldUpdateSelectedDateWithCentralView;	// IMP=0x001000000012a204
- (id)newBottomViewBelowViewWithCalendarDate:(id)arg1;	// IMP=0x0010000000129e61
- (id)newTopViewAboveViewWithCalendarDate:(id)arg1;	// IMP=0x0010000000129ac2
- (id)createInitialViewForDate:(id)arg1;	// IMP=0x00100000001296eb
- (unsigned long long)maximumCachedReusableViews;	// IMP=0x00100000001296e0
- (_Bool)_monthWeekViewsUseHorizontalCompression;	// IMP=0x00100000001296d8
- (_Bool)_monthWeekViewsUseVerticalCompression;	// IMP=0x001000000012968f
- (id)preferredPreSizeClassTransitionSelectedDate;	// IMP=0x00100000001295f5
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x00100000001295ed
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x00100000001295e5
- (long long)intendedSizeClass;	// IMP=0x00100000001295da
- (void)updateNavigationBarDisplayedDateString;	// IMP=0x001000000012944a
- (int)supportedToggleMode;	// IMP=0x0010000000129442
- (id)bestDateForNewEvent;	// IMP=0x0010000000129422
- (void)updatePalette:(id)arg1;	// IMP=0x0010000000129360
- (double)palleteViewXOffset;	// IMP=0x00100000001292d3
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x001000000012920a
- (long long)presentationStyleOverrideForChildViewControllers;	// IMP=0x00100000001291ff
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000128ffc
- (unsigned long long)edgesForExtendedLayout;	// IMP=0x0010000000128fec
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000128f21
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000128e66
- (void)setupUIForTraitCollection:(id)arg1;	// IMP=0x0010000000128d7d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000128c52
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000128b01
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000012871c
- (void)viewDidLoad;	// IMP=0x0010000000128608
- (void)loadView;	// IMP=0x00100000001283ff
- (void)dealloc;	// IMP=0x001000000012834d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
