//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSString, SUUIItemListTableViewController, SUUISyncWishlistOperation, SUUIWishlist, UIBarButtonItem, _UIBackdropView, _UIContentUnavailableView;
@protocol SUUIWishlistDelegate;

__attribute__((visibility("hidden")))
@interface SUUIWishlistViewController : SUUIViewController
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    id <SUUIWishlistDelegate> _delegate;	// 16 = 0x10
    UIBarButtonItem *_deleteButton;	// 24 = 0x18
    _Bool _editing;	// 32 = 0x20
    _UIContentUnavailableView *_emptyWishlistView;	// 40 = 0x28
    SUUIItemListTableViewController *_itemListViewController;	// 48 = 0x30
    _Bool _reloadOnNextAppear;	// 56 = 0x38
    SUUISyncWishlistOperation *_syncOperation;	// 64 = 0x40
    SUUIWishlist *_wishlist;	// 72 = 0x48
    long long _wishlistState;	// 80 = 0x50
}

+ (id)wishlistBarButtonItemWithClientContext:(id)arg1;	// IMP=0x001000000036d8e7
- (void).cxx_destruct;	// IMP=0x0000000000370439
@property(nonatomic) __weak id <SUUIWishlistDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_wishlistState;	// IMP=0x00000000003702bb
- (id)_wishlist;	// IMP=0x000000000037026a
- (void)_updateDeleteButton;	// IMP=0x000000000036ffa9
- (void)_syncWishlist;	// IMP=0x000000000036fd6a
- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000036fc97
- (void)_reloadWishlist;	// IMP=0x000000000036fc67
- (void)_reloadNavigationBarAnimated:(_Bool)arg1;	// IMP=0x000000000036f553
- (void)_reloadForAccountsChanged;	// IMP=0x000000000036f48b
- (void)_reloadChildView;	// IMP=0x000000000036ef5a
- (id)_itemListViewController;	// IMP=0x000000000036ed85
- (_Bool)_isEditingEnabled;	// IMP=0x000000000036ed13
- (void)_finishSyncWithResult:(_Bool)arg1 didChange:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000036ebe1
- (void)_finishSignInWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000000036eb86
- (id)_emptyWishlistView;	// IMP=0x000000000036ea43
- (void)_destroyEmptyWishlistView;	// IMP=0x000000000036ea0b
- (void)_deleteItemsAtIndexPaths:(id)arg1;	// IMP=0x000000000036e6e1
- (void)_toggleEditAction:(id)arg1;	// IMP=0x000000000036e6ba
- (void)_signInAction:(id)arg1;	// IMP=0x000000000036e428
- (void)_doneAction:(id)arg1;	// IMP=0x000000000036e40f
- (void)_deleteAction:(id)arg1;	// IMP=0x000000000036e378
- (void)_wishlistDidChangeNotification:(id)arg1;	// IMP=0x000000000036e2a6
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000036e124
- (void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;	// IMP=0x000000000036e07c
- (void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000036e05b
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000036de8e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000036ddf8
- (void)viewDidLayoutSubviews;	// IMP=0x000000000036dd6e
- (void)loadView;	// IMP=0x000000000036dbaa
- (id)contentScrollView;	// IMP=0x000000000036db5a
- (void)setClientContext:(id)arg1;	// IMP=0x000000000036da87
- (void)dealloc;	// IMP=0x000000000036d835
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000036d6ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

