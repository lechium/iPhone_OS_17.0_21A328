//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class CALayer, IKAudioElement, IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, UICollectionView, UIImage, UIImageView, UIView, UIViewController, _TVProductCollectionViewCell;

__attribute__((visibility("hidden")))
@interface _TVProductTemplateController : _TVBgImageLoadingViewController
{
    IKViewElement *_templateElement;	// 8 = 0x8
    IKImageElement *_bgImageElement;	// 16 = 0x10
    IKImageElement *_heroImageElement;	// 24 = 0x18
    UIImage *_bgImage;	// 32 = 0x20
    UIImageView *_bgImageView;	// 40 = 0x28
    CALayer *_bgBlurSublayer;	// 48 = 0x30
    UIView *_backdropView;	// 56 = 0x38
    IKViewElement *_backdropTintElement;	// 64 = 0x40
    UIView *_backdropTintView;	// 72 = 0x48
    UIViewController *_backdropTintViewController;	// 80 = 0x50
    UIImageView *_vignetteView;	// 88 = 0x58
    UIImageView *_tvVignetteView;	// 96 = 0x60
    IKAudioElement *_bgAudioElement;	// 104 = 0x68
    IKViewElement *_productBannerElement;	// 112 = 0x70
    IKViewElement *_infoListElement;	// 120 = 0x78
    IKViewElement *_titleElement;	// 128 = 0x80
    UICollectionView *_collectionView;	// 136 = 0x88
    UIViewController *_bannerViewController;	// 144 = 0x90
    NSArray *_viewControllers;	// 152 = 0x98
    NSArray *_rowSpacingMetricsList;	// 160 = 0xa0
    double _productBannerHeight;	// 168 = 0xa8
    _Bool _isPartialScrollingTemplate;	// 176 = 0xb0
    NSIndexPath *_autoHighlightIndexPath;	// 184 = 0xb8
    NSIndexPath *_lastFocusedIndexPath;	// 192 = 0xc0
    _Bool _fadedIn;	// 200 = 0xc8
    double _impressionThreshold;	// 208 = 0xd0
    _Bool _preloadOnLayout;	// 216 = 0xd8
    struct CGSize _preloadContentSize;	// 224 = 0xe0
    UIImageView *_topHeroImageView;	// 240 = 0xf0
    UIView *_topHeroSeparatorView;	// 248 = 0xf8
    UIImageView *_topHeroGradientView;	// 256 = 0x100
    _Bool _topHeroImageVisible;	// 264 = 0x108
    _Bool _lightStatusBar;	// 265 = 0x109
    IKImageElement *_topHeroImageElement;	// 272 = 0x110
    double _largeTitleHeight;	// 280 = 0x118
    _Bool _sportsProductTemplate;	// 288 = 0x120
    _TVProductCollectionViewCell *_bannerCell;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x0000000000089a49
- (struct CGSize)_maxContentSize;	// IMP=0x0000000000089914
- (void)_updateBackgroundTintViewEffects;	// IMP=0x0000000000089750
- (void)_updateBackgroundTintView;	// IMP=0x000000000008953c
- (void)_configureBackgroundTintView;	// IMP=0x0000000000089356
- (_Bool)_sportsLandscapePhoneIsOverlaySection:(id)arg1;	// IMP=0x00000000000892ff
- (_Bool)_sportsLandscapePhone;	// IMP=0x0000000000089282
- (_Bool)_shouldShowTopHeroImage;	// IMP=0x000000000008921d
- (_Bool)_shouldUsePartialScrollingTemplate;	// IMP=0x00000000000891f9
- (struct UIEdgeInsets)_cellMarginForIndex:(long long)arg1 partialMargins:(struct UIEdgeInsets *)arg2;	// IMP=0x0000000000088e84
- (id)_spacingMetricsForViewControllers:(id)arg1 contentSize:(struct CGSize *)arg2;	// IMP=0x00000000000889c8
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x00000000000889c2
- (_Bool)_isBackdropNeeded;	// IMP=0x00000000000889ba
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x0000000000088993
- (id)_backgroundImageProxy;	// IMP=0x00000000000886f8
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x000000000008868d
- (long long)_blurEffectStyle;	// IMP=0x000000000008867d
- (void)_configureWithBannerElement:(id)arg1;	// IMP=0x0000000000088138
- (void)_configureWithBgElement:(id)arg1;	// IMP=0x0000000000087f24
- (void)_configureTopHeroImage:(id)arg1;	// IMP=0x0000000000087b66
- (id)_relatedSectionHeaderView;	// IMP=0x00000000000879f2
- (unsigned long long)_lastFocusableCellIndex;	// IMP=0x00000000000877db
- (id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3;	// IMP=0x0000000000086dc0
- (id)_canonicalIDForElement:(id)arg1;	// IMP=0x0000000000086ad6
- (id)_adamIDForElement:(id)arg1;	// IMP=0x00000000000867ec
- (id)preferredFocusEnvironments;	// IMP=0x0000000000086773
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x00000000000863b4
- (void)_recordImpressionsForVisibleView;	// IMP=0x00000000000862c2
- (void)_cancelImpressionsUpdate;	// IMP=0x000000000008629c
- (void)_updateImpressions;	// IMP=0x000000000008624a
- (long long)preferredStatusBarStyle;	// IMP=0x00000000000861fe
- (long long)preferredStatusBarUpdateAnimation;	// IMP=0x00000000000861f3
- (void)_updateTopHeroImageVisibility:(id)arg1;	// IMP=0x0000000000085559
- (void)_updateTopHeroImageOverlay;	// IMP=0x0000000000085252
- (double)_largeTitleHeight;	// IMP=0x0000000000084dee
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000084d10
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000084c07
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000084bbf
- (struct CGSize)_topHeroImageViewSize;	// IMP=0x0000000000084a97
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000084a1a
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000847a6
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000008469f
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000845da
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000845d2
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000845b1
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000084589
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000084554
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000084549
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000008443c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000841df
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000840c5
- (long long)_overrideLargeTitleDisplayMode;	// IMP=0x0000000000084083
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000083780
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000008373f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000836d5
- (_Bool)automaticallyAdjustsScrollViewInsets;	// IMP=0x00000000000836cd
- (void)configureAppearanceTransition;	// IMP=0x0000000000082cc1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000082956
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000828fc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000082716
- (void)loadView;	// IMP=0x0000000000082445
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000081387
- (void)updateWithProductTemplate:(id)arg1;	// IMP=0x0000000000081375

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

