//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXRuntime/AXElement.h>

@class AXElementGroup, NSArray, NSNumber, NSString, SCATAuxiliaryElementManager;
@protocol SCATElementAutoscrolling;

@interface AXElement (UsefulLogging)
- (id)elemLog;	// IMP=0x002000000003ff31
@property(readonly, nonatomic) unsigned int scatDisplayId;
- (void)scatUpdateValue;	// IMP=0x00100000000d1c40
- (void)scatScrollToTop;	// IMP=0x00100000000d1c2e
- (void)scatDecreaseAutoscrollSpeed;	// IMP=0x00100000000d1c1c
- (void)scatIncreaseAutoscrollSpeed;	// IMP=0x00100000000d1c0a
@property(readonly, nonatomic) _Bool scatIsAutoscrolling;
- (void)scatPauseAutoscrolling;	// IMP=0x00100000000d1be6
- (void)scatAutoscrollInDirection:(unsigned long long)arg1;	// IMP=0x00100000000d1bd4
@property(retain, nonatomic) id <SCATElementAutoscrolling> scatAutoscrollTarget;
@property(readonly, nonatomic) _Bool scatUpdatesMenu;
@property(readonly, nonatomic) _Bool scatBeginScanningFromSelfAfterActivation;
@property(readonly, nonatomic) _Bool scatIsOnScreen;
@property(readonly, nonatomic) _Bool scatHidesGroupCursorWhenFocused;
@property(readonly, nonatomic) SCATAuxiliaryElementManager *scatAuxiliaryElementManager;
@property(readonly, nonatomic) _Bool scatIsAuxiliaryElement;
@property(readonly, nonatomic) _Bool scatIsMemberOfGroup;
- (_Bool)scatPerformAction:(int)arg1 withValue:(id)arg2;	// IMP=0x00100000000d1970
- (_Bool)scatPerformAction:(int)arg1;	// IMP=0x00100000000d195e
@property(readonly, nonatomic) NSArray *scatDrops;
@property(readonly, nonatomic) NSArray *scatDrags;
@property(readonly, nonatomic) int scatPid;
@property(readonly, nonatomic) NSArray *scatCustomActions;
- (id)scatSupportedGestures;	// IMP=0x00100000000d1904
- (_Bool)scatSupportsAction:(int)arg1;	// IMP=0x00100000000d1811
- (_Bool)scatCanScrollInAtLeastOneDirection;	// IMP=0x00100000000d17ff
- (void)scatScrollToVisible;	// IMP=0x00100000000d17ed
@property(readonly, nonatomic) NSArray *scatAlternateKeys;
@property(readonly, nonatomic) _Bool scatCanShowAlternateKeys;
@property(readonly, nonatomic) _Bool scatIsKeyboardKey;
@property(nonatomic) _Bool scatAssistiveTechFocused;
@property(readonly, nonatomic) NSNumber *scatOverrideCursorTheme;
@property(readonly, nonatomic) _Bool scatShouldSuppressAudioOutput;
- (id)scatValue;	// IMP=0x00100000000d1771
@property(readonly, nonatomic) NSString *scatSpeakableDescription;
@property(readonly, nonatomic) long long scatActivateBehavior;
@property(readonly, nonatomic) _Bool scatShouldActivateDirectly;
@property(readonly, nonatomic) _Bool scatShouldAllowDeferFocusToNativeFocusedElement;
@property(readonly, nonatomic) _Bool scatIndicatesOwnFocus;
@property(readonly, nonatomic) _Bool scatIsAXElement;
@property(readonly, nonatomic) _Bool scatIsValid;
@property(readonly, nonatomic) unsigned long long scatScanningBehaviorTraits;
@property(readonly, nonatomic) unsigned long long scatTraits;
@property(readonly, nonatomic) struct CGRect scatTextCursorFrame;
@property(readonly, nonatomic) struct CGPath *scatPath;
@property(readonly, nonatomic) _Bool scatPathIsInSceneReferenceSpace;
@property(readonly, nonatomic) struct CGPoint scatScreenPointForOperations;
@property(readonly, nonatomic) struct CGRect scatFrame;
@property(readonly, nonatomic) struct CGPoint scatCenterPoint;
- (id)scrollableElement;	// IMP=0x00100000000d0ca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect frame; // @dynamic frame;
@property(readonly) unsigned long long hash;
@property(nonatomic) AXElementGroup *parentGroup; // @dynamic parentGroup;
@property(readonly) Class superclass;
@end

