//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MobileSafariUI/SFFluidCollectionViewDelegate-Protocol.h>

@class NSArray, NSHashTable, NSIndexPath, NSMutableSet, NSString, SFCapsuleCollectionView, SFFluidCollectionView, SFFluidTabOverviewCapsuleSelectionInteraction, SFFluidTabOverviewDataSource, SFFluidTabOverviewHeaderView, SFFluidTabOverviewLinearLayout, SFFluidTabOverviewPinchInteraction, SFFluidTabOverviewZoomableGridLayout, TabController, TabOverviewToolbar, UIGestureRecognizer, UIView;
@protocol TabCollectionItem, TabThumbnailCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface SFFluidTabOverviewViewController : UIViewController <SFFluidCollectionViewDelegate>
{
    id <TabCollectionItem> _activeItem;	// 8 = 0x8
    SFFluidTabOverviewCapsuleSelectionInteraction *_capsuleInteraction;	// 16 = 0x10
    SFFluidTabOverviewDataSource *_dataSource;	// 24 = 0x18
    SFFluidCollectionView *_fluidCollectionView;	// 32 = 0x20
    SFFluidTabOverviewZoomableGridLayout *_gridLayout;	// 40 = 0x28
    SFFluidTabOverviewHeaderView *_headerForSizing;	// 48 = 0x30
    SFFluidTabOverviewLinearLayout *_linearLayout;	// 56 = 0x38
    SFFluidTabOverviewPinchInteraction *_pinchInteraction;	// 64 = 0x40
    NSHashTable *_presentationObservers;	// 72 = 0x48
    NSIndexPath *_swipeDeleteIndexPath;	// 80 = 0x50
    _Bool _toolbarHidden;	// 88 = 0x58
    _Bool _updateWasDeferred;	// 89 = 0x59
    NSMutableSet *_viewsWithBorrowedContentViews;	// 96 = 0x60
    _Bool _tabControllerIsPerformingBatchUpdates;	// 104 = 0x68
    unsigned long long _edgeForPreviousTabGroup;	// 112 = 0x70
    _Bool _defersActivation;	// 120 = 0x78
    id <TabThumbnailCollectionViewDelegate> _delegate;	// 128 = 0x80
    id <TabCollectionItem> _itemToActivate;	// 136 = 0x88
    NSString *_searchTerm;	// 144 = 0x90
    TabOverviewToolbar *_toolbar;	// 152 = 0x98
    long long _itemDragContentType;	// 160 = 0xa0
    long long _presentationState;	// 168 = 0xa8
    SFCapsuleCollectionView *_capsuleCollectionView;	// 176 = 0xb0
    TabController *_tabController;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000016a93a
@property(nonatomic) __weak TabController *tabController; // @synthesize tabController=_tabController;
@property(nonatomic) __weak SFCapsuleCollectionView *capsuleCollectionView; // @synthesize capsuleCollectionView=_capsuleCollectionView;
@property(readonly, nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(readonly, nonatomic) long long itemDragContentType; // @synthesize itemDragContentType=_itemDragContentType;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) id <TabCollectionItem> itemToActivate; // @synthesize itemToActivate=_itemToActivate;
@property(nonatomic) _Bool defersActivation; // @synthesize defersActivation=_defersActivation;
@property(nonatomic) __weak id <TabThumbnailCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tabControllerDidEndUpdates:(id)arg1;	// IMP=0x000000000016a823
- (void)tabControllerWillBeginUpdates:(id)arg1;	// IMP=0x000000000016a812
- (void)tabController:(id)arg1 didSwitchFromTabGroup:(id)arg2;	// IMP=0x000000000016a6e0
- (void)tabController:(id)arg1 didSwitchFromTabDocument:(id)arg2 toTabDocument:(id)arg3;	// IMP=0x000000000016a699
- (void)tabControllerDocumentCountDidChange:(id)arg1;	// IMP=0x000000000016a68f
- (void)itemViewDidChangeWantsBorrowedContentView:(id)arg1;	// IMP=0x000000000016a685
- (double)fluidCollectionView:(id)arg1 interaction:(id)arg2 targetScaleForPinchingItemAtIndexPath:(id)arg3;	// IMP=0x000000000016a4c8
- (id)fluidCollectionView:(id)arg1 indexPathForCapsuleSelectionGestureInteraction:(id)arg2;	// IMP=0x000000000016a49d
- (void)fluidCollectionView:(id)arg1 interaction:(id)arg2 didDeleteItemAtIndexPath:(id)arg3;	// IMP=0x000000000016a3f5
- (_Bool)fluidCollectionView:(id)arg1 interaction:(id)arg2 canDeleteItemAtIndexPath:(id)arg3;	// IMP=0x000000000016a328
- (double)fluidCollectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(unsigned long long)arg3;	// IMP=0x000000000016a2ee
- (double)fluidCollectionView:(id)arg1 layout:(id)arg2 heightForItemsInSection:(unsigned long long)arg3;	// IMP=0x000000000016a2bb
- (unsigned long long)fluidCollectionView:(id)arg1 layout:(id)arg2 edgeForDeletedItemAtIndexPath:(id)arg3;	// IMP=0x000000000016a27a
- (void)fluidCollectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000000016a274
- (_Bool)fluidCollectionView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x000000000016a26c
- (id)fluidCollectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000016a256
- (id)fluidCollectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000016a23f
- (void)fluidCollectionView:(id)arg1 didEndAnimatingItemAtIndexPath:(id)arg2;	// IMP=0x000000000016a1ba
- (void)fluidCollectionView:(id)arg1 willBeginAnimatingItemAtIndexPath:(id)arg2;	// IMP=0x000000000016a13d
- (void)fluidCollectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000169faf
- (id)fluidCollectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000169df7
- (double)fluidCollectionView:(id)arg1 delayForAnimatingItemAtIndexPath:(id)arg2 indexPathBeforeUpdate:(id)arg3 update:(id)arg4;	// IMP=0x0000000000169970
- (void)fluidCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001698aa
- (struct CGSize)snapshotSizeForSuggestedSize:(struct CGSize)arg1;	// IMP=0x00000000001698a4
- (unsigned long long)estimatedSnapshotsPerPageForBounds:(struct CGRect)arg1 withTraitCollection:(id)arg2;	// IMP=0x0000000000169899
@property(readonly, nonatomic) unsigned long long snapshotBorderOptions;
@property(readonly, nonatomic) double desiredSnapshotScale;
- (void)enumerateItemsOrderedByVisibility:(CDUnknownBlockType)arg1;	// IMP=0x000000000016987d
@property(readonly, nonatomic) NSArray *itemsFullyInView;
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (void)endSearching;	// IMP=0x0000000000169862
- (void)beginSearching;	// IMP=0x000000000016985c
@property(readonly, nonatomic) NSArray *itemsMatchingSearchTerm;
- (void)didUpdateItem:(id)arg1;	// IMP=0x0000000000169789
@property(readonly, copy, nonatomic) NSArray *items;
- (void)_capsuleInteractionDidEnd:(id)arg1;	// IMP=0x00000000001696f1
- (void)_capsuleInteractionDidBegin:(id)arg1;	// IMP=0x000000000016961a
- (void)_tabPinchInteractionDidEnd:(id)arg1;	// IMP=0x0000000000169474
- (void)_tabPinchInteractionDidBegin:(id)arg1;	// IMP=0x00000000001693d5
- (void)removePresentationObserver:(id)arg1;	// IMP=0x00000000001690c1
- (void)addPresentationObserver:(id)arg1;	// IMP=0x00000000001690a4
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x0000000000168e27
- (void)presentAnimated:(_Bool)arg1;	// IMP=0x0000000000168950
@property(readonly, nonatomic) UIGestureRecognizer *pinchPresentationGestureRecognizer;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000167377
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x000000000016729b
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001670c4
@property(readonly, nonatomic) TabOverviewToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000166cdd
- (void)viewDidLoad;	// IMP=0x0000000000166192
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000166098

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end

