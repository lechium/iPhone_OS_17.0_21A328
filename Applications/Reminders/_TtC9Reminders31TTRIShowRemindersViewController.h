//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemindersUICore/TTRIContentUnavailableHostableViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC9Reminders31TTRIShowRemindersViewController : TTRIContentUnavailableHostableViewController
{
    MISSING_TYPE *feedbackGenerator;	// 8 = 0x8
    MISSING_TYPE *contentLayout;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_toolbar;	// 24 = 0x18
    MISSING_TYPE *toolbarBottomConstraint;	// 32 = 0x20
    MISSING_TYPE *keyboardAppearState;	// 40 = 0x28
    MISSING_TYPE *contentViewController;	// 48 = 0x30
    MISSING_TYPE *presenter;	// 64 = 0x40
    MISSING_TYPE *navigationItemOptions;	// 80 = 0x50
    MISSING_TYPE *listInfo;	// 0 = 0x0
    MISSING_TYPE *emptyListMessaging;	// 0 = 0x0
    MISSING_TYPE *internalDeferredItemUpdates;	// 0 = 0x0
    MISSING_TYPE *toolbarHeight;	// 0 = 0x0
    MISSING_TYPE *keyboardHeight;	// 0 = 0x0
    MISSING_TYPE *pencilInputAreaHeight;	// 0 = 0x0
    MISSING_TYPE *toolbarController;	// 0 = 0x0
    MISSING_TYPE *lastSetLargeTitleColor;	// 0 = 0x0
    MISSING_TYPE *listMessagingView;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeObserver;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeCancellable;	// 0 = 0x0
    MISSING_TYPE *contentPreferredChromelessBarStatesObserver;	// 0 = 0x0
    MISSING_TYPE *swHighlightToShowInNavBar;	// 0 = 0x0
    MISSING_TYPE *cellTitleItemGainingFocus_forKeyboardAvoidance;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000003790d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000379070
- (void)keyboardWillChangeFrameNotificationWithNotification:(id)arg1;	// IMP=0x0010000000378fd0
- (void)keyboardDidHideNotificationWithNotification:(id)arg1;	// IMP=0x0010000000378da0
- (void)keyboardWillHideNotificationWithNotification:(id)arg1;	// IMP=0x0010000000378cf0
- (void)keyboardDidShowNotificationWithNotification:(id)arg1;	// IMP=0x0010000000378ce0
- (void)keyboardWillShowNotificationWithNotification:(id)arg1;	// IMP=0x0010000000378c50
- (void)willAddDeactivationReasonWithNotification:(id)arg1;	// IMP=0x0010000000378900
- (void)newSectionWithSelectionAction:(id)arg1;	// IMP=0x00100000003773a0
- (void)newSectionAction:(id)arg1;	// IMP=0x0010000000377230
- (void)toggleShowCompletedAction:(id)arg1;	// IMP=0x0010000000377170
- (void)printListAction:(id)arg1;	// IMP=0x00100000003770d0
- (void)postponeAllOverdueToTodayAction:(id)arg1;	// IMP=0x0010000000377020
- (void)setReminderDueDateToNoneAction:(id)arg1;	// IMP=0x0010000000376f80
- (void)setReminderDueDateToNextWeekAction:(id)arg1;	// IMP=0x0010000000376f70
- (void)setReminderDueDateToWeekendAction:(id)arg1;	// IMP=0x0010000000376f60
- (void)setReminderDueDateToTomorrowAction:(id)arg1;	// IMP=0x0010000000376f50
- (void)setReminderDueDateToTodayAction:(id)arg1;	// IMP=0x0010000000376e50
- (void)addStructuredHashtagForSelectedReminderAction:(id)arg1;	// IMP=0x0010000000376d10
- (void)toggleFlaggedForSelectedReminderAction:(id)arg1;	// IMP=0x0010000000376cf0
- (void)outdentSelectedReminderAction:(id)arg1;	// IMP=0x0010000000376bc0
- (void)indentSelectedReminderAction:(id)arg1;	// IMP=0x0010000000376a40
- (void)toggleReminderCompletionStateAction:(id)arg1;	// IMP=0x00100000003768c0
- (void)showReminderInfoAction:(id)arg1;	// IMP=0x00100000003766c0
- (void)collapseAllItemsAction:(id)arg1;	// IMP=0x0010000000376350
- (void)expandAllItemsAction:(id)arg1;	// IMP=0x0010000000376250
- (void)startEditingReminderAction:(id)arg1;	// IMP=0x0010000000376230
- (void)newReminderAction:(id)arg1;	// IMP=0x0010000000376130
- (void)deleteReminderAction:(id)arg1;	// IMP=0x0010000000375f30
- (void)expandReminderSubtasksAlternativeShortcutAction:(id)arg1;	// IMP=0x0010000000375f00
- (void)collapseReminderSubtasksAlternativeShortcutAction:(id)arg1;	// IMP=0x0010000000375d40
- (void)expandReminderSubtasksWithArrowKeyAction:(id)arg1;	// IMP=0x0010000000375b80
- (void)collapseReminderSubtasksWithArrowKeyAction:(id)arg1;	// IMP=0x00100000003759c0
- (void)endEditingReminderAction:(id)arg1;	// IMP=0x0010000000375780
- (void)ttr_updateContentUnavailableConfigurationUsingState:(id)arg1;	// IMP=0x0010000000375730
- (void)validateCommand:(id)arg1;	// IMP=0x00100000003756e0
- (void)paste:(id)arg1;	// IMP=0x0010000000374d60
- (void)copy:(id)arg1;	// IMP=0x0010000000374c40
- (void)cut:(id)arg1;	// IMP=0x0010000000374b20
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000374990
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (MISSING_TYPE *)setEditing:animated: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000372cd0
- (void)updateUserActivityState:(id)arg1;	// IMP=0x0010000000372b30
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000003728b0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000372870
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000003723b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000371c70
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000371920
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000371570
- (void)viewDidLoad;	// IMP=0x0010000000370df0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000036f250

@end
