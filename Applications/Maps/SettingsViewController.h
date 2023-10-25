//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardView, ContainerHeaderView, NSString, SettingsController, SettingsTableViewController;

@interface SettingsViewController
{
    double _currentHeight;	// 8 = 0x8
    ContainerHeaderView *_headerView;	// 16 = 0x10
    SettingsTableViewController *_settingsTableViewController;	// 24 = 0x18
    CDUnknownBlockType _dismissSettingsViewControllerHandler;	// 32 = 0x20
    SettingsController *_settingsController;	// 40 = 0x28
    CardView *_cardView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000091e022
@property(retain, nonatomic) CardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak SettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(copy, nonatomic) CDUnknownBlockType dismissSettingsViewControllerHandler; // @synthesize dismissSettingsViewControllerHandler=_dismissSettingsViewControllerHandler;
- (void)_handleTwoFingerTap:(id)arg1;	// IMP=0x001000000091df50
- (void)dismissCustomPresentationContainee;	// IMP=0x001000000091ddc9
- (void)updateTheme;	// IMP=0x001000000091dd57
- (long long)preferredStatusBarStyle;	// IMP=0x001000000091dd13
- (void)setupConstraints;	// IMP=0x001000000091d61e
- (void)settingsTableViewControllerDidReloadData:(id)arg1;	// IMP=0x001000000091d468
- (void)settingsTableViewControllerDidScroll:(id)arg1;	// IMP=0x001000000091d3b9
- (void)_updatePreferredContentSize;	// IMP=0x001000000091d29d
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x001000000091d247
- (void)viewDidLayoutSubviews;	// IMP=0x001000000091d206
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000091d18a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000091d078
- (void)_clearTableIfNeeded;	// IMP=0x001000000091cfed
- (void)_updateCompactVerticalLayout;	// IMP=0x001000000091cf4d
- (void)_updateMargins;	// IMP=0x001000000091cd38
- (long long)_adaptivePresentationStyle;	// IMP=0x001000000091cc7b
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000091cb34
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000091cade
- (void)viewDidLoad;	// IMP=0x001000000091c5f5
- (void)loadView;	// IMP=0x001000000091c547
- (id)keyCommands;	// IMP=0x001000000091c4a4
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000091c492
- (id)tableViewController;	// IMP=0x001000000091c36d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
