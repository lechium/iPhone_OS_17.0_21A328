//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC7SwiftUIP33_8825076C2763A50452A210CBE1FA4AF011Coordinator
{
    MISSING_TYPE *collectionView;	// 8 = 0x8
    MISSING_TYPE *selectedIndex;	// 16 = 0x10
    MISSING_TYPE *children;	// 40 = 0x28
    MISSING_TYPE *lastIDs;	// 88 = 0x58
    MISSING_TYPE *layoutDirection;	// 96 = 0x60
    MISSING_TYPE *pendingSeenIndex;	// 104 = 0x68
    MISSING_TYPE *lastSeenIndex;	// 120 = 0x78
    MISSING_TYPE *pendingSelectedIndex;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000ac7804
- (id)init;	// IMP=0x0000000000ac7780
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000ac6fad
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000ac6e23
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000ac6d7e
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000ac6ca4
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000ac6c84
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000ac6bc0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000ac6b13
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000ac6ae3

@end

