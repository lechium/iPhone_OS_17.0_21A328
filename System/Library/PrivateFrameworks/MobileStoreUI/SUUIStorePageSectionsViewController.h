//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableIndexSet, NSNumber, NSString, SUUICollectionView, SUUIColorScheme, SUUIIndexBarControl, SUUILayoutCache, SUUIMetricsController, SUUIMetricsImpressionSession, SUUIProductPageOverlayController, SUUIResourceLoader, SUUIStackedBar, SUUIStorePageSplitsDescription, UICollectionView, UIRefreshControl, UITapGestureRecognizer, UIView;
@protocol SUUICollectionViewPullToRefreshDelegate, SUUIStorePageSectionsDelegate, UIViewControllerPreviewing;

__attribute__((visibility("hidden")))
@interface SUUIStorePageSectionsViewController : SUUIViewController
{
    SUUIProductPageOverlayController *_activeOverlayController;	// 8 = 0x8
    SUUIMetricsImpressionSession *_activeMetricsImpressionSession;	// 16 = 0x10
    SUUICollectionView *_collectionView;	// 24 = 0x18
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;	// 32 = 0x20
    SUUIColorScheme *_colorScheme;	// 40 = 0x28
    struct UIEdgeInsets _contentInsetAdjustments;	// 48 = 0x30
    id _deferredSplitsDescription;	// 80 = 0x50
    id <SUUIStorePageSectionsDelegate> _delegate;	// 88 = 0x58
    _Bool _delegateWantsDidScroll;	// 96 = 0x60
    _Bool _delegateWantsWillScrollToOffsetVisibleRange;	// 97 = 0x61
    _Bool _didInitialReload;	// 98 = 0x62
    NSMapTable *_entityProviderToRelevantSections;	// 104 = 0x68
    NSMapTable *_expandSectionContexts;	// 112 = 0x70
    NSMutableIndexSet *_expandInsertSections;	// 120 = 0x78
    NSMutableIndexSet *_expandRemoveSections;	// 128 = 0x80
    long long _ignoreSectionsChangeCount;	// 136 = 0x88
    SUUIIndexBarControl *_indexBarControl;	// 144 = 0x90
    NSIndexPath *_indexPathOfEditedCell;	// 152 = 0x98
    NSArray *_initialOverlayURLs;	// 160 = 0xa0
    NSNumber *_lastKnownWidth;	// 168 = 0xa8
    long long _layoutStyle;	// 176 = 0xb0
    NSMapTable *_menuSectionContexts;	// 184 = 0xb8
    SUUIMetricsController *_metricsController;	// 192 = 0xc0
    SUUIProductPageOverlayController *_overlayController;	// 200 = 0xc8
    long long _pinningTransitionStyle;	// 208 = 0xd0
    id <UIViewControllerPreviewing> _viewControllerPreviewing;	// 216 = 0xd8
    id <SUUICollectionViewPullToRefreshDelegate> _pullToRefreshDelegate;	// 224 = 0xe0
    UIRefreshControl *_refreshControl;	// 232 = 0xe8
    _Bool _rendersWithParallax;	// 240 = 0xf0
    _Bool _rendersWithPerspective;	// 241 = 0xf1
    SUUIResourceLoader *_resourceLoader;	// 248 = 0xf8
    _Bool _scrollOffsetHasChanged;	// 256 = 0x100
    NSMutableArray *_sections;	// 264 = 0x108
    SUUIStorePageSplitsDescription *_splitsDescription;	// 272 = 0x110
    UIView *_splitsDividerView;	// 280 = 0x118
    SUUIStackedBar *_stackedBar;	// 288 = 0x120
    SUUILayoutCache *_textLayoutCache;	// 296 = 0x128
    long long _lastInterfaceOrientation;	// 304 = 0x130
    _Bool _itemsChangedStateWhileDisappeared;	// 312 = 0x138
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;	// IMP=0x001000000006e996
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x001000000006a4a0
- (void).cxx_destruct;	// IMP=0x0000000000074cb0
@property(retain, nonatomic) SUUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(retain, nonatomic) SUUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <SUUICollectionViewPullToRefreshDelegate> pullToRefreshDelegate; // @synthesize pullToRefreshDelegate=_pullToRefreshDelegate;
@property(nonatomic) long long pinningTransitionStyle; // @synthesize pinningTransitionStyle=_pinningTransitionStyle;
@property(retain, nonatomic) SUUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(nonatomic) __weak id <SUUIStorePageSectionsDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SUUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) SUUIMetricsImpressionSession *activeMetricsImpressionSession; // @synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession;
- (void)_updateSectionsAfterMenuChange;	// IMP=0x0000000000074aca
- (void)_updateCollectionViewWithUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000000000742e2
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;	// IMP=0x0000000000074253
- (id)_textLayoutCache;	// IMP=0x00000000000741fe
- (id)_splitForSectionIndex:(long long)arg1;	// IMP=0x0000000000074066
- (void)_setPageSize:(struct CGSize)arg1;	// IMP=0x0000000000073e86
- (void)_scrollFirstAppearanceSectionToView;	// IMP=0x0000000000073cdf
- (void)_reloadRelevantEntityProviders;	// IMP=0x0000000000073597
- (void)_reloadCollectionView;	// IMP=0x0000000000072d8b
- (void)_registerForNotificationsForEntityProvider:(id)arg1;	// IMP=0x0000000000072cf5
- (id)_prepareLayoutForSections;	// IMP=0x0000000000072855
- (void)_prefetchArtworkForVisibleSections;	// IMP=0x0000000000072820
- (id)_newStorePageCollectionViewLayout;	// IMP=0x000000000007278d
- (id)_newSectionsWithPageComponents:(id)arg1;	// IMP=0x00000000000725db
- (id)_newSectionsWithPageComponent:(id)arg1;	// IMP=0x00000000000724a2
- (id)_newSectionContext;	// IMP=0x000000000007221e
- (id)_menuContextForMenuComponent:(id)arg1;	// IMP=0x0000000000072131
- (id)_expandContextForMenuComponent:(id)arg1;	// IMP=0x0000000000072072
- (void)_invalidateLayoutWithNewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;	// IMP=0x0000000000071ad6
- (void)_invalidateIfLastKnownWidthChanged;	// IMP=0x00000000000719b2
- (void)_enumerateVisibleSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071725
- (void)_enumerateSectionContextsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071635
- (void)_endAllPendingActiveImpression;	// IMP=0x00000000000715f8
- (void)_deselectCellsForAppearance:(_Bool)arg1;	// IMP=0x00000000000713a4
- (id)_defaultSectionForSwooshComponent:(id)arg1;	// IMP=0x0000000000071338
- (id)_defaultSectionForGridComponent:(id)arg1;	// IMP=0x0000000000071243
- (id)_currentBackdropGroupName;	// IMP=0x0000000000071197
- (id)_createSectionsForExpandPageComponent:(id)arg1 context:(id)arg2 newSections:(id)arg3 sectionCount:(long long)arg4 sectionsByViewElement:(id)arg5 updateStyle:(long long)arg6;	// IMP=0x00000000000705b3
- (id)_collectionViewSublayouts;	// IMP=0x0000000000070539
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(long long)arg2;	// IMP=0x00000000000702b8
- (void)_beginActiveImpressionsForImpressionableViewElements;	// IMP=0x0000000000070127
- (void)_applyColorScheme:(id)arg1 toIndexBarControl:(id)arg2;	// IMP=0x000000000007002b
- (void)_entityProviderDidInvalidateNotification:(id)arg1;	// IMP=0x000000000006fbeb
- (void)_handleTap:(id)arg1;	// IMP=0x000000000006fb7a
- (id)_impressionableViewElements;	// IMP=0x000000000006f950
- (id)_visibleMetricsImpressionsString;	// IMP=0x000000000006f726
- (void)_updateSectionsForIndex:(long long)arg1 menuSection:(id)arg2;	// IMP=0x000000000006f39f
- (void)_setSelectedIndex:(long long)arg1 forMenuSection:(id)arg2;	// IMP=0x000000000006f006
- (void)_setRendersWithParallax:(_Bool)arg1;	// IMP=0x000000000006eff1
- (void)_setRendersWithPerspective:(_Bool)arg1;	// IMP=0x000000000006ef46
- (void)_setActiveProductPageOverlayController:(id)arg1;	// IMP=0x000000000006ef11
- (void)_pageSectionDidDismissOverlayController:(id)arg1;	// IMP=0x000000000006ee40
- (void)_insertSectionsWithComponents:(id)arg1 afterSection:(id)arg2;	// IMP=0x000000000006eae3
- (void)_endIgnoringSectionChanges;	// IMP=0x000000000006ea3a
- (void)_beginIgnoringSectionChanges;	// IMP=0x000000000006ea29
- (void)_contentSizeChangeNotification:(id)arg1;	// IMP=0x000000000006ea17
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;	// IMP=0x000000000006e772
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;	// IMP=0x000000000006e4bd
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x000000000006e38f
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000006e0b4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000006df9d
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000006df3a
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000006de8c
- (void)SUUICollectionViewWillLayoutSubviews:(id)arg1;	// IMP=0x000000000006d715
- (void)itemCollectionView:(id)arg1 didTapVideoForCollectionViewCell:(id)arg2;	// IMP=0x000000000006d67f
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;	// IMP=0x000000000006d5e9
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000006d563
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000006d4dd
- (void)collectionView:(id)arg1 performDefaultActionForViewElement:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000006d450
- (void)collectionView:(id)arg1 expandEditorialForLabelElement:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000006d3ad
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000006d32c
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000006d260
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000006d194
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;	// IMP=0x000000000006d0df
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000006d0c2
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000006d070
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000006cf2e
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;	// IMP=0x000000000006cd63
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000006cc7b
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000006cab8
- (id)indexPathsForGradientItemsInCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x000000000006c76a
- (id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x000000000006c419
- (void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;	// IMP=0x000000000006c329
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;	// IMP=0x000000000006c274
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;	// IMP=0x000000000006c1ee
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningGroupForItemAtIndexPath:(id)arg3;	// IMP=0x000000000006c168
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;	// IMP=0x000000000006c0e2
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;	// IMP=0x000000000006c046
- (void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;	// IMP=0x000000000006c004
- (_Bool)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;	// IMP=0x000000000006bec8
- (id)backgroundColorForSection:(long long)arg1;	// IMP=0x000000000006be41
- (void)productPageOverlayDidDismiss:(id)arg1;	// IMP=0x000000000006bd59
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x000000000006bbab
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;	// IMP=0x000000000006b48b
- (void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3;	// IMP=0x000000000006b314
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000006b139
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000006b03f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000006aff6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000006aef7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000006acb4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000006ab4b
- (void)loadView;	// IMP=0x000000000006a7ac
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000000006a6e3
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000000006a4a8
- (void)suui_viewWillAppear:(_Bool)arg1;	// IMP=0x000000000006a45a
- (void)_longPressAction:(id)arg1;	// IMP=0x000000000006a383
- (void)_startRefresh:(id)arg1;	// IMP=0x000000000006a2c8
- (void)setUsePullToRefresh:(_Bool)arg1;	// IMP=0x000000000006a1f7
- (id)SUUIStackedBar;	// IMP=0x000000000006a1e2
- (void)showOverlayWithProductPage:(id)arg1 metricsPageEvent:(id)arg2;	// IMP=0x000000000006a0cd
- (void)setSUUIStackedBar:(id)arg1;	// IMP=0x000000000006a073
- (void)setSectionsWithSplitsDescription:(id)arg1;	// IMP=0x0000000000068abe
- (void)setSectionsWithPageComponents:(id)arg1;	// IMP=0x0000000000068a09
- (void)reloadSections:(id)arg1;	// IMP=0x0000000000068397
@property(readonly, nonatomic, getter=isDisplayingOverlays) _Bool displayingOverlays;
- (void)invalidateAndReload;	// IMP=0x000000000006800d
- (void)dismissOverlays;	// IMP=0x0000000000067fb8
- (id)defaultSectionForComponent:(id)arg1;	// IMP=0x0000000000067d1d
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)dealloc;	// IMP=0x00000000000676f3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000676df
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000676cb
- (id)initWithLayoutStyle:(long long)arg1;	// IMP=0x0000000000067520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

