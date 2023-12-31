//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SUUIGiftThemeCollectionView, SUUIGiftThemePickerFlowLayout, UIImage, UIPageControl, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SUUIGiftThemePickerViewController
{
    _Bool _animatingScrollView;	// 8 = 0x8
    SUUIGiftThemePickerFlowLayout *_flowLayout;	// 16 = 0x10
    SUUIGiftThemeCollectionView *_collectionView;	// 24 = 0x18
    UIImage *_itemImage;	// 32 = 0x20
    UIPageControl *_pageControl;	// 40 = 0x28
    long long _selectedThemeIndex;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
    NSArray *_themes;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001e40a9
- (void)_setSelectedThemeIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001e4050
- (void)_setItemImage:(id)arg1 error:(id)arg2;	// IMP=0x00000000001e3eb6
- (double)_scrollInsetHorizontal:(id)arg1;	// IMP=0x00000000001e3e67
- (void)_layoutCollectionViewWithTraits:(id)arg1;	// IMP=0x00000000001e3c68
- (_Bool)_isIPadLarge;	// IMP=0x00000000001e3b6d
- (id)_flowLayout;	// IMP=0x00000000001e3ae7
- (double)_collectionViewWidth:(id)arg1;	// IMP=0x00000000001e39a9
- (id)_collectionView;	// IMP=0x00000000001e386e
- (double)_cardWidth;	// IMP=0x00000000001e37dc
- (double)_cardHeight:(id)arg1;	// IMP=0x00000000001e368d
- (void)_nextAction:(id)arg1;	// IMP=0x00000000001e3553
- (void)_backgroundTapAction:(id)arg1;	// IMP=0x00000000001e33a7
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000001e3396
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001e32c3
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000001e32b2
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000001e3249
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001e322c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001e30c0
- (void)giftConfigurationController:(id)arg1 didLoadImageForTheme:(id)arg2;	// IMP=0x00000000001e3007
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001e2f93
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001e2f47
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001e2c67
- (void)loadView;	// IMP=0x00000000001e2719
- (void)dealloc;	// IMP=0x00000000001e2698
- (id)initWithGift:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000001e2541

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

