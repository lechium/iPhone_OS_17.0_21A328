//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusBehavior_CarPlay : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00100000013718a5
- (_Bool)supportsLinearMovementDebugOverlay;	// IMP=0x0000000001371b96
- (_Bool)shouldCallAccessibilityOverrides;	// IMP=0x0000000001371b8e
- (long long)focusSystemDeactivationMode;	// IMP=0x0000000001371b86
- (_Bool)autoDismissesPopoverControllersOnFocusIntersection;	// IMP=0x0000000001371b7e
- (_Bool)tabBasedMovementLoops;	// IMP=0x0000000001371b76
- (long long)skipKeyCommandsForKeyEvents;	// IMP=0x0000000001371b6e
- (long long)deliverKeyEventsToFocusEngine;	// IMP=0x0000000001371b66
- (_Bool)shouldSupressIndirectMovementOnSelect;	// IMP=0x0000000001371b5e
- (_Bool)shouldEnableFocusOnSelect;	// IMP=0x0000000001371b56
- (long long)indirectMovementPriority;	// IMP=0x0000000001371b4e
- (_Bool)supportsTabKey;	// IMP=0x0000000001371b46
- (long long)pageButtonScrollingStyle;	// IMP=0x0000000001371b3e
- (_Bool)supportsArrowKeys;	// IMP=0x0000000001371b36
- (_Bool)supportsGameControllers;	// IMP=0x0000000001371b2e
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;	// IMP=0x0000000001371b26
- (_Bool)supportsIndirectRotaryMovement;	// IMP=0x0000000001371b1e
- (_Bool)supportsIndirectPanningMovement;	// IMP=0x0000000001371b16
- (_Bool)showsFocusRingForItem:(id)arg1;	// IMP=0x0000000001371b0e
- (_Bool)supportsParentFocusRings;	// IMP=0x0000000001371b06
- (long long)focusRingVisibility;	// IMP=0x0000000001371afe
- (long long)buttonSelectionMode;	// IMP=0x0000000001371af3
- (_Bool)refinesIndexBarTargetContentOffset;	// IMP=0x0000000001371aeb
- (_Bool)isContainerEligibleForFocusUpdateSearchRoot:(id)arg1;	// IMP=0x0000000001371ad6
- (double)stabilizedLinearFocusMovementTimeout;	// IMP=0x0000000001371ac8
- (_Bool)wantsTreeLocking;	// IMP=0x0000000001371ac0
- (_Bool)throttlesProgrammaticFocusUpdates;	// IMP=0x0000000001371ab8
- (long long)focusCastingMode;	// IMP=0x0000000001371ab0
- (_Bool)supportsClipToBounds;	// IMP=0x0000000001371a9c
- (_Bool)supportViewTransparencyAndMultipleWindows;	// IMP=0x0000000001371a94
- (_Bool)treatFirstAndLastHeadingsAsGlobal;	// IMP=0x0000000001371a8c
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;	// IMP=0x0000000001371a84
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;	// IMP=0x0000000001371a7c
- (_Bool)preventsCellFocusabilityWhileEditing;	// IMP=0x0000000001371a74
- (long long)cellFocusability;	// IMP=0x0000000001371a6c
- (_Bool)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;	// IMP=0x0000000001371a64
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;	// IMP=0x0000000001371a5c
- (long long)scrollingMode;	// IMP=0x0000000001371a51
- (unsigned long long)defaultFocusScrollOffsetResolver;	// IMP=0x0000000001371a49
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;	// IMP=0x0000000001371a41
- (unsigned long long)focusGroupContainmentBehavior;	// IMP=0x0000000001371a39
- (unsigned long long)focusGroupMovementBehavior;	// IMP=0x0000000001371a31
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;	// IMP=0x0000000001371a29
- (_Bool)searchBarTextFieldCanBecomeFocused;	// IMP=0x0000000001371a21
- (_Bool)tabBarButtonCanBecomeFocused;	// IMP=0x0000000001371a19
- (_Bool)tabBarCanBecomeFocused;	// IMP=0x0000000001371a11
- (_Bool)textViewCanBecomeFocused:(id)arg1;	// IMP=0x00000000013719fc
- (_Bool)controlCanBecomeFocused:(id)arg1;	// IMP=0x00000000013719f4
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;	// IMP=0x00000000013719ec
- (long long)focusDeferral;	// IMP=0x00000000013719e4
- (_Bool)syncsFocusAndResponder;	// IMP=0x00000000013719dc
- (long long)requiredInputDevices;	// IMP=0x00000000013719d4
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;	// IMP=0x00000000013719cc
- (_Bool)wantsFocusSystemForScene:(id)arg1;	// IMP=0x00000000013718d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
