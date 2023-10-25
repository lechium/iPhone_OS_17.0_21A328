//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSString, SKUIShelfLayoutData;

__attribute__((visibility("hidden")))
@interface SKUIZoomingShelfCollectionViewLayout : UICollectionViewLayout
{
    struct CGSize _cachedCollectionViewContentSize;	// 8 = 0x8
    NSMutableDictionary *_cachedLayoutAttributes;	// 24 = 0x18
    _Bool _invalidateGeometryOnlyOfExistingLayoutAttributes;	// 32 = 0x20
    SKUIShelfLayoutData *_layoutData;	// 40 = 0x28
    double _focusedItemHorizontalCenterOffset;	// 48 = 0x30
    double _interItemSpacing;	// 56 = 0x38
    double _itemWidth;	// 64 = 0x40
    double _scaledItemWidth;	// 72 = 0x48
}

+ (_Bool)collectionViewCanClipToBounds;	// IMP=0x0010000000251096
+ (double)snapToBoundariesDecelerationRate;	// IMP=0x0010000000251045
+ (Class)invalidationContextClass;	// IMP=0x001000000025014a
+ (Class)layoutAttributesClass;	// IMP=0x001000000024f616
- (void).cxx_destruct;	// IMP=0x000000000025113a
@property(nonatomic) double scaledItemWidth; // @synthesize scaledItemWidth=_scaledItemWidth;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) double focusedItemHorizontalCenterOffset; // @synthesize focusedItemHorizontalCenterOffset=_focusedItemHorizontalCenterOffset;
@property(retain, nonatomic) SKUIShelfLayoutData *layoutData; // @synthesize layoutData=_layoutData;
- (void)setMenuBarFocusedItemIndexPath:(id)arg1 withTransitionProgress:(double)arg2;	// IMP=0x0000000000250b7b
- (id)menuBarFocusedItemIndexPathWithTransitionProgress:(double *)arg1;	// IMP=0x0000000000250771
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x00000000002503a5
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x00000000002502e0
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000002501ae
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000250142
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002500ae
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000024ff05
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000024fea0
- (void)prepareLayout;	// IMP=0x000000000024f67a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
