//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, VideosExtrasBannerController;

__attribute__((visibility("hidden")))
@interface VideosExtrasStackTemplateViewController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UICollectionViewFlowLayout *_collectionViewLayout;	// 16 = 0x10
    NSMutableDictionary *_viewControllers;	// 24 = 0x18
    NSMutableDictionary *_sizes;	// 32 = 0x20
    VideosExtrasBannerController *_bannerViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000251725
- (id)_viewControllerForIndexPath:(id)arg1;	// IMP=0x0000000000251351
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000251290
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000251285
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000002511f0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000251009
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000250eaa
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000250dfa
- (void)_prepareLayout;	// IMP=0x0000000000250a64
- (id)sectionStyle;	// IMP=0x00000000002509e5
- (id)templateElement;	// IMP=0x0000000000250995
- (id)contentScrollView;	// IMP=0x0000000000250980
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002507cd
- (void)viewDidLoad;	// IMP=0x00000000002501da
- (void)_dynamicTypeDidChange;	// IMP=0x000000000024ff9c
- (void)dealloc;	// IMP=0x000000000024ff27
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;	// IMP=0x000000000024fe4b
- (_Bool)showsPlaceholder;	// IMP=0x000000000024fe43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

