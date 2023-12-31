//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout
{
    NSDictionary *_cachedLayoutAttributes;	// 8 = 0x8
    long long _indexOfVisibleItemForBoundsChange;	// 16 = 0x10
    struct CGSize _cachedCollectionViewContentSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b54ca
@property(nonatomic) long long indexOfVisibleItemForBoundsChange; // @synthesize indexOfVisibleItemForBoundsChange=_indexOfVisibleItemForBoundsChange;
@property(nonatomic) struct CGSize cachedCollectionViewContentSize; // @synthesize cachedCollectionViewContentSize=_cachedCollectionViewContentSize;
@property(retain, nonatomic) NSDictionary *cachedLayoutAttributes; // @synthesize cachedLayoutAttributes=_cachedLayoutAttributes;
- (double)_spaceBetweenItemsForCollectionViewBounds:(struct CGRect)arg1;	// IMP=0x00000000000b53ef
- (double)_spaceBetweenItems;	// IMP=0x00000000000b5367
- (double)_neighboringItemVisibleWidth;	// IMP=0x00000000000b52a9
- (long long)_indexOfVisibleItemForContentOffset:(struct CGPoint)arg1 collectionViewBounds:(struct CGRect)arg2;	// IMP=0x00000000000b5241
- (struct CGPoint)_contentOffsetForItemAtIndex:(long long)arg1 collectionViewBounds:(struct CGRect)arg2;	// IMP=0x00000000000b51d8
- (double)itemWidth;	// IMP=0x00000000000b50c9
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b500a
- (void)setIndexOfVisibleItem:(unsigned long long)arg1;	// IMP=0x00000000000b4ff6
- (unsigned long long)indexOfVisibleItem;	// IMP=0x00000000000b4f49
- (void)finalizeAnimatedBoundsChange;	// IMP=0x00000000000b4efe
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x00000000000b4ef6
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x00000000000b4ee4
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000000b4e1f
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000000b4d6b
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000000b4cd8
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x00000000000b4c16
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000b4b9c
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000000b4a16
- (struct CGSize)collectionViewContentSize;	// IMP=0x00000000000b4a04
- (void)prepareLayout;	// IMP=0x00000000000b46c2
- (id)init;	// IMP=0x00000000000b4679

@end

