//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class MISSING_TYPE, NSUndoManager;

@interface _TtC8Freeform30CRLiOSFolderGridViewController : UICollectionViewController
{
    MISSING_TYPE *folder;	// 1395618667 = 0x532f736b
    MISSING_TYPE *delegate;	// 1953060708 = 0x74695764
    MISSING_TYPE *thumbnailProvider;	// 1634887214 = 0x6172662e
    MISSING_TYPE *$__lazy_storage_$_diffableDataSource;	// 0 = 0x0
    MISSING_TYPE *libraryProvider;	// 0 = 0x0
    MISSING_TYPE *pendingBoardIdentifiersToRefresh;	// 0 = 0x0
    MISSING_TYPE *boardPreviewImageCache;	// 1395616626 = 0x532f6b72
    MISSING_TYPE *boardSearchHelper;	// 0 = 0x0
    MISSING_TYPE *imageCacheObserver;	// 0 = 0x0
    MISSING_TYPE *storeMetadataObserver;	// 0 = 0x0
    MISSING_TYPE *renameDeleteObserver;	// 0 = 0x0
    MISSING_TYPE *searchString;	// 1953060708 = 0x74695764
    MISSING_TYPE *searchComplete;	// 0 = 0x0
    MISSING_TYPE *isCurrentlyInMultipleSelectionInteraction;	// 0 = 0x0
    MISSING_TYPE *isGridLayout;	// 12 = 0xc
    MISSING_TYPE *_persistedSortOptions;	// 0 = 0x0
    MISSING_TYPE *gridLayout;	// 0 = 0x0
    MISSING_TYPE *listLayout;	// 0 = 0x0
    MISSING_TYPE *iCloudStatusObserver;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_libraryProviderRefreshLimiter;	// 0 = 0x0
    MISSING_TYPE *syncDidEndObserver;	// 0 = 0x0
    MISSING_TYPE *syncDidBeginObserver;	// 0 = 0x0
    MISSING_TYPE *isPresentingBoardNavigationController;	// 0 = 0x0
    MISSING_TYPE *_currentSnapshotWithExpandedSections;	// 0 = 0x0
    MISSING_TYPE *collapsedSections;	// 24 = 0x18
    MISSING_TYPE *shouldSaveViewState;	// 65536 = 0x10000
    MISSING_TYPE *$__lazy_storage_$_layoutBarButtonItem;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_toolbarItemToAddBoard;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_toolbarItemToSelectAllOrNone;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_editModeToolbarButtonToDuplicateSelectedItems;	// 0 = 0x0
    MISSING_TYPE *defaultTitleForToolbarItemToSelectAllOrNone;	// 0 = 0x0
    MISSING_TYPE *alternateTitleForToolbarItemToSelectAllOrNone;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_emptyFolderViewController;	// 0 = 0x0
    MISSING_TYPE *emptyFolderBottomConstraint;	// 0 = 0x0
    MISSING_TYPE *keyboardHeight;	// 0 = 0x0
    MISSING_TYPE *showsEmptyFolderView;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0020000000d49610
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000d57e30
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000d57000
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000d56fe0
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000d56f50
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0010000000d56710
- (void)collectionViewDidEndMultipleSelectionInteraction:(id)arg1;	// IMP=0x0010000000d55e50
- (void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x0010000000d55d60
- (_Bool)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x0010000000d55cb0
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000d55540
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000d55180
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000d548d0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000d54600
- (void)restoreUserActivityState:(id)arg1;	// IMP=0x0010000000d4f460
- (void)redo:(id)arg1;	// IMP=0x0010000000d4e9a0
- (void)undo:(id)arg1;	// IMP=0x0010000000d4e980
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)find:(id)arg1;	// IMP=0x0010000000d4e730
- (void)validateCommand:(id)arg1;	// IMP=0x0010000000d4e640
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000d4e5b0
- (void)reloadAllItems;	// IMP=0x0010000000d4e140
- (void)handleBoardLibrarySnapshotUpdateWithNotification:(id)arg1;	// IMP=0x0010000000d4cad0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000d4bc50
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000d4b9b0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000d4b3c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000d4b380
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000d4aff0
- (void)viewDidLoad;	// IMP=0x0010000000d4a270
- (void)dealloc;	// IMP=0x0010000000d495f0
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x0010000000d492e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000d49290
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (_Bool)accessibilityPerformEscape;	// IMP=0x0010000000f4f400

@end

