//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionHandler, CollectionsDataProvider, CurrentLocationDataProvider, DistanceUnitDataProvider, IdentifierPath, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol MapsUIDiffableDataSourceViewModel;

@interface HomeOutlineCollectionsSectionController
{
    CurrentLocationDataProvider *_currentLocationDataProvider;	// 8 = 0x8
    CollectionsDataProvider *_collectionsDataProvider;	// 16 = 0x10
    DistanceUnitDataProvider *_distanceUnitDataProvider;	// 24 = 0x18
    NSMutableDictionary *_sortItems;	// 32 = 0x20
    NSMutableArray *_dropCollectionEditSessions;	// 40 = 0x28
    NSMutableArray *_deleteCollectionEditSessions;	// 48 = 0x30
    NSMutableArray *_moveCollectionEditSessions;	// 56 = 0x38
    NSMutableArray *_duplicateCollectionEditSessions;	// 64 = 0x40
    NSMutableDictionary *_shortcutEditSessions;	// 72 = 0x48
    IdentifierPath *_dropDestinationIdentifierPath;	// 80 = 0x50
    CollectionHandler *_editingCollection;	// 88 = 0x58
    CollectionHandler *_pendingCollection;	// 96 = 0x60
    CDUnknownBlockType _pendingCollectionOperation;	// 104 = 0x68
    NSTimer *_pendingCollectionTimer;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000c764a0
- (void)twoLinesOutlineCell:(id)arg1 accessoryViewTapped:(id)arg2 accessoryModel:(id)arg3;	// IMP=0x0010000000c75fb9
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x0010000000c75f4a
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x0010000000c75edb
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x0010000000c75db2
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x0010000000c75b5a
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x0010000000c75b09
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000c759c2
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000c7594c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000c75546
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000c75430
- (void)_deleteCollectionItemSnapshot:(id)arg1;	// IMP=0x0010000000c74fc6
- (void)_didConfirmDeleteCollection:(id)arg1 deletion:(id)arg2;	// IMP=0x0010000000c74da5
- (void)_deleteCollectionSnapshot:(id)arg1;	// IMP=0x0010000000c74aec
- (void)_deleteSnapshot:(id)arg1;	// IMP=0x0010000000c7498f
- (id)_collectionContainingIdentifierPath:(id)arg1;	// IMP=0x0010000000c7481c
- (id)_collectionContainingIndexPath:(id)arg1;	// IMP=0x0010000000c74734
- (void)_performCopyWithDropCoordinator:(id)arg1;	// IMP=0x0010000000c743d7
- (_Bool)_isCopyOperationWithDropSession:(id)arg1 destinationIndexPath:(id)arg2;	// IMP=0x0010000000c74307
- (void)_performMoveWithDropCoordinator:(id)arg1;	// IMP=0x0010000000c740ea
- (_Bool)_isMoveOperationWithDropSession:(id)arg1 destinationIndexPath:(id)arg2;	// IMP=0x0010000000c73eb7
- (void)smallButtonOutlineCellTapped:(id)arg1;	// IMP=0x0010000000c73ea5
- (void)sectionHeaderOutlineCell:(id)arg1 accessoryTypeTapped:(long long)arg2;	// IMP=0x0010000000c73e8b
- (void)_createCollection;	// IMP=0x0010000000c73c3d
- (void)_duplicateCollection:(id)arg1;	// IMP=0x0010000000c7387b
- (void)_moveMapItem:(id)arg1 fromCollection:(id)arg2 toCollection:(id)arg3;	// IMP=0x0010000000c732f8
- (void)_openSnapshot:(id)arg1 inNewTab:(_Bool)arg2;	// IMP=0x0010000000c72f25
- (void)_removeMapItemSnapshotFromFavorites:(id)arg1 shortcut:(id)arg2;	// IMP=0x0010000000c72bd6
- (void)_addMapItemSnapshotToFavorites:(id)arg1;	// IMP=0x0010000000c728e5
- (void)_renameMapItemSnapshot:(id)arg1;	// IMP=0x0010000000c725e2
- (void)_moveMapItemSnapshot:(id)arg1 toCollection:(id)arg2;	// IMP=0x0010000000c724b5
- (void)_copyMapItemSnapshot:(id)arg1;	// IMP=0x0010000000c724af
- (void)_pasteIntoCollectionSnapshot:(id)arg1;	// IMP=0x0010000000c724a9
- (void)_duplicateCollectionSnapshot:(id)arg1;	// IMP=0x0010000000c723f7
- (void)_addPlacesToCollectionSnapshot:(id)arg1;	// IMP=0x0010000000c72271
- (id)_contextMenuForTransitLineSnapshot:(id)arg1;	// IMP=0x0010000000c71e36
- (id)_contextMenuForMapItemSnapshot:(id)arg1;	// IMP=0x0010000000c70e35
- (id)_contextMenuForCollectionSnapshot:(id)arg1;	// IMP=0x0010000000c7046c
- (id)contextMenuForSnapshot:(id)arg1;	// IMP=0x0010000000c70321
- (void)collectionSortItem:(id)arg1 didSelectSortType:(long long)arg2;	// IMP=0x0010000000c70247
- (void)_scrubSortItems;	// IMP=0x0010000000c6ffbd
- (id)_sortItemForCollection:(id)arg1;	// IMP=0x0010000000c6fec6
- (_Bool)_shouldShowAddButtonForItemSnapshots:(id)arg1;	// IMP=0x0010000000c6fcc3
- (id)_childItemsInCollection:(id)arg1 excludeDeletions:(_Bool)arg2;	// IMP=0x0010000000c6f6ac
- (id)_identifierForItem:(id)arg1;	// IMP=0x0010000000c6f5c2
- (_Bool)_dataProviderContainsCollection:(id)arg1;	// IMP=0x0010000000c6f46f
- (void)_editCollectionSnapshot:(id)arg1;	// IMP=0x0010000000c6eeff
- (void)_editCollection:(id)arg1;	// IMP=0x0010000000c6edad
- (void)_showAndEditCollection:(id)arg1;	// IMP=0x0010000000c6ec8d
- (void)_showCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c6eac3
- (void)_performPendingCollectionOperationIfAvailable;	// IMP=0x0010000000c6ea00
- (void)_waitForCollection:(id)arg1 thenPerformOperation:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c6e763
- (void)_clearPendingCollection;	// IMP=0x0010000000c6e6fa
@property(readonly, nonatomic) _Bool persistsExpansions;
- (_Bool)shouldClearSelectionWithReason:(id)arg1;	// IMP=0x0010000000c6e6d1
- (id)sourceViewForProfileTipPopover;	// IMP=0x0010000000c6e588
- (void)editCollection:(id)arg1;	// IMP=0x0010000000c6e471
- (void)showCollection:(id)arg1;	// IMP=0x0010000000c6e358
- (id)shareItemSourceForSnapshot:(id)arg1;	// IMP=0x0010000000c6e2c1
- (id)contentInjectorForSnapshot:(id)arg1;	// IMP=0x0010000000c6e08a
- (long long)_accessoryVisibilityForCollection:(id)arg1 withAccessoryType:(long long)arg2;	// IMP=0x0010000000c6e060
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
- (void)didApplyInitialSectionSnapshot;	// IMP=0x0010000000c6cd17
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x0010000000c6cc9c
@property(readonly, nonatomic) NSArray *dataProviders;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000c6ca49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

