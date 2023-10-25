//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKUIMenuBarTemplateShelfPageSectionConfiguration
{
    id _fixedElementsCollectionViewCell;	// 8 = 0x8
    unsigned long long _numberOfIterations;	// 16 = 0x10
    long long _focusedIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011fa0c
- (id)_focusedViewElement;	// IMP=0x000000000011f935
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000011f63d
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(_Bool)arg3 numberOfShelfItems:(long long)arg4;	// IMP=0x000000000011f4d9
- (void)registerReusableClassesForCollectionView:(id)arg1;	// IMP=0x000000000011f45f
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x000000000011f3a1
- (struct CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;	// IMP=0x000000000011f201
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000011f02b
- (long long)numberOfSectionCells;	// IMP=0x000000000011eff9
- (unsigned long long)numberOfIterations;	// IMP=0x000000000011efe8
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;	// IMP=0x000000000011ef4a
- (id)initWithNumberOfIterations:(unsigned long long)arg1;	// IMP=0x000000000011eeb3
- (id)init;	// IMP=0x000000000011ee9c

@end
