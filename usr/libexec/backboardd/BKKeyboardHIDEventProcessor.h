//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayController, BKIOHIDServiceMatcher, BKKeyboardInfo, BSCompoundAssertion, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol BKHIDEventDispatcher, BKHIDEventProcessorRegistering, BKHIDSystemInterfacing, BSInvalidatable;

@interface BKKeyboardHIDEventProcessor : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_allKeyboardsBySenderID;	// 16 = 0x10
    NSMutableArray *_usableKeyboards;	// 24 = 0x18
    NSMutableArray *_eventRecognizers;	// 32 = 0x20
    NSMutableSet *_keyCommandsToAuthenticate;	// 40 = 0x28
    NSString *_keyboardLayout;	// 48 = 0x30
    BSCompoundAssertion *_keyboardObserverAssertion;	// 56 = 0x38
    long long _globalActiveModifiers;	// 64 = 0x40
    id <BSInvalidatable> _displayBlankingObservationAssertion;	// 72 = 0x48
    long long _countOfKeyboardsRequiringAllSmartCoverHESDisengagedForOpen;	// 80 = 0x50
    NSMutableDictionary *_keyDownToEventSequence;	// 88 = 0x58
    NSMutableDictionary *_senderIDToKeysDown;	// 96 = 0x60
    NSMutableSet *_senderIDsWithModifiersOnly;	// 104 = 0x68
    NSMutableDictionary *_productIdentifierWithCapsLockActiveToGeneration;	// 112 = 0x70
    long long _keyboardGeneration;	// 120 = 0x78
    BKIOHIDServiceMatcher *_keyboardServiceMatcher;	// 128 = 0x80
    id <BKHIDSystemInterfacing> _eventSystemInterface;	// 136 = 0x88
    id <BKHIDEventDispatcher> _eventDispatcher;	// 144 = 0x90
    id <BKHIDEventProcessorRegistering> _eventProcessorRegistry;	// 152 = 0x98
    BKDisplayController *_displayController;	// 160 = 0xa0
    BKKeyboardInfo *_primaryKeyboardInfo;	// 168 = 0xa8
    NSMutableSet *_downModifierKeys;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000003c58a
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000003c452
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x001000000003c3f7
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x001000000003c323
- (void)display:(id)arg1 didBecomeBlank:(_Bool)arg2;	// IMP=0x001000000003c2dc
- (void)bufferDidEndDraining:(id)arg1;	// IMP=0x001000000003c22a
- (void)bufferWillBeginDraining:(id)arg1;	// IMP=0x001000000003c224
- (void)bufferingDidAddNewBuffers:(id)arg1;	// IMP=0x001000000003c05c
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 withContext:(id)arg2 buffer:(id)arg3 sequence:(id)arg4 sender:(id)arg5 dispatcher:(id)arg6 resolution:(id)arg7;	// IMP=0x001000000003bf67
- (void)postEvent:(struct __IOHIDEvent *)arg1 withContext:(id)arg2 toResolution:(id)arg3 fromSequence:(id)arg4;	// IMP=0x001000000003b915
- (void)conformsToBKHIDBufferedEventProcessor;	// IMP=0x001000000003b90f
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000003b7dc
- (void)_modifierRemappingsDidChange;	// IMP=0x001000000003b552
- (void)_lock_setCapsLockActive:(_Bool)arg1 onSenderID:(unsigned long long)arg2;	// IMP=0x001000000003b2a0
- (void)_lock_setCapsLockState:(_Bool)arg1 forKeyboard:(id)arg2;	// IMP=0x001000000003b1ab
- (void)_lock_postSyntheticCapsLockPressForKeyboard:(id)arg1;	// IMP=0x001000000003b084
- (void)_lock_smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x001000000003af96
- (void)smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x001000000003af3b
- (void)_lock_stopWatchingForGestures:(id)arg1;	// IMP=0x001000000003ae66
- (void)_lock_watchForGestures:(id)arg1;	// IMP=0x001000000003aa02
- (void)_lock_handleKeyEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 dispatcher:(id)arg3 bypassCapsLockChecks:(_Bool)arg4;	// IMP=0x001000000003a73b
- (void)_lock_dispatchKeyEvent:(struct __IOHIDEvent *)arg1 keyCommand:(id)arg2 keyboardInfo:(id)arg3 eventSource:(int)arg4 fromSender:(id)arg5 dispatcher:(id)arg6;	// IMP=0x0010000000039f83
- (void)_lock_applyDeliveryInformation:(id)arg1 resolution:(id)arg2 toEvent:(struct __IOHIDEvent *)arg3;	// IMP=0x0010000000039c83
- (void)_lock_handleUnicodeEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0010000000039b08
- (int)_eventSourceForKeyboardInfo:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000039ad5
- (void)_lock_cancelKeyDownEvents:(id)arg1;	// IMP=0x00100000000399fe
- (void)_lock_usableKeyboardDetached:(id)arg1;	// IMP=0x001000000003982b
- (void)_lock_removeCapsLockEntryIfNeeded:(id)arg1;	// IMP=0x001000000003972f
- (void)_lock_removeSenderIDFromTracking:(unsigned long long)arg1;	// IMP=0x0010000000039469
- (void)_lock_removeModifierKeyDown:(id)arg1;	// IMP=0x00100000000393a6
- (void)_lock_addModifierKeyDown:(id)arg1;	// IMP=0x00100000000392e3
- (void)_lock_usableKeyboardAttached:(id)arg1;	// IMP=0x0010000000039184
- (void)_lock_restoreCapsLockStateToKeyboard:(id)arg1;	// IMP=0x0010000000039015
- (void)_lock_setPrimaryKeyboard:(id)arg1;	// IMP=0x0010000000038e83
- (void)_lock_keyboardRemoved:(id)arg1;	// IMP=0x0010000000038c17
- (void)_lock_keyboardsDetected:(id)arg1;	// IMP=0x0010000000038b9a
- (void)_lock_setKeyboardLightsSuspended:(_Bool)arg1;	// IMP=0x0010000000038a37
- (_Bool)_lock_anyKeyboardHasCapsLockActive;	// IMP=0x001000000003891a
- (long long)_lock_activeModifiers;	// IMP=0x00100000000388c4
- (void)_lock_updateGlobalModifierState;	// IMP=0x0010000000038745
@property(copy) NSSet *keyCommandsToAuthenticate;
- (_Bool)capsLockKeyHasLanguageSwitchLabel;	// IMP=0x00100000000386b8
@property(getter=isCapsLockLightOn) _Bool capsLockLightOn;
- (void)setStandardType:(unsigned int)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x001000000003847b
- (void)setCapsLockDelayOverride:(double)arg1;	// IMP=0x001000000003832d
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1;	// IMP=0x00100000000381ef
- (id)devicePropertiesForSenderID:(unsigned long long)arg1;	// IMP=0x001000000003804d
- (_Bool)keyboardWantsStandardTypeOverrideForSenderID:(unsigned long long)arg1;	// IMP=0x0010000000037e87
- (_Bool)isCapsLockLightOnForSenderID:(unsigned long long)arg1;	// IMP=0x0010000000037ddb
- (void)setCapsLockActive:(_Bool)arg1 onSenderID:(unsigned long long)arg2;	// IMP=0x0010000000037d8d
- (void)setCapsLockDelayOverride:(double)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x0010000000037ce4
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x0010000000037c1b
- (void)setKeyboardLayout:(id)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x0010000000037a0f
- (id)keyboardLanguageForSenderID:(unsigned long long)arg1;	// IMP=0x001000000003795c
- (id)addGlobalKeyboardObserver:(id)arg1;	// IMP=0x001000000003780b
@property(readonly) long long activeModifiers;
@property(retain) NSString *keyboardLayout;
- (int)eventSourceForSender:(id)arg1;	// IMP=0x001000000003735c
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x00100000000371f2
- (id)initWithContext:(id)arg1;	// IMP=0x0010000000036ce5

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

