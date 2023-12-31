//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PaletteView;

@interface CompactDayViewController
{
    PaletteView *_palette;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000290d0
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x0010000000028fe6
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x0010000000028fde
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0010000000028f16
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000028f0b
- (long long)intendedSizeClass;	// IMP=0x0010000000028f00
- (void)_updateWeekDayHeaderDayFrames;	// IMP=0x0010000000028da6
- (void)updatePalette:(id)arg1;	// IMP=0x0010000000028cc4
- (int)supportedToggleMode;	// IMP=0x0010000000028cb9
- (void)dayNavigationViewCellWidthDidChange;	// IMP=0x0010000000028ca7
- (long long)presentationStyleOverrideForChildViewControllers;	// IMP=0x0010000000028c9f
- (void)showEditViewController:(id)arg1;	// IMP=0x0010000000028bdf
- (id)showDetailViewControllerForEvent:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000028958
- (void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;	// IMP=0x0010000000028842
- (MISSING_TYPE *)showWeekdayLabel;	// IMP=0x001000000002883a
- (void)_receivedSelectedDateChangeNotification:(id)arg1;	// IMP=0x00100000000287a5
- (void)_updateBackButtonOnBackViewControllerToDate:(id)arg1;	// IMP=0x001000000002872d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000002869c
- (id)cellFactory;	// IMP=0x0010000000028683
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000028548

@end

