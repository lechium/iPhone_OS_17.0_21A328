//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class EKCalendarItem, EKCalendarItemEditItem, EKChangeSet, EKEventStore, EKUIRecurrenceAlertController, NSArray, NSMutableSet, NSString, UIBarButtonItem, UIResponder, _UIAccessDeniedView;
@protocol EKCalendarItemEditorDelegate;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditor : UITableViewController
{
    NSArray *_editItems;	// 8 = 0x8
    NSArray *_orderedEditItems;	// 16 = 0x10
    id _revertState;	// 24 = 0x18
    _Bool _showsTimeZone;	// 32 = 0x20
    long long _lastAuthorizationStatus;	// 40 = 0x28
    _Bool _shouldOverrideAuthorizationStatus;	// 48 = 0x30
    NSArray *_currentItems;	// 56 = 0x38
    EKUIRecurrenceAlertController *_recurrenceAlertController;	// 64 = 0x40
    EKCalendarItemEditItem *_currentEditItem;	// 72 = 0x48
    _Bool _giveTitleCellKeyboardFocus;	// 80 = 0x50
    _Bool _needsFirstResponderSet;	// 81 = 0x51
    int _editItemVisibility;	// 84 = 0x54
    _Bool _isIgnoringCellHeightChange;	// 88 = 0x58
    _Bool _needsCellHeightChange;	// 89 = 0x59
    NSMutableSet *_editItemsDisablingDoneButton;	// 96 = 0x60
    _Bool _hasAppeared;	// 104 = 0x68
    UIBarButtonItem *_cancelButton;	// 112 = 0x70
    UIBarButtonItem *_doneButton;	// 120 = 0x78
    _Bool _timeImplicitlySet;	// 128 = 0x80
    _Bool _isTextEditing;	// 129 = 0x81
    _Bool _pendingVideoConference;	// 130 = 0x82
    _Bool _hasModifiedAttendeesFromSuggestion;	// 131 = 0x83
    id <EKCalendarItemEditorDelegate> _editorDelegate;	// 136 = 0x88
    EKEventStore *_store;	// 144 = 0x90
    EKCalendarItem *_calendarItem;	// 152 = 0x98
    UIResponder *_responderToRestoreOnAppearence;	// 160 = 0xa0
    unsigned long long _visibleSectionToRestoreOnAppearence;	// 168 = 0xa8
    NSString *_calendarItemCreationMethod;	// 176 = 0xb0
    _UIAccessDeniedView *_accessDeniedView;	// 184 = 0xb8
    EKChangeSet *_originalChangeSet;	// 192 = 0xc0
}

+ (id)_doneLocalizedString;	// IMP=0x0010000000182916
+ (id)_addLocalizedString;	// IMP=0x00100000001828be
+ (id)defaultTitleForCalendarItem;	// IMP=0x0010000000181d3f
- (void).cxx_destruct;	// IMP=0x00000000001870f2
@property(retain, nonatomic) EKChangeSet *originalChangeSet; // @synthesize originalChangeSet=_originalChangeSet;
@property(retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(retain, nonatomic) NSString *calendarItemCreationMethod; // @synthesize calendarItemCreationMethod=_calendarItemCreationMethod;
@property(nonatomic) _Bool hasModifiedAttendeesFromSuggestion; // @synthesize hasModifiedAttendeesFromSuggestion=_hasModifiedAttendeesFromSuggestion;
@property(nonatomic) _Bool pendingVideoConference; // @synthesize pendingVideoConference=_pendingVideoConference;
@property(nonatomic) _Bool isTextEditing; // @synthesize isTextEditing=_isTextEditing;
@property(nonatomic) _Bool timeImplicitlySet; // @synthesize timeImplicitlySet=_timeImplicitlySet;
@property(readonly) EKCalendarItemEditItem *currentEditItem; // @synthesize currentEditItem=_currentEditItem;
@property(nonatomic) _Bool showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) unsigned long long visibleSectionToRestoreOnAppearence; // @synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence;
@property(retain, nonatomic) UIResponder *responderToRestoreOnAppearence; // @synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence;
@property(retain, nonatomic) EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(retain, nonatomic) EKEventStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <EKCalendarItemEditorDelegate> editorDelegate; // @synthesize editorDelegate=_editorDelegate;
- (void)setTitle:(id)arg1;	// IMP=0x0000000000186edf
- (id)title;	// IMP=0x0000000000186e8f
- (id)navigationItem;	// IMP=0x0000000000186e3f
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000186e37
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000186ded
- (void)handleSaveKeyCommand;	// IMP=0x0000000000186db4
- (void)handleCloseKeyCommand;	// IMP=0x0000000000186da0
- (_Bool)canPerformSaveKeyCommand;	// IMP=0x0000000000186d83
- (void)_presentDetachSheetForEvent:(id)arg1 saveAttachments:(_Bool)arg2 withContinueBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000186a73
- (void)_presentAttachmentRecurrenceSheetForEvent:(id)arg1 withContinueBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000186895
- (id)_viewForSheet;	// IMP=0x000000000020ebb0
- (id)_nameForDeleteButton;	// IMP=0x000000000020eb82
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000186766
- (_Bool)_performSave:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000186464
- (void)_performDelete:(long long)arg1;	// IMP=0x000000000018612b
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000186039
- (void)deleteClicked:(id)arg1;	// IMP=0x0000000000185e5a
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x0000000000185e48
- (void)tableViewDidStartReload:(id)arg1;	// IMP=0x0000000000185e36
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000185bd3
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000185b21
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000018591b
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001856b2
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000001855c6
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001853c0
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000018537a
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000018532b
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000018528b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000018506e
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000184fbe
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000184e75
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000184d72
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000184b49
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000184aa9
- (id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(long long *)arg2;	// IMP=0x000000000018480f
- (void)editItemWantsFirstResponderResigned:(id)arg1;	// IMP=0x00000000001847d2
- (void)editItem:(id)arg1 wantsViewControllerPushed:(id)arg2;	// IMP=0x0000000000184764
- (void)editItem:(id)arg1 wantsViewControllerPresented:(id)arg2;	// IMP=0x00000000001846e0
- (id)cellWithReuseIdentifier:(id)arg1 forEditItem:(id)arg2;	// IMP=0x0000000000184666
- (id)defaultAlertTitleForEditItem:(id)arg1;	// IMP=0x0000000000184654
- (void)editItemRequiresPopoverSizeUpdate:(id)arg1;	// IMP=0x00000000001845c5
- (void)editItemRequiresHeightChange:(id)arg1;	// IMP=0x0000000000184599
- (void)editItemVisibilityChanged:(id)arg1;	// IMP=0x0000000000184587
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;	// IMP=0x0000000000184064
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;	// IMP=0x0000000000183b30
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;	// IMP=0x0000000000183b1b
- (long long)rowNumberForEditItem:(id)arg1;	// IMP=0x0000000000183710
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;	// IMP=0x00000000001835cf
- (void)editItemWantsFooterTitlesToReload:(id)arg1;	// IMP=0x00000000001833eb
- (void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3;	// IMP=0x00000000001832e5
- (void)_reallyHandleCellHeightChange;	// IMP=0x0000000000183171
- (void)_tableViewDidUpdateHeights;	// IMP=0x000000000018312d
- (void)_tableViewWillUpdateHeights;	// IMP=0x000000000018311c
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(_Bool)arg2;	// IMP=0x0000000000183066
- (_Bool)_canEnableDoneButton;	// IMP=0x0000000000182fff
- (void)editItem:(id)arg1 wantsKeyboardPinned:(_Bool)arg2;	// IMP=0x0000000000182feb
- (id)viewControllerForEditItem:(id)arg1;	// IMP=0x0000000000182fe2
- (void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;	// IMP=0x0000000000182f0e
- (void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;	// IMP=0x0000000000182ef1
- (void)editItemTextChanged:(id)arg1;	// IMP=0x0000000000182e63
- (void)editItemDidEndEditing:(id)arg1;	// IMP=0x0000000000182dea
- (void)_updateDoneButtonState;	// IMP=0x0000000000182db9
- (void)editItem:(id)arg1 didSaveFromDetailViewController:(_Bool)arg2;	// IMP=0x0000000000182b7b
- (void)editItemDidStartEditing:(id)arg1;	// IMP=0x000000000018296e
- (void)_revertEvent;	// IMP=0x000000000020eb57
- (void)_copyEventForPossibleRevert;	// IMP=0x000000000020eb2c
- (id)_viewHierarchy;	// IMP=0x0000000000182749
- (void)_setWantsToEnableDoneButton:(_Bool)arg1;	// IMP=0x0000000000182707
- (void)_pinKeyboard:(_Bool)arg1;	// IMP=0x0000000000182543
- (struct CGSize)preferredContentSize;	// IMP=0x000000000018241c
- (void)reloadTableViewSectionsForDates:(_Bool)arg1 invitees:(_Bool)arg2 location:(_Bool)arg3 recurrence:(_Bool)arg4;	// IMP=0x0000000000182416
- (void)refreshRecurrence;	// IMP=0x0000000000182410
- (void)refreshURL;	// IMP=0x000000000018240a
- (void)refreshLocation;	// IMP=0x0000000000182404
- (void)refreshInvitees;	// IMP=0x00000000001823fe
- (void)refreshStartAndEndDates;	// IMP=0x00000000001823ec
- (void)_updateAccessDeniedViewWithNewStatus:(long long)arg1;	// IMP=0x000000000018215a
- (void)_refreshDataAndDismissViewControllerIfDeleted;	// IMP=0x0000000000182093
- (void)setupForEvent;	// IMP=0x0000000000181d4d
- (unsigned long long)entityType;	// IMP=0x000000000020eafe
- (id)notificationNamesForLocaleChange;	// IMP=0x000000000020ead0
- (id)defaultAlertTitle;	// IMP=0x000000000020eaa2
- (void)setupDeleteButton;	// IMP=0x0000000000181d47
- (id)preferredTitle;	// IMP=0x0000000000181d37
- (_Bool)hasAttachmentChanges;	// IMP=0x000000000020ea74
- (id)attachmentsModifiedEvent;	// IMP=0x000000000020ea46
- (_Bool)attachmentsModifiedOnRecurrence;	// IMP=0x000000000020ea18
- (_Bool)saveCalendarItemWithSpan:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000020e9ea
- (void)attemptDisplayReviewPrompt;	// IMP=0x0000000000181cc2
- (void)prepareEditItems;	// IMP=0x0000000000181c25
- (void)_setCalendarItemOnEditItems;	// IMP=0x0000000000181ab2
- (void)_configureVisibleItems;	// IMP=0x0000000000181848
- (_Bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;	// IMP=0x0000000000181831
- (void)_completeWithAction:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x000000000018171b
- (void)completeWithAction:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000181703
- (_Bool)saveWithSpan:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001816ad
- (void)resignCurrentEditItemFirstResponder;	// IMP=0x0000000000181665
- (void)focus:(unsigned long long)arg1 select:(_Bool)arg2;	// IMP=0x000000000018165f
- (_Bool)hasUnsavedChanges;	// IMP=0x0000000000181549
- (_Bool)willPresentDialogOnSave;	// IMP=0x00000000001814af
- (void)completeAndSaveWithContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000181498
- (void)completeAndSave;	// IMP=0x0000000000181484
- (void)done:(id)arg1 withContinueBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000180e5d
- (void)done:(id)arg1;	// IMP=0x0000000000180e49
- (void)cancelEditingWithDelegateNotification:(_Bool)arg1 forceCancel:(_Bool)arg2;	// IMP=0x0000000000180d28
- (void)cancel:(id)arg1;	// IMP=0x0000000000180d0f
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000180c87
- (void)applicationDidResume;	// IMP=0x0000000000180c13
- (void)storeChanged:(id)arg1;	// IMP=0x0000000000180b28
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x0000000000180993
- (void)_keyboardWillHide;	// IMP=0x00000000001808f7
- (void)_localeChanged;	// IMP=0x00000000001808ba
- (void)viewDidLoad;	// IMP=0x00000000001805ea
- (void)updateNavButtonsWithSpacing;	// IMP=0x00000000001803c3
- (void)_setupFirstResponder;	// IMP=0x0000000000180267
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001800ce
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000017ffe8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000017ff8e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000017fcd8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000017fcc6
- (void)resetBackgroundColor;	// IMP=0x000000000017fbe6
- (void)loadView;	// IMP=0x000000000017fa54
- (long long)firstTableRowForEditItem:(id)arg1;	// IMP=0x000000000017f7b4
- (unsigned long long)tableSectionForEditItem:(id)arg1;	// IMP=0x000000000017f62b
- (int)editItemVisibility;	// IMP=0x000000000017f61b
- (void)setEditItemVisibility:(int)arg1 animated:(_Bool)arg2;	// IMP=0x000000000017f5ac
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(_Bool)arg3;	// IMP=0x000000000017f1b6
- (void)setShouldOverrideAuthorizationStatus:(_Bool)arg1 withRemoteUIStatus:(long long)arg2;	// IMP=0x000000000017f17f
- (id)_orderedEditItems;	// IMP=0x000000000020e9bc
- (id)_editItems;	// IMP=0x000000000020e98e
- (void)dealloc;	// IMP=0x000000000017eeae
- (id)init;	// IMP=0x000000000017edea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

