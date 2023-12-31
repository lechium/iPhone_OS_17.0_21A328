//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class SKUIColorScheme, SKUIEditorialComponent, SKUIEditorialLayout, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIEditorialPageSection : SKUIStorePageSection
{
    SKUIColorScheme *_colorScheme;	// 8 = 0x8
    SKUIEditorialLayout *_editorialLayout;	// 16 = 0x10
    _Bool _hasValidColorScheme;	// 24 = 0x18
    _Bool _isExpanded;	// 25 = 0x19
    SKUIViewElementLayoutContext *_layoutContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000120a02
- (id)_editorialLayout;	// IMP=0x000000000012088c
- (id)_colorScheme;	// IMP=0x0000000000120707
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000012064b
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000012049a
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;	// IMP=0x0000000000120388
- (long long)numberOfCells;	// IMP=0x000000000012037d
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000120286
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x000000000012018f
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x0000000000120029
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000011ff1b
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000011fbb9
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x000000000011fb3c
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x000000000011fab5
- (id)initWithPageComponent:(id)arg1;	// IMP=0x000000000011fa1f

// Remaining properties
@property(readonly, nonatomic) SKUIEditorialComponent *pageComponent; // @dynamic pageComponent;

@end

