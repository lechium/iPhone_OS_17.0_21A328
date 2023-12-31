//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, ErrorModeView, GEOGuideLocation, GEOMapServiceTraits, GradientView, GuideHomeCompositionalLayout, GuidesHomeAPIController, GuidesHomeAnalyticsManager, GuidesHomeDataSource, LoadingModeView, MISSING_TYPE, NSString, UIButton, UICollectionView, UIScrollView, UIView;

@interface GuidesHomeViewController
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
    GEOGuideLocation *_guideLocation;	// 16 = 0x10
    double _actualCardHeight;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    GuidesHomeDataSource *_dataSource;	// 40 = 0x28
    GuidesHomeAPIController *_apiController;	// 48 = 0x30
    ContainerHeaderView *_titleHeaderView;	// 56 = 0x38
    GuideHomeCompositionalLayout *_layout;	// 64 = 0x40
    LoadingModeView *_loadingView;	// 72 = 0x48
    ErrorModeView *_errorView;	// 80 = 0x50
    unsigned long long _containeeLayout;	// 88 = 0x58
    GuidesHomeAnalyticsManager *_analyticsManager;	// 96 = 0x60
    UIView *_citySelectionView;	// 104 = 0x68
    UIButton *_citySelectorButton;	// 112 = 0x70
    GradientView *_citySelectionBackgroundView;	// 120 = 0x78
    struct CGPoint _contentOffset;	// 128 = 0x80
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x00200000005781dc
@property(retain, nonatomic) GradientView *citySelectionBackgroundView; // @synthesize citySelectionBackgroundView=_citySelectionBackgroundView;
@property(retain, nonatomic) UIButton *citySelectorButton; // @synthesize citySelectorButton=_citySelectorButton;
@property(retain, nonatomic) UIView *citySelectionView; // @synthesize citySelectionView=_citySelectionView;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) GuidesHomeAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(nonatomic) unsigned long long containeeLayout; // @synthesize containeeLayout=_containeeLayout;
@property(retain, nonatomic) ErrorModeView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) LoadingModeView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) GuideHomeCompositionalLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) ContainerHeaderView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(retain, nonatomic) GuidesHomeAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) GuidesHomeDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double actualCardHeight; // @synthesize actualCardHeight=_actualCardHeight;
@property(retain, nonatomic) GEOGuideLocation *guideLocation; // @synthesize guideLocation=_guideLocation;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000577f81
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000577f7b
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000577f75
- (void)didSelectGuide:(id)arg1;	// IMP=0x0010000000577e1e
- (void)didTapCitySelectorButton:(id)arg1;	// IMP=0x0010000000577dd1
- (void)closeButtonTaped:(id)arg1;	// IMP=0x0010000000577dbf
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x0010000000577dad
- (void)routeToCitySelector;	// IMP=0x0010000000577d3d
- (void)routeToGuidesHomeFromExploreGuides:(id)arg1;	// IMP=0x0010000000577d37
- (void)routeToPublisher:(id)arg1;	// IMP=0x0010000000577cce
- (void)routeToGuideLocation:(id)arg1;	// IMP=0x0010000000577c63
- (void)routeToCuratedCollection:(id)arg1;	// IMP=0x0010000000577bf8
- (void)dismissGuidesHome;	// IMP=0x0010000000577b7f
- (void)routeToSingleCuratedCollection:(id)arg1;	// IMP=0x0010000000577ab3
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000057796f
- (void)removeErrorView;	// IMP=0x0010000000577969
- (void)addErrorView;	// IMP=0x0010000000577963
- (void)removeLoadingView;	// IMP=0x00100000005778d6
- (void)addLoadingView;	// IMP=0x001000000057761c
- (void)resetCollectionViewLayout;	// IMP=0x00100000005774c8
- (void)activateConstraintsForViewAligningHeader:(id)arg1;	// IMP=0x0010000000577110
- (void)activateConstraintsForViewPinnedBelowHeader:(id)arg1 headerView:(id)arg2;	// IMP=0x0010000000576e01
- (id)createLayoutUsingWidth:(double)arg1;	// IMP=0x00100000005768ab
- (void)removeCitySelectionUI;	// IMP=0x0010000000576800
- (void)removeCollectionView;	// IMP=0x0010000000576764
- (void)addGuidesHomeCollectionsView;	// IMP=0x0010000000576359
- (void)resetDefaultHeaderConstraints;	// IMP=0x0010000000575f3c
- (void)activateHeaderConstraints;	// IMP=0x0010000000575bb3
- (void)removeDefaultHeaderView;	// IMP=0x00100000005757fc
- (void)addDefaultHeaderView;	// IMP=0x00100000005754e0
- (void)initializeDataSource;	// IMP=0x001000000057519d
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000575109
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000574d68
- (id)backgroundViewForCitySelector;	// IMP=0x0010000000574c71
- (void)setupCitySelectionUIGradientView;	// IMP=0x0010000000574728
- (void)setupCitySelectionUI;	// IMP=0x001000000057224b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000005721d0
- (void)onTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0010000000571db9
- (void)didDismissByGesture;	// IMP=0x0010000000571da7
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000571d51
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x0010000000571cac
- (void)viewDidLoad;	// IMP=0x00100000005717be
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000057175a
- (id)initWithGuideLocation:(id)arg1 withTraits:(id)arg2;	// IMP=0x00100000005715d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

