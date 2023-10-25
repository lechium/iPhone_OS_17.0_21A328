//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSMapTable, NSString, SKUIGridComponent, SKUIMissingItemLoader, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIBrickGridPageSection : SKUIStorePageSection
{
    NSMapTable *_artworkRequests;	// 8 = 0x8
    double _baseHeight;	// 16 = 0x10
    double _columnWidth;	// 24 = 0x18
    NSMapTable *_editorialLayouts;	// 32 = 0x20
    SKUIMissingItemLoader *_missingItemLoader;	// 40 = 0x28
    long long _numberOfColumns;	// 48 = 0x30
    double _paddingHorizontal;	// 56 = 0x38
    double _paddingTop;	// 64 = 0x40
    UIImage *_placeholderImage;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000354d38
- (id)_missingItemLoader;	// IMP=0x0000000000354c71
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;	// IMP=0x0000000000354bdf
- (void)_loadArtworkForBrick:(id)arg1 artworkLoader:(id)arg2 reason:(long long)arg3;	// IMP=0x0000000000354a47
- (void)_enumerateVisibleBricksUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000035481b
- (id)_editorialLayoutForBrick:(id)arg1;	// IMP=0x00000000003546c7
- (struct UIEdgeInsets)_contentInsetsForColumnIndex:(long long)arg1 rowWidth:(double)arg2;	// IMP=0x000000000035458c
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;	// IMP=0x000000000035430a
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x000000000035411a
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000353d43
- (void)willAppearInContext:(id)arg1;	// IMP=0x0000000000353a2e
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x0000000000353827
- (long long)numberOfCells;	// IMP=0x000000000035379a
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x000000000035360d
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;	// IMP=0x00000000003534f8
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x0000000000353200
- (id)cellForIndexPath:(id)arg1;	// IMP=0x0000000000352d8e
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x0000000000352c40
- (void)dealloc;	// IMP=0x0000000000352bf5
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000352a11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIGridComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end
