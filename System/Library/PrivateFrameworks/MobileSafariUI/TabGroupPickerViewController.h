//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UIBarButtonItem, UICollectionView, UICollectionViewDiffableDataSource;
@protocol TabGroupProvider;

__attribute__((visibility("hidden")))
@interface TabGroupPickerViewController : UIViewController
{
    id <TabGroupProvider> _tabGroupProvider;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UICollectionViewDiffableDataSource *_dataSource;	// 24 = 0x18
    UIBarButtonItem *_doneButton;	// 32 = 0x20
    _Bool _isReordering;	// 40 = 0x28
    _Bool _needsReloadData;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x00000000000bdf40
- (void)tabGroupManager:(id)arg1 didUpdateProfileWithIdentifier:(id)arg2 difference:(id)arg3;	// IMP=0x00000000000bdf2e
- (void)tabGroupManagerDidUpdateProfiles:(id)arg1;	// IMP=0x00000000000bdf1c
- (void)tabGroupManagerDidUpdateTabGroups:(id)arg1;	// IMP=0x00000000000bdf0a
- (void)tabGroupManager:(id)arg1 didUpdateTabGroupWithUUID:(id)arg2;	// IMP=0x00000000000bdef8
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000bdeed
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000bdee2
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000000bdedc
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000bde20
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000bdd04
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000000bdcfc
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000bda6e
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x00000000000bd94a
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000bd884
- (void)_updateTitle;	// IMP=0x00000000000bd734
- (id)_swipeActionsConfigurationForIndexPath:(id)arg1;	// IMP=0x00000000000bd65d
- (id)_checkmarkAccessory;	// IMP=0x00000000000bd625
- (_Bool)_shouldShowCheckmarkForTabGroup:(id)arg1;	// IMP=0x00000000000bd599
- (void)_enumerateTabGroupSectionsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd46c
- (void)_reloadData;	// IMP=0x00000000000bcf8d
- (void)_reloadDataIfNeeded;	// IMP=0x00000000000bcf6c
- (void)setNeedsReloadData;	// IMP=0x00000000000bcf24
- (void)doneButtonTapped;	// IMP=0x00000000000bcf0b
- (void)_removeDataUnrelatedToTabGroups;	// IMP=0x00000000000bce9b
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000bcdce
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000bcd8d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000bcd4c
- (void)viewDidLoad;	// IMP=0x00000000000bb4ab
- (void)loadView;	// IMP=0x00000000000baff1
- (id)initWithTabGroupProvider:(id)arg1;	// IMP=0x00000000000baf60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
