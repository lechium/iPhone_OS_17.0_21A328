//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@interface LUIUserGridViewLayout : UICollectionViewLayout
{
}

- (double)contentViewTopEdgeInsetForCollectionViewFrame:(struct CGRect)arg1 contentHeight:(double)arg2;	// IMP=0x0040000000045751
- (struct UIEdgeInsets)edgeInsetsForCollectionViewFrame:(struct CGRect)arg1 layoutInfo:(id)arg2;	// IMP=0x00100000000454cc
- (id)layoutInfoForItemCount:(unsigned long long)arg1;	// IMP=0x0010000000045340
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000045327
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00100000000452b7
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0010000000044f66
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0010000000044f5e
- (struct CGSize)collectionViewContentSize;	// IMP=0x0010000000044f48
- (void)prepareLayout;	// IMP=0x001000000004474c

@end
