//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SUUIStorePageSectionContext, SUUIViewElementLayoutContext, UIColor;
@protocol SUUIGridViewElementPageSectionConfigurationDataSource;

__attribute__((visibility("hidden")))
@interface SUUIGridViewElementPageSectionConfiguration : NSObject
{
    long long _cardVerticalSpacingStyle;	// 8 = 0x8
    double _cellContentWidth;	// 16 = 0x10
    _Bool _cellPaddingNeedsReloading;	// 24 = 0x18
    double _cellPaddingInteriorHorizontal;	// 32 = 0x20
    double _cellPaddingLeftEdgeHorizontal;	// 40 = 0x28
    double _cellPaddingRightEdgeHorizontal;	// 48 = 0x30
    struct UIEdgeInsets _gridViewElementStyleElementPadding;	// 56 = 0x38
    double _gridViewElementStyleItemWidth;	// 88 = 0x58
    _Bool _gridViewElementStyleItemWidthIsPercentage;	// 96 = 0x60
    _Bool _gridIsEdgeToEdge;	// 97 = 0x61
    _Bool _hasGridViewElementStyle;	// 98 = 0x62
    _Bool _hasHeader;	// 99 = 0x63
    struct UIEdgeInsets _separatorMargins;	// 104 = 0x68
    long long _lockupType;	// 136 = 0x88
    double _minimumCellHeight;	// 144 = 0x90
    unsigned long long _numberOfGridItems;	// 152 = 0x98
    NSArray *_positions;	// 160 = 0xa0
    UIColor *_separatorColor;	// 168 = 0xa8
    long long _separatorStyle;	// 176 = 0xb0
    struct UIEdgeInsets _separatorWidths;	// 184 = 0xb8
    _Bool _showsEditMode;	// 216 = 0xd8
    NSArray *_viewElements;	// 224 = 0xe0
    struct {
        unsigned int configurePositionForItemAtIndexPath:1;
    } _dataSourceRespondsToSelectorFlags;	// 232 = 0xe8
    _Bool _rendersWithPerspective;	// 236 = 0xec
    SUUIViewElementLayoutContext *_cellLayoutContext;	// 240 = 0xf0
    long long _numberOfColumns;	// 248 = 0xf8
    SUUIStorePageSectionContext *_pageSectionContext;	// 256 = 0x100
    id <SUUIGridViewElementPageSectionConfigurationDataSource> _dataSource;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000001d0dcc
@property(nonatomic) __weak id <SUUIGridViewElementPageSectionConfigurationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool showsEditMode; // @synthesize showsEditMode=_showsEditMode;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(retain, nonatomic) SUUIStorePageSectionContext *pageSectionContext; // @synthesize pageSectionContext=_pageSectionContext;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(retain, nonatomic) SUUIViewElementLayoutContext *cellLayoutContext; // @synthesize cellLayoutContext=_cellLayoutContext;
- (_Bool)_useOrdinalPadding;	// IMP=0x00000000001d0b34
- (void)_reloadCellPaddingIfNeeded;	// IMP=0x00000000001d0852
- (long long)_numberOfColumnsForWidth:(double)arg1 style:(id)arg2;	// IMP=0x00000000001d075c
- (struct UIEdgeInsets)_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001d0531
- (long long)_lockupTypeForLockup:(id)arg1;	// IMP=0x00000000001d050d
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;	// IMP=0x00000000001d04d9
- (_Bool)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1;	// IMP=0x00000000001d0434
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d0299
- (double)_columnContentWidthPaddingForWidth:(double)arg1;	// IMP=0x00000000001d021e
- (double)_cellPaddingRightEdgeHorizontal;	// IMP=0x00000000001d01fc
- (double)_cellPaddingLeftEdgeHorizontal;	// IMP=0x00000000001d01da
- (double)_cellPaddingInteriorHorizontal;	// IMP=0x00000000001d01b8
- (struct UIEdgeInsets)_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001cfc71
- (double)_cellHeightForViewElement:(id)arg1 width:(double)arg2;	// IMP=0x00000000001cfb35
- (double)_cellContentWidth;	// IMP=0x00000000001cf782
- (Class)_cardCellClassForCard:(id)arg1;	// IMP=0x00000000001cf73f
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;	// IMP=0x00000000001cf529
- (_Bool)viewElementIsStandardCard:(id)arg1;	// IMP=0x00000000001cf4d2
- (void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(unsigned long long)arg3;	// IMP=0x00000000001cebc5
- (void)updateLayoutPropertiesForGridViewElement:(id)arg1;	// IMP=0x00000000001ce6a1
- (struct UIEdgeInsets)sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets)arg1 forGridViewElement:(id)arg2;	// IMP=0x00000000001ce60d
- (void)requestCellLayoutForViewElement:(id)arg1;	// IMP=0x00000000001ce529
- (void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(long long)arg3;	// IMP=0x00000000001ce391
- (void)registerReusableClassesForCollectionView:(id)arg1;	// IMP=0x00000000001ce240
- (long long)positionForIndexPath:(id)arg1;	// IMP=0x00000000001ce156
- (Class)lockupCellClassWithLockup:(id)arg1;	// IMP=0x00000000001ce11b
- (void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000001cd99a
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x00000000001cd922
- (struct CGSize)cellSizeForViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001cd45a
- (id)cellForViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001cd16c
- (Class)cellClassForViewElement:(id)arg1;	// IMP=0x00000000001cd091
- (id)backgroundColorForViewElement:(id)arg1;	// IMP=0x00000000001ccfc0
@property(readonly, nonatomic) double columnWidth;
@property(readonly, nonatomic) double columnContentWidth;

@end

