//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNAccountsAndGroupsDataSource, CNContactViewCache, NSArray, NSString, UICollectionView, UICollectionViewDiffableDataSource;
@protocol CNContactContainerPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactContainerPickerViewController : UIViewController
{
    id <CNContactContainerPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    NSArray *_selectedContainerIdentifiers;	// 16 = 0x10
    CNContactViewCache *_contactViewCache;	// 24 = 0x18
    CNAccountsAndGroupsDataSource *_accountsDataSource;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    UICollectionViewDiffableDataSource *_dataSource;	// 48 = 0x30
    NSArray *_items;	// 56 = 0x38
    NSArray *_containers;	// 64 = 0x40
}

+ (id)os_log;	// IMP=0x0010000000357938
- (void).cxx_destruct;	// IMP=0x00000000003572eb
@property(retain, nonatomic) NSArray *containers; // @synthesize containers=_containers;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CNAccountsAndGroupsDataSource *accountsDataSource; // @synthesize accountsDataSource=_accountsDataSource;
@property(retain, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property(retain, nonatomic) NSArray *selectedContainerIdentifiers; // @synthesize selectedContainerIdentifiers=_selectedContainerIdentifiers;
@property(nonatomic) __weak id <CNContactContainerPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000356fdc
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000356e99
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000356cca
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000356bd8
- (void)reloadData;	// IMP=0x0000000000356ad0
- (id)currentSnapshot;	// IMP=0x0000000000356a4f
- (id)dataSourceWithCellRegistration:(id)arg1;	// IMP=0x0000000000356973
- (void)setupDiffableDataSource;	// IMP=0x00000000003568b2
- (void)setupCollectionView;	// IMP=0x00000000003566e7
- (void)setupDoneButton;	// IMP=0x00000000003565ff
- (void)viewDidLoad;	// IMP=0x00000000003564b1
- (id)writableContainersForAccount:(id)arg1;	// IMP=0x0000000000356246
- (id)allAccounts;	// IMP=0x00000000003560dd
- (void)discoverContainers;	// IMP=0x000000000035568d
- (id)initWithContactViewCache:(id)arg1 selectedContainerIdentifiers:(id)arg2;	// IMP=0x00000000003554ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

