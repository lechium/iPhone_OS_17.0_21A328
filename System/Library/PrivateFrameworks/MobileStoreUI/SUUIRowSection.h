//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class NSMapTable, NSMutableIndexSet, NSString, SUUIClientContext, SUUILockupComponent, SUUIMissingItemLoader, SUUIProductPageOverlayController, SUUIRowComponent;

__attribute__((visibility("hidden")))
@interface SUUIRowSection : SUUIStorePageSection
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    NSMapTable *_columnViews;	// 16 = 0x10
    NSMapTable *_componentArtworkRequestIDs;	// 24 = 0x18
    NSMapTable *_editorialLayouts;	// 32 = 0x20
    NSMutableIndexSet *_expandedEditorialIndexes;	// 40 = 0x28
    NSMapTable *_galleryViewControllers;	// 48 = 0x30
    NSMapTable *_countdownViewControllers;	// 56 = 0x38
    _Bool _isPad;	// 64 = 0x40
    double _landscapeCellContentHeight;	// 72 = 0x48
    SUUIMissingItemLoader *_missingItemLoader;	// 80 = 0x50
    SUUIProductPageOverlayController *_overlayController;	// 88 = 0x58
    SUUILockupComponent *_overlaySourceComponent;	// 96 = 0x60
    double _portraitCellContentHeight;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000109a55
- (id)_viewControllerForGalleryComponent:(id)arg1;	// IMP=0x00000000001097fd
- (id)_viewControllerForCountdownComponent:(id)arg1;	// IMP=0x000000000010957e
- (void)_setPositionForClickEvent:(id)arg1 elementIndex:(long long)arg2;	// IMP=0x0000000000109485
- (void)_selectMediaComponent:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x0000000000109332
- (void)_selectLockupComponent:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x0000000000108f5d
- (void)_selectGalleryComponent:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x0000000000108e47
- (void)_reloadView:(id)arg1 forMediaComponent:(id)arg2 columnIndex:(long long)arg3;	// IMP=0x0000000000108b02
- (void)_reloadLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;	// IMP=0x00000000001087b9
- (void)_reloadEditorialLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;	// IMP=0x0000000000108397
- (void)_reloadEditorialCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;	// IMP=0x0000000000108105
- (id)_popSourceViewForOverlayController:(id)arg1;	// IMP=0x0000000000107efa
- (id)_overlaySourceCell;	// IMP=0x0000000000107dcd
- (id)_newViewWithMediaComponent:(id)arg1;	// IMP=0x0000000000107d99
- (id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x0000000000107c59
- (id)_missingItemLoader;	// IMP=0x0000000000107b92
- (struct SUUILockupStyle)_lockupStyleForComponent:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x0000000000107a02
- (id)_lockupPlaceholderForComponent:(id)arg1;	// IMP=0x00000000001078f7
- (id)_lockupImageForComponent:(id)arg1;	// IMP=0x000000000010759f
- (void)_loadImagesForGalleryComponent:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x0000000000107419
- (double)_interColumnSpacing;	// IMP=0x0000000000107358
- (id)_imageConsumerWithItem:(id)arg1 lockupSize:(long long)arg2;	// IMP=0x00000000001072dd
- (double)_heightForMediaComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;	// IMP=0x000000000010726a
- (double)_heightForLockupComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;	// IMP=0x0000000000107014
- (double)_heightForGalleryComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;	// IMP=0x0000000000106e70
- (double)_heightForEditorialComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;	// IMP=0x0000000000106d95
- (double)_heightForCountdownComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;	// IMP=0x0000000000106cd0
- (double)_heightForComponent:(id)arg1 columnIndex:(double)arg2 rowWidth:(double)arg3;	// IMP=0x0000000000106bc2
- (double)_heightForArtwork:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;	// IMP=0x0000000000106b0e
- (void)_expandEditorialComponent:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x00000000001068ee
- (void)_enumerateLockupsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000106777
- (id)_editorialLayoutForLockup:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x0000000000106506
- (id)_editorialLayoutForEditorial:(id)arg1 columnIndex:(long long)arg2;	// IMP=0x000000000010633b
- (struct UIEdgeInsets)_edgeInsetsForColumnIndex:(long long)arg1;	// IMP=0x0000000000106210
- (double)_columnWidthForColumnIndex:(long long)arg1 rowWidth:(double)arg2;	// IMP=0x0000000000105f71
- (id)_columnViews;	// IMP=0x0000000000105da5
- (double)_cellContentHeightForRowWidth:(double)arg1;	// IMP=0x0000000000105c36
- (void)productPageOverlayDidDismiss:(id)arg1;	// IMP=0x0000000000105b2b
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;	// IMP=0x0000000000105b19
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;	// IMP=0x0000000000105b07
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;	// IMP=0x000000000010586b
- (void)itemStateCenterRestrictionsChanged:(id)arg1;	// IMP=0x0000000000105625
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;	// IMP=0x00000000001051dc
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;	// IMP=0x0000000000104cab
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x000000000010498c
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000104608
- (void)willHideInContext:(id)arg1;	// IMP=0x000000000010456c
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000001042db
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x0000000000104256
- (long long)numberOfCells;	// IMP=0x00000000001040b9
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;	// IMP=0x0000000000104055
- (void)invalidateCachedLayoutInformation;	// IMP=0x000000000010400e
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x0000000000103f58
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x0000000000103e3c
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;	// IMP=0x0000000000103c08
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;	// IMP=0x0000000000103ba4
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x0000000000103956
- (id)cellForIndexPath:(id)arg1;	// IMP=0x0000000000103609
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x0000000000103548
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x0000000000103297
- (void)dealloc;	// IMP=0x00000000001031f5
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000103128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SUUIRowComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end
