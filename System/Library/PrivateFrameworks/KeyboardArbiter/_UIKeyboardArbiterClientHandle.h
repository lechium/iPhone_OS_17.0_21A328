//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAbsoluteMachTimer, BSServiceConnectionEndpointInjector, FBSCAContextSceneLayer, NSArray, NSMutableSet, NSString, NSXPCConnection, RBSAssertion, RBSProcessHandle, UIKBArbiterClientFocusContext, _UIKeyboardArbiter;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClientHandle : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    _UIKeyboardArbiter *_owner;	// 24 = 0x18
    _Bool _running;	// 32 = 0x20
    FBSCAContextSceneLayer *_sceneLayer;	// 40 = 0x28
    UIKBArbiterClientFocusContext *_remoteFocusContext;	// 48 = 0x30
    _Bool _active;	// 56 = 0x38
    unsigned long long _wantedState;	// 64 = 0x40
    double _level;	// 72 = 0x48
    NSMutableSet *_hostedPids;	// 80 = 0x50
    _Bool _checkingShowability;	// 88 = 0x58
    int _suppressionCount;	// 92 = 0x5c
    int _childrenSuppressionCount;	// 96 = 0x60
    _Bool _wantsFence;	// 100 = 0x64
    _Bool _deactivating;	// 101 = 0x65
    _Bool _keyboardOnScreen;	// 102 = 0x66
    _Bool _multipleScenes;	// 103 = 0x67
    BSAbsoluteMachTimer *_acquiringFocusTimer;	// 104 = 0x68
    RBSAssertion *_remoteKeepAliveAssertion;	// 112 = 0x70
    unsigned long long _remoteKeepAliveAssertionCount;	// 120 = 0x78
    unsigned long long _remoteKeepAliveTimerCount;	// 128 = 0x80
    NSArray *_cachedContext;	// 136 = 0x88
    BSServiceConnectionEndpointInjector *_endpointGrantInjector;	// 144 = 0x90
    _Bool _inputUIHost;	// 152 = 0x98
    _Bool _hasDebugInformationEntitlement;	// 153 = 0x99
    _Bool _requiresInputUIForAutofillUIOnly;	// 154 = 0x9a
    _Bool _acquiringFocus;	// 155 = 0x9b
    _Bool _requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus;	// 156 = 0x9c
    int _prevActiveIdentifier;	// 160 = 0xa0
    RBSProcessHandle *_processHandle;	// 168 = 0xa8
    NSXPCConnection *_connection;	// 176 = 0xb0
    double _iavHeight;	// 184 = 0xb8
    CDUnknownBlockType _pendingNotifyKeyboardChanged;	// 192 = 0xc0
}

+ (id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2;	// IMP=0x0010000000011d95
- (void).cxx_destruct;	// IMP=0x0000000000018f37
@property(copy, nonatomic) CDUnknownBlockType pendingNotifyKeyboardChanged; // @synthesize pendingNotifyKeyboardChanged=_pendingNotifyKeyboardChanged;
@property(nonatomic) _Bool requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus; // @synthesize requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus=_requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus;
@property(readonly, nonatomic, getter=isAcquiringFocus) _Bool acquiringFocus; // @synthesize acquiringFocus=_acquiringFocus;
@property(nonatomic) _Bool requiresInputUIForAutofillUIOnly; // @synthesize requiresInputUIForAutofillUIOnly=_requiresInputUIForAutofillUIOnly;
@property(nonatomic) _Bool hasDebugInformationEntitlement; // @synthesize hasDebugInformationEntitlement=_hasDebugInformationEntitlement;
@property(nonatomic) _Bool inputUIHost; // @synthesize inputUIHost=_inputUIHost;
@property int suppressionCount; // @synthesize suppressionCount=_suppressionCount;
@property(readonly) _Bool multipleScenes; // @synthesize multipleScenes=_multipleScenes;
@property(readonly) _Bool deactivating; // @synthesize deactivating=_deactivating;
@property(readonly) _Bool wantsFence; // @synthesize wantsFence=_wantsFence;
@property int prevActiveIdentifier; // @synthesize prevActiveIdentifier=_prevActiveIdentifier;
@property(readonly) double iavHeight; // @synthesize iavHeight=_iavHeight;
@property(readonly) double level; // @synthesize level=_level;
@property(readonly) unsigned long long wantedState; // @synthesize wantedState=_wantedState;
@property(readonly) _Bool active; // @synthesize active=_active;
@property(readonly, retain) UIKBArbiterClientFocusContext *remoteFocusContext; // @synthesize remoteFocusContext=_remoteFocusContext;
@property(readonly, retain) FBSCAContextSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property _Bool running; // @synthesize running=_running;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, retain) RBSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(readonly, retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) _Bool hasHostedPids;
- (void)signalEventSourceChanged:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018bd9
- (void)setKeyboardTotalDisable:(_Bool)arg1 withFence:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000189c9
- (void)focusApplicationWithProcessIdentifier:(int)arg1 context:(id)arg2 stealingKeyboard:(_Bool)arg3 onCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000184dc
- (void)focusApplicationWithProcessIdentifier:(int)arg1 context:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000184c1
- (void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018067
- (void)invalidate;	// IMP=0x0000000000017c8d
- (void)uncacheWindowContext;	// IMP=0x0000000000017b11
- (void)cacheWindowContext;	// IMP=0x00000000000179a2
- (void)releaseProcessAssertion;	// IMP=0x0000000000017829
- (_Bool)takeProcessAssertionOnRemoteWithQueue:(id)arg1;	// IMP=0x000000000001674d
- (_Bool)isHostingPID:(int)arg1;	// IMP=0x00000000000166f4
- (_Bool)isHandlerShowableWithHandler:(id)arg1;	// IMP=0x00000000000164d3
- (id)description;	// IMP=0x0000000000016408
- (void)retrieveMoreDebugInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001612c
- (void)retrieveDebugInformation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015e2d
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;	// IMP=0x0000000000015c16
- (void)notifyHostedPIDsOfSuppression:(_Bool)arg1 active:(_Bool)arg2;	// IMP=0x0000000000015a2d
- (void)notifyHostedPIDsOfSuppression:(_Bool)arg1;	// IMP=0x0000000000015a17
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;	// IMP=0x000000000001561e
- (void)notifyIAVHeight:(double)arg1;	// IMP=0x000000000001550f
- (void)signalKeyboardChangeComplete;	// IMP=0x0000000000015380
- (void)signalAutofillUIBringupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001530a
- (void)signalKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000150f7
- (void)signalKeyboardClientChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014ee4
- (void)signalKeyboardUIDidChange:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014be5
- (void)setWantsFencing:(_Bool)arg1;	// IMP=0x0000000000014a39
- (void)didDetachLayer;	// IMP=0x00000000000149fe
- (void)didAttachLayer;	// IMP=0x000000000001464e
- (void)checkActivation:(unsigned long long)arg1;	// IMP=0x000000000001451f
- (void)_reevaluateRemoteFocusContext:(id)arg1;	// IMP=0x0000000000014438
- (void)setClientFocusContext:(id)arg1;	// IMP=0x00000000000141d5
- (void)setWindowContextID:(unsigned int)arg1 focusContext:(id)arg2 windowState:(unsigned long long)arg3 withLevel:(double)arg4;	// IMP=0x000000000001398e
- (void)clearAcquiringFocus;	// IMP=0x000000000001375e
- (_Bool)_shouldRejectSceneIdentityUpdateCorrectingClientIfNeeded:(id)arg1 fromSelector:(SEL)arg2;	// IMP=0x000000000001328d
- (void)beginAcquiringFocusOnQueue:(id)arg1;	// IMP=0x0000000000012d96
@property(readonly) _Bool isKeyboardOnScreen;
- (_Bool)_isKeyboardOnScreen:(id)arg1;	// IMP=0x0000000000012b28
- (void)_deactivateScene;	// IMP=0x00000000000128c9
- (void)startArbitrationWithExpectedState:(id)arg1 focusContext:(id)arg2 hostingPIDs:(id)arg3 usingFence:(_Bool)arg4 withSuppression:(int)arg5 onConnected:(CDUnknownBlockType)arg6;	// IMP=0x00000000000125fa
- (void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(_Bool)arg3 withSuppression:(int)arg4 onConnected:(CDUnknownBlockType)arg5;	// IMP=0x00000000000125d4
- (void)addHostedPids:(id)arg1;	// IMP=0x000000000001253b
- (void)updateSuspensionCountForPids:(id)arg1 active:(_Bool)arg2;	// IMP=0x00000000000124cb
- (void)setDeactivating:(_Bool)arg1;	// IMP=0x000000000001243b
@property(readonly) int processIdentifier;
- (void)dealloc;	// IMP=0x0000000000012272

@end

