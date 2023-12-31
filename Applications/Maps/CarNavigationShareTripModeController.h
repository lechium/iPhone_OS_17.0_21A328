//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CarMapTrackingController, CarShareTripFooterView, CarShareTripKeyboardSearchController, CarTableView, CarUserInputCell, ChromeViewController, MSPSharedTripSharingIdentity, NSArray, NSMutableDictionary, NSString, NSTimer, SharedTripSuggestionsDataSource;

@interface CarNavigationShareTripModeController : UIViewController
{
    CarTableView *_tableView;	// 8 = 0x8
    SharedTripSuggestionsDataSource *_dataSource;	// 16 = 0x10
    NSTimer *_dismissTimer;	// 24 = 0x18
    NSMutableDictionary *_cellsByContactStringValue;	// 32 = 0x20
    _Bool _userInteracted;	// 40 = 0x28
    CarUserInputCell *_userInputCell;	// 48 = 0x30
    CarShareTripKeyboardSearchController *_contactSearchResultsController;	// 56 = 0x38
    MSPSharedTripSharingIdentity *_sharingIdentity;	// 64 = 0x40
    CarShareTripFooterView *_footerView;	// 72 = 0x48
    ChromeViewController *_chromeViewController;	// 80 = 0x50
}

+ (void)attemptToStartShareWithContact:(id)arg1 sharingIdentity:(id)arg2 interruptPresenter:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000321f1f
- (void).cxx_destruct;	// IMP=0x0020000000322712
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
- (int)backButtonUsageActionToMode:(id)arg1;	// IMP=0x00100000003226cf
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000003226bd
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000322675
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000032266d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000322665
- (void)_attemptToStartShareWithContact:(id)arg1;	// IMP=0x0010000000321d13
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000321b48
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000321b07
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000321907
- (void)carShareTripContactCellDidFinishRingAnimation:(id)arg1;	// IMP=0x0010000000321860
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x00100000003215f2
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;	// IMP=0x00100000003215ec
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;	// IMP=0x00100000003215e6
- (void)_updateWithSharingIdentity:(id)arg1;	// IMP=0x001000000032154e
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;	// IMP=0x0010000000321539
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;	// IMP=0x00100000003214ea
- (void)_handleContactSearchResults:(id)arg1 query:(id)arg2;	// IMP=0x0010000000321078
- (void)_requestKeyboardInputUsingInteractionModel:(unsigned long long)arg1;	// IMP=0x0010000000320f1f
- (void)_displayContactResults:(id)arg1 withTitle:(id)arg2;	// IMP=0x0010000000320d80
- (void)_requestDictation;	// IMP=0x0010000000320d3c
- (void)userInputCell:(id)arg1 didSelectAction:(unsigned long long)arg2 usingInteractionModel:(unsigned long long)arg3;	// IMP=0x0010000000320cdb
- (void)_commitPendingShares;	// IMP=0x0010000000320b43
- (void)_cancelDismiss;	// IMP=0x0010000000320b01
- (void)_dismissAfterDelay;	// IMP=0x00100000003209ab
- (void)_toggleSharingForContactAtIndexPath:(id)arg1;	// IMP=0x001000000032093e
- (void)_externalDeviceUpdated:(id)arg1;	// IMP=0x00100000003208b8
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)_closeResultsController;	// IMP=0x0010000000320426
- (void)carCardViewCloseButtonTapped:(id)arg1;	// IMP=0x0010000000320373
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000320113
- (id)desiredCards;	// IMP=0x0010000000320091
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000031fe9a
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000031fcfa
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) _Bool showsMapView;
- (void)_updateSharingFooterWithIdentity:(id)arg1;	// IMP=0x001000000031faba
- (void)viewDidLayoutSubviews;	// IMP=0x001000000031f89c
- (void)_setupTableFooterView;	// IMP=0x001000000031f5ad
- (void)_setupTableHeaderView;	// IMP=0x001000000031f245
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000031f174
- (void)viewDidLoad;	// IMP=0x001000000031eced
- (id)init;	// IMP=0x001000000031ebed

// Remaining properties
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldMapControlsModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

