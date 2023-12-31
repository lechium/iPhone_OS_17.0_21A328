//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIItemGridCollectionViewLayout.h"

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface SUUISearchCollectionViewFlowLayout : SUUIItemGridCollectionViewLayout
{
    UICollectionView *_collectionView;	// 8 = 0x8
    long long _numberOfRows;	// 16 = 0x10
    long long _numberOfColumns;	// 24 = 0x18
    struct CGSize _headerSize;	// 32 = 0x20
    double _horizontalPadding;	// 48 = 0x30
    double _verticalPadding;	// 56 = 0x38
    _Bool _backfills;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000032e1cd
@property(nonatomic) _Bool backfills; // @synthesize backfills=_backfills;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (void)prepareLayout;	// IMP=0x000000000032dffc
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000032dcd2
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000032d9ef
- (id)init;	// IMP=0x000000000032d95f

@end

