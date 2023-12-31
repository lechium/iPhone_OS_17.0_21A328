//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KCSharingGroup, NSString, SFTableViewDiffableDataSource, UIBarButtonItem, WBSAutoFillQuirksManager, WBSSavedAccount;

__attribute__((visibility("hidden")))
@interface SFRecentlyDeletedAccountsViewController
{
    SFTableViewDiffableDataSource *_diffableDataSource;	// 8 = 0x8
    WBSAutoFillQuirksManager *_autoFillQuirksManager;	// 16 = 0x10
    unsigned long long _persona;	// 24 = 0x18
    KCSharingGroup *_group;	// 32 = 0x20
    UIBarButtonItem *_selectBarButtonItem;	// 40 = 0x28
    UIBarButtonItem *_cancelBarButtonItem;	// 48 = 0x30
    UIBarButtonItem *_deleteToolbarItem;	// 56 = 0x38
    UIBarButtonItem *_recoverToolbarItem;	// 64 = 0x40
    UIBarButtonItem *_recoverMenuToolbarItem;	// 72 = 0x48
    UIBarButtonItem *_toolbarSpacerItem;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001a8c38
- (void)passwordManagerWillLock;	// IMP=0x00000000001a8bce
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x00000000001a8bc6
- (_Bool)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a8ac1
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a89d6
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000001a82fa
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a7f45
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001a7e82
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000001a7db9
- (id)_headerForSharingGroupSection:(id)arg1;	// IMP=0x00000000001a7c7e
- (id)_headerForMyPasswordsSection;	// IMP=0x00000000001a7b4b
- (_Bool)_shouldShowMyPasswordsSectionHeader;	// IMP=0x00000000001a7a56
- (id)_headerForHeaderSection;	// IMP=0x00000000001a7830
- (void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x00000000001a7819
- (_Bool)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x00000000001a7811
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001a76f5
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a76bb
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a7547
- (id)_selectedSavedAccounts;	// IMP=0x00000000001a73ed
- (_Bool)_shouldShowToolbarWhenSearching;	// IMP=0x00000000001a73e5
- (_Bool)_recoverSavedAccountToMyPasswords:(id)arg1;	// IMP=0x00000000001a72c7
- (void)_recoverSavedAccounts:(id)arg1 shouldRecoverToMyPasswords:(_Bool)arg2;	// IMP=0x00000000001a6f5f
- (void)_recoverSelectedSavedAccounts;	// IMP=0x00000000001a6f11
- (void)_recoverSelectedAccountsToMyPasswords;	// IMP=0x00000000001a6ca6
- (void)_setEditing:(_Bool)arg1;	// IMP=0x00000000001a6995
- (void)_recoverButtonTapped:(id)arg1;	// IMP=0x00000000001a6983
- (void)_deleteButtonTapped:(id)arg1;	// IMP=0x00000000001a6913
- (void)_cancelBarButtonItemTapped:(id)arg1;	// IMP=0x00000000001a68ff
- (void)_selectBarButtonItemTapped:(id)arg1;	// IMP=0x00000000001a68e8
- (void)_deleteAccountsAtIndexPaths:(id)arg1;	// IMP=0x00000000001a654f
- (void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a6140
- (void)searchPatternDidUpdate;	// IMP=0x00000000001a612e
- (id)_cellForIdentifier:(id)arg1 tableView:(id)arg2;	// IMP=0x00000000001a5ec9
- (void)_reloadDiffableDataSource;	// IMP=0x00000000001a5491
- (void)_updateToolbar;	// IMP=0x00000000001a5278
- (void)_updateNavigationBar;	// IMP=0x00000000001a5204
- (id)_recoverSharedAccountsMenu;	// IMP=0x00000000001a4f05
- (void)_setUpNavigationBarAndToolbarItems;	// IMP=0x00000000001a4c04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001a4ba1
- (void)viewDidLoad;	// IMP=0x00000000001a4930
- (id)_initWithAutoFillQuirksManager:(id)arg1;	// IMP=0x00000000001a4799
- (id)initWithAutoFillQuirksManager:(id)arg1 group:(id)arg2;	// IMP=0x00000000001a4715
- (id)initWithAutoFillQuirksManager:(id)arg1;	// IMP=0x00000000001a46cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property(readonly, nonatomic) _Bool shouldSuppressAccountManagerLockedView;
@property(readonly) Class superclass;

@end

