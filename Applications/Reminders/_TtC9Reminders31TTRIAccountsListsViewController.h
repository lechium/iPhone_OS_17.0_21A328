//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC9Reminders31TTRIAccountsListsViewController : UIViewController
{
    MISSING_TYPE *searchSelection;	// 8 = 0x8
    MISSING_TYPE *presenter;	// 232 = 0xe8
    MISSING_TYPE *viewModel;	// 248 = 0xf8
    MISSING_TYPE *currentEditModeTransition;	// 256 = 0x100
    MISSING_TYPE *searchController;	// 264 = 0x108
    MISSING_TYPE *searchResultContainerViewController;	// 272 = 0x110
    MISSING_TYPE *pendingSearchTerm;	// 280 = 0x118
    MISSING_TYPE *$__lazy_storage_$_addListButton;	// 296 = 0x128
    MISSING_TYPE *$__lazy_storage_$_addReminderButton;	// 304 = 0x130
    MISSING_TYPE *$__lazy_storage_$_addGroupButton;	// 312 = 0x138
    MISSING_TYPE *$__lazy_storage_$_editButton;	// 320 = 0x140
    MISSING_TYPE *$__lazy_storage_$_actionMenuButton;	// 328 = 0x148
    MISSING_TYPE *needsWorkaround51600172;	// 336 = 0x150
    MISSING_TYPE *accountSpinnerVisibleByAccountID;	// 344 = 0x158
    MISSING_TYPE *currentBarButtonItemConfiguration;	// 352 = 0x160
    MISSING_TYPE *dropExceedsMaximumNumberOfPinnedListsTracker;	// 360 = 0x168
    MISSING_TYPE *lastAppliedSelection;	// 368 = 0x170
    MISSING_TYPE *isInExpandedSplitViewSnapshot;	// 586 = 0x24a
}

- (void).cxx_destruct;	// IMP=0x004000000005e2c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000066910
- (void)showListAction:(id)arg1;	// IMP=0x0010000000065d40
- (void)beginSearchAction:(id)arg1;	// IMP=0x0010000000065680
- (void)newListAction:(id)arg1;	// IMP=0x00100000000655e0
- (void)didTapDone:(id)arg1;	// IMP=0x0010000000065570
- (void)didTapEdit:(id)arg1;	// IMP=0x0010000000065560
- (void)didTapNewGroup:(id)arg1;	// IMP=0x00100000000654e0
- (void)didTapNewList:(id)arg1;	// IMP=0x00100000000654c0
- (void)didTapNewReminder:(id)arg1;	// IMP=0x00100000000653f0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000061b50
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000061920
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000000612f0
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000060f30
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000060dd0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000060c10
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000060980
- (MISSING_TYPE *)viewDidLoad;	// IMP=0x0010000000060580
- (void)loadView;	// IMP=0x001000000005e540
- (void)dealloc;	// IMP=0x001000000005e2a0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000005e1a0

@end
