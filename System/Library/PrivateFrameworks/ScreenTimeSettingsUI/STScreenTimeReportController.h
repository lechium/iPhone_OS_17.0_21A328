//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSLayoutConstraint, NSObject, NSString, PSRootController, PSSpecifier, STDatePickerBar, STDebouncer, STNotificationSettingsGateway, STPINListViewController;
@protocol PSController, STRootViewModelCoordinator, STScreenTimeReportFiltering;

__attribute__((visibility("hidden")))
@interface STScreenTimeReportController : UIViewController
{
    UIViewController<PSController> *_parentController;	// 8 = 0x8
    PSRootController *_rootController;	// 16 = 0x10
    PSSpecifier *_specifier;	// 24 = 0x18
    NSObject<STRootViewModelCoordinator> *_coordinator;	// 32 = 0x20
    UIViewController<STScreenTimeReportFiltering> *_reportViewController;	// 40 = 0x28
    NSString *_context;	// 48 = 0x30
    STPINListViewController *_pinControllerDelegate;	// 56 = 0x38
    STDatePickerBar *_datePickerBar;	// 64 = 0x40
    STDebouncer *_datePickerHiddenDebouncer;	// 72 = 0x48
    NSLayoutConstraint *_datePickerTopConstraint;	// 80 = 0x50
    NSLayoutConstraint *_datePickerBottomConstraint;	// 88 = 0x58
    STNotificationSettingsGateway *_notificationSettingsGateway;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000006ff54
@property(readonly, nonatomic) STNotificationSettingsGateway *notificationSettingsGateway; // @synthesize notificationSettingsGateway=_notificationSettingsGateway;
@property(retain) NSLayoutConstraint *datePickerBottomConstraint; // @synthesize datePickerBottomConstraint=_datePickerBottomConstraint;
@property(retain) NSLayoutConstraint *datePickerTopConstraint; // @synthesize datePickerTopConstraint=_datePickerTopConstraint;
@property(readonly) STDebouncer *datePickerHiddenDebouncer; // @synthesize datePickerHiddenDebouncer=_datePickerHiddenDebouncer;
@property(readonly) STDatePickerBar *datePickerBar; // @synthesize datePickerBar=_datePickerBar;
@property(readonly) STPINListViewController *pinControllerDelegate; // @synthesize pinControllerDelegate=_pinControllerDelegate;
@property(readonly) NSString *context; // @synthesize context=_context;
@property(readonly) UIViewController<STScreenTimeReportFiltering> *reportViewController; // @synthesize reportViewController=_reportViewController;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x000000000006fe6e
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006fe5c
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x000000000006fdc9
- (void)showController:(id)arg1;	// IMP=0x000000000006fdb2
- (id)readPreferenceValue:(id)arg1;	// IMP=0x000000000006fd99
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000006fd80
- (id)specifier;	// IMP=0x000000000006fd6b
- (void)setSpecifier:(id)arg1;	// IMP=0x000000000006fd21
- (id)rootController;	// IMP=0x000000000006fd08
- (void)setRootController:(id)arg1;	// IMP=0x000000000006fcf4
- (id)parentController;	// IMP=0x000000000006fcdb
- (void)setParentController:(id)arg1;	// IMP=0x000000000006fcc7
- (void)allowanceDetailControllerDidCancel:(id)arg1;	// IMP=0x000000000006fcae
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;	// IMP=0x000000000006fb2c
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;	// IMP=0x000000000006f987
@property(getter=isDatePickerHidden) _Bool datePickerHidden;
- (void)debouncer:(id)arg1 didDebounce:(id)arg2;	// IMP=0x000000000006f64e
- (void)_editLimit:(id)arg1 isNewLimit:(_Bool)arg2;	// IMP=0x000000000006f091
- (void)_didTapBarMark:(id)arg1;	// IMP=0x000000000006ef1c
- (void)_didPressAddWebDomainLimitButton:(id)arg1;	// IMP=0x000000000006ed77
- (void)_didPressAddCategoryLimitButton:(id)arg1;	// IMP=0x000000000006ebd2
- (void)_didPressAddApplicationLimitButton:(id)arg1;	// IMP=0x000000000006ea2d
- (void)_didTapEditLimitLink:(id)arg1;	// IMP=0x000000000006e8b7
- (void)_didTapNotificationsLink:(id)arg1;	// IMP=0x000000000006e5f3
- (void)_didTapPickupsLink:(id)arg1;	// IMP=0x000000000006e3fb
- (void)_didTapWebDomainLink:(id)arg1;	// IMP=0x000000000006e284
- (void)_didTapCategoryLink:(id)arg1;	// IMP=0x000000000006e0f5
- (void)_didTapApplicationLink:(id)arg1;	// IMP=0x000000000006defd
- (void)_dateModePickerDidDisappear:(id)arg1;	// IMP=0x000000000006deb9
- (void)_dateModePickerDidAppear:(id)arg1;	// IMP=0x000000000006de75
- (void)_dateModeDidChange:(id)arg1;	// IMP=0x000000000006dd83
- (void)_selectedCoreDuetIdentifierDidChange:(id)arg1;	// IMP=0x000000000006dbf0
- (void)_devicesDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000006db35
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000006d905
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000006d4ba
- (void)viewDidLoad;	// IMP=0x000000000006d036
- (void)dealloc;	// IMP=0x000000000006ce51
- (id)initWithTitle:(id)arg1 coordinator:(id)arg2 context:(id)arg3 pinControllerDelegate:(id)arg4;	// IMP=0x000000000006ca7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

