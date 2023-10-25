//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class SKUIBrowseHeaderPageComponent;

__attribute__((visibility("hidden")))
@interface SKUIBrowseHeaderPageSection : SKUIStorePageSection
{
}

- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ed7a9
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ed7a1
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000000ed6fd
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000000ed6df
- (long long)numberOfCells;	// IMP=0x00000000000ed6d4
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ed5dd
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ed4e6
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000000ed444
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000000ed2ce
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000000ed247
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000000ed1b1

// Remaining properties
@property(readonly, nonatomic) SKUIBrowseHeaderPageComponent *pageComponent; // @dynamic pageComponent;

@end
