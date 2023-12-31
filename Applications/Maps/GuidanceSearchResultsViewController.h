//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardPresentationController, ContainerHeaderView, GuidanceSearchResultsView, GuidanceSearchResultsViewModel, MacMenuPresentationController, MacPopoverPresentationController, NSString, ResultsTitleView, SearchResultsDataSource;
@protocol NavActionCoordination;

@interface GuidanceSearchResultsViewController
{
    ContainerHeaderView *_containerHeaderView;	// 8 = 0x8
    ResultsTitleView *_resultsTitleView;	// 16 = 0x10
    _Bool _hideHeader;	// 24 = 0x18
    id <NavActionCoordination> _navContaineeDelegate;	// 32 = 0x20
    GuidanceSearchResultsViewModel *_viewModel;	// 40 = 0x28
    GuidanceSearchResultsView *_resultsView;	// 48 = 0x30
    SearchResultsDataSource *_dataSource;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000002c983b
@property(nonatomic, getter=isHeaderHidden) _Bool hideHeader; // @synthesize hideHeader=_hideHeader;
@property(retain, nonatomic) SearchResultsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) GuidanceSearchResultsView *resultsView; // @synthesize resultsView=_resultsView;
// Error: Property attributes should begin with the type ('T') attribute, property name: viewModel
// Property attributes: (null)

@property(nonatomic) __weak id <NavActionCoordination> navContaineeDelegate; // @synthesize navContaineeDelegate=_navContaineeDelegate;
- (int)currentMapViewTargetForAnalytics;	// IMP=0x00100000002c9798
- (int)currentUITargetForAnalytics;	// IMP=0x00100000002c978d
- (void)viewModelDidFinishLoading:(id)arg1 error:(id)arg2;	// IMP=0x00100000002c9202
- (void)viewModelWillStartLoading:(id)arg1;	// IMP=0x00100000002c91c0
- (void)didTapOnAddStopAtIndex:(unsigned long long)arg1;	// IMP=0x00100000002c9174
- (void)searchResultTableViewCellDidTapActionButton:(id)arg1;	// IMP=0x00100000002c908a
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00100000002c9021
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x00100000002c8e2a
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x00100000002c8e24
- (int)listForDataSource:(id)arg1;	// IMP=0x00100000002c8e19
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00100000002c8daf
- (void)headerViewTapped:(id)arg1;	// IMP=0x00100000002c8c10
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000002c8bbc
- (unsigned long long)defaultLayoutForContainerStyle:(unsigned long long)arg1 traitCollection:(id)arg2;	// IMP=0x00100000002c8ba8
@property(readonly, nonatomic) unsigned long long maxLayoutForEdgeInsetsUpdate;
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000002c8a7b
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000002c8a00
- (void)willChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000002c897d
- (id)contentView;	// IMP=0x00100000002c8968
- (id)headerView;	// IMP=0x00100000002c8953
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x00100000002c88ec
- (void)_updateLayoutWithContainerStyle:(unsigned long long)arg1 traitCollection:(id)arg2;	// IMP=0x00100000002c8890
- (_Bool)_isEmpty;	// IMP=0x00100000002c87db
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000002c872d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002c8653
- (void)viewDidLoad;	// IMP=0x00100000002c7ab6
- (void)didChangePersonalItems:(id)arg1;	// IMP=0x00100000002c78fc
- (void)configureWithViewModel:(id)arg1;	// IMP=0x00100000002c788f
- (id)init;	// IMP=0x00100000002c77aa
- (id)initWithViewModel:(id)arg1;	// IMP=0x00100000002c7737
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000002c772f

// Remaining properties
@property(readonly, nonatomic) _Bool allowsLongPressToMarkLocation;
@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
@property(readonly, nonatomic) CardPresentationController *cardPresentationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) MacMenuPresentationController *macMenuPresentationController;
@property(readonly, nonatomic) MacPopoverPresentationController *macPopoverPresentationController;
@property(nonatomic) unsigned long long preferredPresentationStyle;
@property(readonly, nonatomic) unsigned long long retainedLayout;
@property(readonly) Class superclass;

@end

