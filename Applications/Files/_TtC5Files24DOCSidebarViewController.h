//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOCConcreteLocation, MISSING_TYPE, NSArray, UICollectionView, UICollectionViewCompositionalLayout, _TtC5Files16DOCPickerContext, _TtC5Files19DOCSearchController;
@protocol _TtP5Files27DOCScannedDocumentReceiving_, _TtP5Files32DOCSidebarViewControllerDelegate_;

@interface _TtC5Files24DOCSidebarViewController
{
    MISSING_TYPE *sidebarHasActiveFocus;	// 8 = 0x8
    MISSING_TYPE *sidebarDelegate;	// 16 = 0x10
    MISSING_TYPE *pickerContext;	// 24 = 0x18
    MISSING_TYPE *configuration;	// 32 = 0x20
    MISSING_TYPE *_mutableSectionsData;	// 40 = 0x28
    MISSING_TYPE *isObservingSectionDataProviders;	// 48 = 0x30
    MISSING_TYPE *sourceVisibilityController;	// 56 = 0x38
    MISSING_TYPE *hasSomeUnseenSources;	// 64 = 0x40
    MISSING_TYPE *sourceObserver;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_notificationsController;	// 80 = 0x50
    MISSING_TYPE *recentlyUsedNotificationRegistration;	// 88 = 0x58
    MISSING_TYPE *favoritesSubscriber;	// 104 = 0x68
    MISSING_TYPE *recentlyUsedFavoritesSubscriber;	// 112 = 0x70
    MISSING_TYPE *hasSeenInitiallyGatheredFavorites;	// 120 = 0x78
    MISSING_TYPE *trashObserver;	// 128 = 0x80
    MISSING_TYPE *trashSubscriber;	// 136 = 0x88
    MISSING_TYPE *_diffableDataSource;	// 144 = 0x90
    MISSING_TYPE *diffableReloadIsInProgressCount;	// 176 = 0xb0
    MISSING_TYPE *diffableNeedsReload;	// 184 = 0xb8
    MISSING_TYPE *diffableReloadsCoalescedCount;	// 192 = 0xc0
    MISSING_TYPE *appLaunchOptimizationsActive;	// 200 = 0xc8
    MISSING_TYPE *itemToCachedIcon;	// 208 = 0xd0
    MISSING_TYPE *dropPointIndicatorView;	// 216 = 0xd8
    MISSING_TYPE *activeDropContext;	// 224 = 0xe0
    MISSING_TYPE *editingSession;	// 232 = 0xe8
    MISSING_TYPE *shouldStopEditingOnFinishedEdit;	// 240 = 0xf0
    MISSING_TYPE *swipeToDeletePresentation;	// 248 = 0xf8
    MISSING_TYPE *itemSelectionPacer;	// 256 = 0x100
    MISSING_TYPE *preferredFocusIndexPath;	// 2 = 0x2
    MISSING_TYPE *currentlySelectedSidebarItem;	// 0 = 0x0
    MISSING_TYPE *pendingSelectionProviderDomainIdentifier;	// 0 = 0x0
    MISSING_TYPE *locationSelection;	// 0 = 0x0
    MISSING_TYPE *searchController;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *sourcesOrderObserver;	// 1953002597 = 0x74687465
    MISSING_TYPE *sourcesVisitedObserver;	// 0 = 0x0
    MISSING_TYPE *sectionsDisablingUpdateAnimationUntilFirstLoad;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *lastSearchDisplayMode;	// 0 = 0x0
    MISSING_TYPE *additionalTrailingNavigationBarButtonItems;	// 4923175 = 0x4b1f27
    MISSING_TYPE *actionManager;	// 27566 = 0x6bae
    MISSING_TYPE *customActions;	// 4923175 = 0x4b1f27
    MISSING_TYPE *contextMenuInteraction;	// 0 = 0x0
    MISSING_TYPE *modelDidUpdateDuringUIChange;	// 0 = 0x0
    MISSING_TYPE *_enclosedInTabSwitchingUI;	// 0 = 0x0
    MISSING_TYPE *_updatingModelForUIChangeCount;	// 0 = 0x0
    MISSING_TYPE *debugOptionsMenu;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00200000001badb0
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x00100000001bb000
- (void)dealloc;	// IMP=0x00100000001bad90
- (id)initWithConfiguration:(id)arg1 sourceObserver:(id)arg2;	// IMP=0x00100000001baa00
@property(nonatomic, retain) UICollectionView *collectionView;
@property(nonatomic, copy) NSArray *customActions;
@property(nonatomic, copy) NSArray *additionalTrailingNavigationBarButtonItems;
@property(nonatomic, retain) _TtC5Files19DOCSearchController *searchController; // @synthesize searchController;
@property(nonatomic, readonly) DOCConcreteLocation *selectedLocation;
@property(nonatomic, retain) _TtC5Files16DOCPickerContext *pickerContext; // @synthesize pickerContext;
@property(nonatomic) __weak id <_TtP5Files32DOCSidebarViewControllerDelegate_> sidebarDelegate; // @synthesize sidebarDelegate;
@property(nonatomic) _Bool sidebarHasActiveFocus; // @synthesize sidebarHasActiveFocus;
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00100000000d0cf0
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x00100000000d0c40
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x00100000000d0c10
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00100000000d0b10
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x00100000000cebe0
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00100000000ce940
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00100000000ce8d0
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00100000000cd670
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000ccd90
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000023ce20
@property(nonatomic) _Bool editing;
- (_Bool)isEditing;	// IMP=0x001000000023c7b0
- (void)documentCameraViewController:(id)arg1 didFinishWithScan:(id)arg2;	// IMP=0x001000000025a390
- (void)documentCameraViewControllerDidCancel:(id)arg1;	// IMP=0x001000000025a370
@property(nonatomic, readonly) id <_TtP5Files27DOCScannedDocumentReceiving_> doc_documentScannerReceivingTarget;
- (void)revealWithItems:(id)arg1 selectEvenIfVisible:(_Bool)arg2;	// IMP=0x0010000000263080
- (void)getCellFor:(id)arg1:(CDUnknownBlockType)arg2;	// IMP=0x0010000000262f70
- (void)getViewFor:(id)arg1 waitForNewThumbnail:(_Bool)arg2:(CDUnknownBlockType)arg3;	// IMP=0x0010000000262e20
- (void)getPopoverTrackerForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000262d10
- (void)getTransitionControllerForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000262c00
- (void)getTransitionControllerForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000262a80
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0010000000365d20
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000367fe0
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0010000000367f10
@property(nonatomic, readonly) UICollectionViewCompositionalLayout *collectionViewLayout;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0010000000441620

@end

