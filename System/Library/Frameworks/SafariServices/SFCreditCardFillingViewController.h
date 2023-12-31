//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SFFormAutocompleteState, UICollectionView, UIImageView;

__attribute__((visibility("hidden")))
@interface SFCreditCardFillingViewController : UIViewController
{
    NSArray *_creditCards;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UIImageView *_leftShadowView;	// 24 = 0x18
    UIImageView *_rightShadowView;	// 32 = 0x20
    double _lastLayoutWidth;	// 40 = 0x28
    double _cachedCellWidth;	// 48 = 0x30
    SFFormAutocompleteState *_formAutocompleteState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000009d69c
@property(readonly, nonatomic) __weak SFFormAutocompleteState *formAutocompleteState; // @synthesize formAutocompleteState=_formAutocompleteState;
- (void)_cardDataChanged:(id)arg1;	// IMP=0x000000000009d622
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000009d519
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000009d4f0
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000009d4b1
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000009d3fd
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000009d2a4
- (double)preferredHeightForTraitCollection:(id)arg1;	// IMP=0x000000000009d296
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;	// IMP=0x000000000009d28e
- (void)viewDidLayoutSubviews;	// IMP=0x000000000009cdf1
- (void)_loadCardData;	// IMP=0x000000000009cbd5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000009cb94
- (void)loadView;	// IMP=0x000000000009c3ab
- (double)_calculateCellWidthForCollectionViewWidth:(double)arg1;	// IMP=0x000000000009c2ff
- (id)initWithFormAutocompleteState:(id)arg1;	// IMP=0x000000000009c229

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *displayedCandidates;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

