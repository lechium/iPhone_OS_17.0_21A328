//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AutocompleteContext, MISSING_TYPE, NSArray, NSIndexPath, NSString, SearchHomeAnalyticsManager, UICollectionViewDiffableDataSource, UICollectionViewLayout, UITableViewDiffableDataSource;
@protocol SearchHomeDataSourceDelegate;

@interface SearchHomeDataSource
{
    _Bool _isUsingOfflineMaps;	// 8 = 0x8
    MISSING_TYPE *_shouldHideHairLine;	// 9 = 0x9
    _Bool _shouldRemoveSearchHomeTip;	// 10 = 0xa
    _Bool _needsToApplySnapshot;	// 11 = 0xb
    _Bool _needsToResetKeyCommands;	// 12 = 0xc
    _Bool _searchAlongRoute;	// 13 = 0xd
    _Bool _supportsFullTextSearch;	// 14 = 0xe
    _Bool _routePlanning;	// 15 = 0xf
    NSArray *_objectsForAnalytics;	// 16 = 0x10
    NSArray *_keyCommands;	// 24 = 0x18
    id <SearchHomeDataSourceDelegate> _searchHomeDataSourceDelegate;	// 32 = 0x20
    UICollectionViewDiffableDataSource *_collectionViewDiffableDataSource;	// 40 = 0x28
    UITableViewDiffableDataSource *_tableViewDiffableDataSource;	// 48 = 0x30
    UICollectionViewLayout *_collectionViewLayout;	// 56 = 0x38
    NSArray *_dataProviders;	// 64 = 0x40
    NSArray *_dataFetchers;	// 72 = 0x48
    NSArray *_layoutProviders;	// 80 = 0x50
    AutocompleteContext *_autocompleteContext;	// 88 = 0x58
    SearchHomeAnalyticsManager *_analyticsManager;	// 96 = 0x60
    NSArray *_cachedSnapshotObjects;	// 104 = 0x68
    NSIndexPath *_lastSelectedIndexPath;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000003b5ddd
@property(nonatomic) _Bool routePlanning; // @synthesize routePlanning=_routePlanning;
@property(nonatomic) _Bool supportsFullTextSearch; // @synthesize supportsFullTextSearch=_supportsFullTextSearch;
@property(nonatomic) _Bool searchAlongRoute; // @synthesize searchAlongRoute=_searchAlongRoute;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) NSArray *cachedSnapshotObjects; // @synthesize cachedSnapshotObjects=_cachedSnapshotObjects;
@property(nonatomic) _Bool needsToResetKeyCommands; // @synthesize needsToResetKeyCommands=_needsToResetKeyCommands;
@property(nonatomic) _Bool needsToApplySnapshot; // @synthesize needsToApplySnapshot=_needsToApplySnapshot;
@property(retain, nonatomic) SearchHomeAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) AutocompleteContext *autocompleteContext; // @synthesize autocompleteContext=_autocompleteContext;
@property(copy, nonatomic) NSArray *layoutProviders; // @synthesize layoutProviders=_layoutProviders;
@property(copy, nonatomic) NSArray *dataFetchers; // @synthesize dataFetchers=_dataFetchers;
@property(copy, nonatomic) NSArray *dataProviders; // @synthesize dataProviders=_dataProviders;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UITableViewDiffableDataSource *tableViewDiffableDataSource; // @synthesize tableViewDiffableDataSource=_tableViewDiffableDataSource;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource; // @synthesize collectionViewDiffableDataSource=_collectionViewDiffableDataSource;
@property(nonatomic) __weak id <SearchHomeDataSourceDelegate> searchHomeDataSourceDelegate; // @synthesize searchHomeDataSourceDelegate=_searchHomeDataSourceDelegate;
@property(nonatomic) _Bool shouldRemoveSearchHomeTip; // @synthesize shouldRemoveSearchHomeTip=_shouldRemoveSearchHomeTip;
@property(nonatomic) _Bool shouldHideHairLine; // @synthesize shouldHideHairLine=_shouldHideHairLine;
- (id)keyCommands;	// IMP=0x00100000003b5b87
- (id)objectsForAnalytics;	// IMP=0x00100000003b5b76
- (void)addToCollectionObserver;	// IMP=0x00100000003b5ae4
- (void)collectionManager:(id)arg1 contentDidChange:(id)arg2;	// IMP=0x00100000003b58f3
- (void)_ppt_selectFirstCuratedGuide;	// IMP=0x00100000003b56b0
- (void)_ppt_selectBrowseCities;	// IMP=0x00100000003b5673
- (void)_ppt_selectExploreGuides;	// IMP=0x00100000003b55d1
- (void)_ppt_selectFirstGuidePublisher;	// IMP=0x00100000003b538e
- (void)_ppt_selectSeeAllCuratedCollections;	// IMP=0x00100000003b5351
- (unsigned long long)_ppt_numberOfDataFetchers;	// IMP=0x00100000003b530d
- (void)_ppt_selectCategoryAtIndex:(unsigned long long)arg1;	// IMP=0x00100000003b507e
- (void)setupTableHeaderView;	// IMP=0x00100000003b4e03
- (id)tableView:(id)arg1 indexPath:(id)arg2 identifier:(id)arg3;	// IMP=0x00100000003b494c
- (void)curatedCollectionSyncManagerDidUpdateCachedCollections:(id)arg1;	// IMP=0x00100000003b4946
- (void)curatedCollectionSyncManagerDidUpdateSyncedCollections:(id)arg1;	// IMP=0x00100000003b492f
- (id)analyticsSuggestions;	// IMP=0x00100000003b4840
- (void)sendNoTypingACAnalytics;	// IMP=0x00100000003b47d0
- (void)reorderKeyCommands;	// IMP=0x00100000003b41b1
- (void)addKeyCommand:(id)arg1;	// IMP=0x00100000003b4054
- (void)performDeleteAnimationOnSectionWithIdentifier:(id)arg1 itemAtIndex:(unsigned long long)arg2 dataProvider:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00100000003b3ea1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000003b3cfc
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000003b33f4
- (double)heightForFooterInSection:(long long)arg1 dataProvider:(id)arg2;	// IMP=0x00100000003b324a
- (double)heightForHeaderInSection:(long long)arg1 dataProvider:(id)arg2;	// IMP=0x00100000003b2fdd
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000003b1473
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x00100000003b0ffc
- (id)_emptySection;	// IMP=0x00100000003afbb2
- (id)dataProviderOfType:(long long)arg1;	// IMP=0x00100000003afa2a
- (id)dataProviderWithIdentifier:(id)arg1;	// IMP=0x00100000003af857
- (id)layoutProviderForDataProvider:(id)arg1;	// IMP=0x00100000003af6ae
- (void)reloadSectionOfType:(long long)arg1;	// IMP=0x00100000003af2a3
- (double)isTouristHereValue;	// IMP=0x00100000003af253
- (id)newTraits;	// IMP=0x00100000003af20f
- (void)didUpdateDataFetcher:(id)arg1;	// IMP=0x00100000003ae83b
- (void)contentSizeDidChange:(id)arg1;	// IMP=0x00100000003ae824
- (void)applySnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003adfca
- (void)_applyTableViewSnapshot;	// IMP=0x00100000003ad9e6
- (void)setNeedsUpdate;	// IMP=0x00100000003ad645
- (_Bool)shouldShowNoRecentSearchesCell;	// IMP=0x00100000003ad390
- (void)setActive:(_Bool)arg1;	// IMP=0x00100000003ad0cf
- (long long)presentationStyle;	// IMP=0x00100000003ad0c4
- (void)_hoverGestureRecognizerStateDidChange:(id)arg1;	// IMP=0x00100000003acd53
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00100000003acc27
- (void)dealloc;	// IMP=0x00100000003acbb2
- (id)initWithCollectionView:(id)arg1 updateLocation:(_Bool)arg2 isSearchAlongRoute:(_Bool)arg3 supportsFullTextSearch:(_Bool)arg4;	// IMP=0x00100000003abed9
- (id)initWithCollectionView:(id)arg1 updateLocation:(_Bool)arg2;	// IMP=0x00100000003abec1
- (id)initWithTableView:(id)arg1 updateLocation:(_Bool)arg2;	// IMP=0x00100000003ab9e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

