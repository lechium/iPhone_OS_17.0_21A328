//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionsDataProvider, CurrentLocationDataProvider, DistanceUnitDataProvider, HomeSearchResultsFilterItem, NSArray, NSCache, NSString, SearchResultsDataProvider, _TtC4Maps28PlaceSummaryAsyncDataManager, _TtC4Maps31PlaceSummaryEVChargerDownloader;
@protocol MapsUIDiffableDataSourceViewModel;

@interface HomeOutlineSearchResultsSectionController
{
    SearchResultsDataProvider *_searchResultsDataProvider;	// 8 = 0x8
    CurrentLocationDataProvider *_currentLocationDataProvider;	// 16 = 0x10
    CollectionsDataProvider *_collectionsDataProvider;	// 24 = 0x18
    DistanceUnitDataProvider *_distanceUnitDataProvider;	// 32 = 0x20
    HomeSearchResultsFilterItem *_searchResultsFilterItem;	// 40 = 0x28
    _TtC4Maps28PlaceSummaryAsyncDataManager *_asyncDataManager;	// 48 = 0x30
    _TtC4Maps31PlaceSummaryEVChargerDownloader *_evChargerDownloader;	// 56 = 0x38
    _Bool _usePlaceSummary;	// 64 = 0x40
    NSCache *_placeSummaryTemplateViewModels;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001890c0
- (void)didTapOnReportAnIssue;	// IMP=0x0010000000188fb2
- (void)relatedSearchSuggestionOutlineCellDidTapActionButtonWithSuggestion:(id)arg1;	// IMP=0x0010000000188f95
- (void)venuesDropDownOutlineCell:(id)arg1 didSelectCategory:(id)arg2;	// IMP=0x0010000000188ef2
- (void)didTapOnCuratedGuides:(id)arg1;	// IMP=0x0010000000188e6b
- (void)didTapOnCuratedGuide:(id)arg1;	// IMP=0x0010000000188de4
- (void)didTapOnUserGeneratedGuide:(id)arg1;	// IMP=0x0010000000188d5d
- (void)didTapOnPlaceContextWithViewModel:(id)arg1 parentView:(id)arg2;	// IMP=0x0010000000188cd6
- (void)searchResultsFilterItem:(id)arg1 didSelectSuggestion:(id)arg2;	// IMP=0x0010000000188c18
@property(readonly, nonatomic) _Bool persistsExpansions;
- (id)_childItemsInVenueSearchResult:(id)arg1;	// IMP=0x00100000001889e2
- (_Bool)_isItemVenue:(id)arg1;	// IMP=0x0010000000188958
- (void)handleVenueSearchResultsWithSelectedSearchResult:(id)arg1 searchFieldItem:(id)arg2 browseCategories:(id)arg3;	// IMP=0x001000000018893b
- (void)presentVenueWithVenueCardItem:(id)arg1;	// IMP=0x00100000001887be
- (void)expandElementAtIdentifierPath:(id)arg1;	// IMP=0x00100000001886f3
- (id)_searchResultContainingIdentifierPath:(id)arg1;	// IMP=0x0010000000188572
- (id)contextMenuForSnapshot:(id)arg1;	// IMP=0x001000000018856a
- (void)cachePlacesummaryTemplates:(id)arg1 metadata:(id)arg2 location:(id)arg3;	// IMP=0x00100000001880fe
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
- (void)resetEVChargerDownloader;	// IMP=0x0010000000187092
- (void)dealloc;	// IMP=0x001000000018701e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000186e75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

