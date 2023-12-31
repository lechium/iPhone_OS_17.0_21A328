//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CUIKCalendarModel, CarplayNoEventsView, CarplayTableViewSection, EKCalendarVisibilityManager, NSArray, NSMutableDictionary, NSMutableSet, NSString, UITableView;

@interface CarplayListViewController : UIViewController
{
    CUIKCalendarModel *_model;	// 8 = 0x8
    EKCalendarVisibilityManager *_visibilityManager;	// 16 = 0x10
    CarplayNoEventsView *_noEventsView;	// 24 = 0x18
    UITableView *_listView;	// 32 = 0x20
    CarplayTableViewSection *_todaySection;	// 40 = 0x28
    CarplayTableViewSection *_tomorrowSection;	// 48 = 0x30
    NSArray *_sections;	// 56 = 0x38
    NSMutableSet *_changedObjectIDs;	// 64 = 0x40
    _Bool _needsForceRefresh;	// 72 = 0x48
    NSMutableDictionary *_calendarColorMapping;	// 80 = 0x50
    _Bool _showingTomorrowSection;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000275dd
@property(nonatomic) _Bool showingTomorrowSection; // @synthesize showingTomorrowSection=_showingTomorrowSection;
- (void)_forceUpdateCell:(id)arg1;	// IMP=0x0010000000027573
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000027521
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000000274cf
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000002739c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002728b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000027239
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000000271a8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x001000000002714a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000027131
- (id)_allDayOccurrences:(long long)arg1;	// IMP=0x00100000000270b1
- (id)_timedOccurrences:(long long)arg1;	// IMP=0x0010000000027031
- (id)_allFetchedOccurrences:(long long)arg1;	// IMP=0x0010000000026fb1
- (_Bool)_anyOccurrencesAvailable:(long long)arg1;	// IMP=0x0010000000026f69
- (id)_currentDateComponents;	// IMP=0x0010000000026ec5
- (void)_showListView;	// IMP=0x0010000000026b01
- (void)_showNoEventsView;	// IMP=0x0010000000026727
- (void)_setShowingNoEventsMode:(_Bool)arg1;	// IMP=0x00100000000266c7
- (void)_updateContent;	// IMP=0x00100000000259e7
- (void)_loadAndShowAppropriateContentView;	// IMP=0x00100000000259b6
- (_Bool)_shouldShowNoEventsView;	// IMP=0x001000000002596a
- (_Bool)_shouldShowTomorrowSection;	// IMP=0x00100000000258e8
- (void)_setViewStatesForCachedEventCollection;	// IMP=0x00100000000258ba
- (void)_eventFetchCompleted;	// IMP=0x0010000000025859
- (void)_refreshTodayView;	// IMP=0x00100000000257e9
- (void)_focusModeConfigurationChanged;	// IMP=0x001000000002577d
- (void)_localeChanged;	// IMP=0x001000000002571c
- (void)_contentCategorySizeChanged:(id)arg1;	// IMP=0x00100000000256bb
- (void)_significantTimeChange:(id)arg1;	// IMP=0x0010000000025584
- (void)_databaseDidChange:(id)arg1;	// IMP=0x001000000002544e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000252ee
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000025143
- (id)_createListView;	// IMP=0x00100000000250a2
- (void)setViewControllerTitleForSelectedEventInSection:(long long)arg1;	// IMP=0x0010000000024f77
- (void)scrollToDate:(id)arg1;	// IMP=0x0010000000024c82
- (long long)sectionForEvent:(id)arg1;	// IMP=0x0010000000024b81
- (id)initWithModel:(id)arg1;	// IMP=0x001000000002479b
- (id)sharedManager;	// IMP=0x00100000000246b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

