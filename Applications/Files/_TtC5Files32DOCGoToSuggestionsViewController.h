//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files32DOCGoToSuggestionsViewController
{
    MISSING_TYPE *metrics;	// 8 = 0x8
    MISSING_TYPE *suggestionsTableViewDelegate;	// 104 = 0x68
    MISSING_TYPE *suggestions;	// 120 = 0x78
    MISSING_TYPE *isFiltering;	// 128 = 0x80
    MISSING_TYPE *sections;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00400000003e5590
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x00100000003e54b0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000003e5410
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000003e50a0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00100000003e4730
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00100000003e3b40
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00100000003e3b10
- (void)viewLayoutMarginsDidChange;	// IMP=0x00100000003e3a60
- (void)viewDidLoad;	// IMP=0x00100000003e3a30
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x00100000003e36a0

@end

