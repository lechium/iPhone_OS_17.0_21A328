//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MarkedLocationDataProvider, NSArray, NSString, RecentsDataFilter, RecentsDataProvider, SharedTripsDataProvider;
@protocol CarDestinationsCardViewControllerDelegate;

@interface CarDestinationsCardViewController
{
    _Bool _refreshQuickRouteManagers;	// 8 = 0x8
    _Bool _batchingUpdates;	// 9 = 0x9
    _Bool _needReloadSuggestionSection;	// 10 = 0xa
    _Bool _focusMovedFromFirstRow;	// 11 = 0xb
    _Bool _showCollectionsEntry;	// 12 = 0xc
    RecentsDataFilter *_recentsDataFilter;	// 16 = 0x10
    RecentsDataProvider *_recentsDataProvider;	// 24 = 0x18
    SharedTripsDataProvider *_sharedTripsDataProvider;	// 32 = 0x20
    MarkedLocationDataProvider *_markedLocationDataProvider;	// 40 = 0x28
    id <CarDestinationsCardViewControllerDelegate> _delegate;	// 48 = 0x30
    NSArray *_recents;	// 56 = 0x38
    NSArray *_sharedTripSummaries;	// 64 = 0x40
    NSArray *_suggestions;	// 72 = 0x48
    unsigned long long _siriSuggestionsCount;	// 80 = 0x50
    unsigned long long _recentsCount;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000b1982c
@property(nonatomic) unsigned long long recentsCount; // @synthesize recentsCount=_recentsCount;
@property(nonatomic) unsigned long long siriSuggestionsCount; // @synthesize siriSuggestionsCount=_siriSuggestionsCount;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSArray *sharedTripSummaries; // @synthesize sharedTripSummaries=_sharedTripSummaries;
@property(copy, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(nonatomic) __weak id <CarDestinationsCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000b195df
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000b193e6
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000b19032
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000b18d72
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0010000000b18b43
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000b18aa7
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0010000000b18a5a
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000b18992
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0010000000b187fa
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000b1877b
- (id)_titleForSection:(long long)arg1;	// IMP=0x0010000000b18628
- (void)_refreshNumberOfRowsInSection;	// IMP=0x0010000000b18423
- (_Bool)_shouldUpdateSection:(long long)arg1;	// IMP=0x0010000000b183bb
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000b1831c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000b18311
- (void)carMapsSuggestionControllerDidRefresh:(id)arg1;	// IMP=0x0010000000b1825a
- (_Bool)_shouldChangeToSuggestionEntries:(id)arg1;	// IMP=0x0010000000b1804d
- (void)setSuggestions:(id)arg1 reload:(_Bool)arg2;	// IMP=0x0010000000b17e55
- (id)uniqueName;	// IMP=0x0010000000b17e3b
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x0010000000b17e10
- (void)_buildRecents;	// IMP=0x0010000000b17ce7
- (void)_reloadRecents;	// IMP=0x0010000000b17bc9
- (void)_reloadSharedTrips;	// IMP=0x0010000000b17ab4
- (void)_reloadSection:(long long)arg1;	// IMP=0x0010000000b17a17
- (void)_reloadData;	// IMP=0x0010000000b178a3
- (void)_endUpdates;	// IMP=0x0010000000b1784b
- (void)_beginUpdates;	// IMP=0x0010000000b177f8
- (id)_allDataProviders;	// IMP=0x0010000000b1776f
- (void)_prepareQuickRouteETAsIfNeeded;	// IMP=0x0010000000b17730
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000b17581
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000b1752f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000b17364
- (void)viewDidLoad;	// IMP=0x0010000000b16f28
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000b16a51

// Remaining properties
@property _Bool allowLowFuelSuggestion;
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

