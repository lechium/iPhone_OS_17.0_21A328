//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MainViewController, NSString, UITraitCollection;

@interface MainViewControllerContainer
{
    MainViewController *_currentChildViewController;	// 16 = 0x10
    MainViewController *_emptyChildViewController;	// 24 = 0x18
    _Bool _animatingViewTransition;	// 32 = 0x20
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0020000000037ddd
- (void).cxx_destruct;	// IMP=0x002000000003a51c
@property(nonatomic) _Bool animatingViewTransition; // @synthesize animatingViewTransition=_animatingViewTransition;
- (void)viewSwitcherSwitchedToViewWithDate:(id)arg1;	// IMP=0x001000000003a4f6
@property(nonatomic) _Bool isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
- (id)updateBackButtonWhileTopViewControllerToDate:(id)arg1;	// IMP=0x001000000003a3a1
- (_Bool)shouldUpdateOwnBackButtonWhenTopViewController;	// IMP=0x001000000003a30b
- (void)updateBackButtonToDate:(id)arg1;	// IMP=0x001000000003a264
- (void)invalidateBackButtonDate;	// IMP=0x001000000003a1ca
- (void)updateNavigationBarDisplayedDateString;	// IMP=0x001000000003a130
- (id)navigationBarDisplayedDateString;	// IMP=0x001000000003a08e
- (int)supportedToggleMode;	// IMP=0x0010000000039ff8
- (id)toolBarTintColor;	// IMP=0x0010000000039f56
- (id)navigationBarTintColor;	// IMP=0x0010000000039eb4
@property(readonly, nonatomic) _Bool shouldAdaptEventViewControllers;
@property(readonly, nonatomic) _Bool shouldJournalMainViewControllerParent;
- (_Bool)showEventDetailsWhenNewEventAdded;	// IMP=0x0010000000039cf2
- (id)bestDateForNewEvent;	// IMP=0x0010000000039c50
- (void)updatePalette:(id)arg1;	// IMP=0x0010000000039ba9
- (double)leftBarButtonBlankFixedSpaceWidth;	// IMP=0x0010000000039b0e
- (void)disableGestureRecognizers;	// IMP=0x0010000000039a74
- (void)enableGestureRecognizers;	// IMP=0x00100000000399da
- (void)showNowAnimated:(_Bool)arg1;	// IMP=0x001000000003993a
- (id)_todaysDate;	// IMP=0x001000000003986d
- (_Bool)isTodayVisible;	// IMP=0x00100000000397d7
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x0010000000039706
- (void)setShouldRespondToApplicationDidBecomeActiveStateChange:(_Bool)arg1;	// IMP=0x0010000000039666
- (_Bool)shouldRespondToApplicationDidBecomeActiveStateChange;	// IMP=0x00100000000395d0
- (void)navigateToPreviousDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x0010000000039530
- (void)navigateToNextDateComponentUnitAnimated:(_Bool)arg1;	// IMP=0x0010000000039490
- (void)navigateToPreviousSelectableItem;	// IMP=0x00100000000393f6
- (void)navigateToNextSelectableItem;	// IMP=0x001000000003935c
- (_Bool)mainViewControllerCanChangeSelectedDate;	// IMP=0x00100000000392c6
- (_Bool)mainViewControllerCanChangeSelectedEvent;	// IMP=0x0010000000039230
- (id)preferredPreSizeClassTransitionSelectedDate;	// IMP=0x00100000000391e0
- (id)sceneTitle;	// IMP=0x0010000000039190
- (long long)intendedSizeClass;	// IMP=0x0010000000039188
- (void)showTodayAnimated:(_Bool)arg1;	// IMP=0x001000000003907e
- (void)currentlyVisibleDateRangeFromStartDate:(id *)arg1 toEndDate:(id *)arg2;	// IMP=0x001000000003902d
- (_Bool)isDateVisible:(id)arg1;	// IMP=0x0010000000038fbf
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000038f11
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x0010000000038e38
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x0010000000038da2
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x0010000000038d0c
- (_Bool)shouldModallyPresentFirstShownViewController;	// IMP=0x0010000000038cc8
- (_Bool)shouldInvalidateManagedNavigationControllerOnPresentationDismissal;	// IMP=0x0010000000038c84
- (void)invalidateManagedNavigationController;	// IMP=0x0010000000038c47
- (id)managedNavigationController;	// IMP=0x0010000000038bf7
- (_Bool)hidesBackButton;	// IMP=0x0010000000038bef
- (Class)childViewControllerClassForTraits:(id)arg1;	// IMP=0x0010000000038be7
- (id)childViewControllerForRegularWidthRegularHeight;	// IMP=0x0010000000038bdf
- (id)childViewControllerForRegularWidthCompactHeight;	// IMP=0x0010000000038bd7
- (id)childViewControllerForCompactWidthRegularHeight;	// IMP=0x0010000000038bcf
- (id)childViewControllerForCompactWidthCompactHeight;	// IMP=0x0010000000038bc7
- (id)childViewControllerForUnknownTraits;	// IMP=0x0010000000038bbf
- (id)emptyChildViewController;	// IMP=0x0010000000038b0d
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;	// IMP=0x0010000000038b05
- (_Bool)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;	// IMP=0x0010000000038afd
- (void)_removeChildViewControllerForCurrentTraits;	// IMP=0x0010000000038a7c
- (void)_addChildViewControllerForCurrentTraits;	// IMP=0x00100000000389ec
- (id)_childViewControllerForTraitCollection:(id)arg1;	// IMP=0x00100000000388cc
- (id)currentChildViewController;	// IMP=0x0010000000038764
- (_Bool)currentChildViewControllerIsLoaded;	// IMP=0x0010000000038668
- (void)childViewControllerChangedForCurrentTraits;	// IMP=0x0010000000038662
- (void)_updateForCurrentTraits;	// IMP=0x0010000000038253
- (void)setupForViewAppearance;	// IMP=0x0010000000037de5
- (id)viewControllerToShowFrom;	// IMP=0x0010000000037d8d
- (long long)presentationStyleOverrideForChildViewControllers;	// IMP=0x0010000000037d49
- (void)showViewController:(id)arg1 sender:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000037cac
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000037c9a
- (void)setupUIForTraitCollection:(id)arg1;	// IMP=0x0010000000037c0f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000037b85
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000037b44
- (void)viewDidLoad;	// IMP=0x0010000000037aac
- (_Bool)performModalDialogsIfNeededWithContinue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000037a47
@property(readonly, copy) NSString *description;
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000003781e
- (id)initWithModel:(id)arg1 window:(id)arg2;	// IMP=0x00100000000377e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

