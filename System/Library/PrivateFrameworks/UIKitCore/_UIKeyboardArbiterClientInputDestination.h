//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet, NSObject, NSString, UIScreen, UIWindowScene;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClientInputDestination
{
    _Bool _deactivatedBySystemAnimation;	// 24 = 0x18
    _Bool _resignActiveByControlCenter;	// 25 = 0x19
    _Bool _hadFocusBeforeOverlay;	// 26 = 0x1a
    UIWindowScene *_suppressedScene;	// 32 = 0x20
    int _hostedCount;	// 40 = 0x28
    UIScreen *_lastScreen;	// 48 = 0x30
    _Bool _resigningByOtherApp;	// 56 = 0x38
    NSObject<OS_os_transaction> *_clientChangeResponseTransaction;	// 64 = 0x40
    struct os_unfair_lock_s _clientChangeResponseLock;	// 72 = 0x48
    NSString *_keyboardSceneIdentifierEnteringForeground;	// 80 = 0x50
    _Bool _updatingKeyWindow;	// 88 = 0x58
    NSString *_focusedSceneIdentityStringOrIdentifier;	// 96 = 0x60
    NSMutableSet *_pendingKeyboardGrabs;	// 104 = 0x68
    NSMutableSet *_activePIDs;	// 112 = 0x70
    NSMutableDictionary *_callerIDs;	// 120 = 0x78
}

+ (id)currentBundleIdentifier;	// IMP=0x0060000001745152
- (void).cxx_destruct;	// IMP=0x000000000174ea27
@property(nonatomic) _Bool updatingKeyWindow; // @synthesize updatingKeyWindow=_updatingKeyWindow;
@property(retain, nonatomic) NSMutableDictionary *callerIDs; // @synthesize callerIDs=_callerIDs;
@property(retain, nonatomic) NSMutableSet *activePIDs; // @synthesize activePIDs=_activePIDs;
@property(retain, nonatomic) NSMutableSet *pendingKeyboardGrabs; // @synthesize pendingKeyboardGrabs=_pendingKeyboardGrabs;
@property(copy, nonatomic) NSString *focusedSceneIdentityStringOrIdentifier; // @synthesize focusedSceneIdentityStringOrIdentifier=_focusedSceneIdentityStringOrIdentifier;
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000174e3c1
- (void)queue_setKeyboardDisabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000174e298
- (void)queue_activeProcessResignWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000174e188
- (void)keyboardUIDidChange:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000000174dcb2
- (void)syncKeyboardUIChangeInfo:(id)arg1;	// IMP=0x000000000174dbdf
- (void)queue_keyboardUIDidChange:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000000174d9b0
- (void)handleKeyboardUIDidChange:(id)arg1;	// IMP=0x000000000174c598
- (void)handleKeyboardUITrackingChange:(id)arg1;	// IMP=0x000000000174c119
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000000174b90f
- (void)queue_endInputSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000174b7cd
- (void)peekApplicationEvent:(id)arg1;	// IMP=0x000000000174b185
- (_Bool)_sceneFocusUpdatePermittedForWindow:(id)arg1;	// IMP=0x000000000174ad21
- (_Bool)_sceneFocusPermittedForApplication;	// IMP=0x000000000174acde
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000174a77f
- (void)completeMoveKeyboard;	// IMP=0x000000000174a705
- (void)updateWindowState;	// IMP=0x000000000174a6b8
- (void)setWindowEnabled:(_Bool)arg1 force:(_Bool)arg2;	// IMP=0x000000000174a406
- (void)setWindowEnabled:(_Bool)arg1;	// IMP=0x000000000174a3f2
- (void)resignFirstResponderIfNeeded;	// IMP=0x000000000174a211
- (_Bool)allowedToEnableKeyboardWindow;	// IMP=0x0000000001749f40
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0000000001749e80
- (void)clearKeyboardSceneIdentifierEnteringForeground:(id)arg1;	// IMP=0x0000000001749ddc
- (void)setKeyboardSceneIdentifierEnteringForegroundForScene:(id)arg1;	// IMP=0x0000000001749da0
- (void)sceneDidActivate:(id)arg1;	// IMP=0x0000000001749d8e
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0000000001749d7c
- (_Bool)allowedToShowKeyboard;	// IMP=0x0000000001749d33
- (_Bool)needsToShowKeyboardForViewServiceHost;	// IMP=0x0000000001749cfa
- (_Bool)needsToShowKeyboard;	// IMP=0x0000000001749cc1
- (struct CGRect)keyboardFrameIncludingRemoteIAV;	// IMP=0x0000000001749c65
- (void)finishWithHostedWindow;	// IMP=0x0000000001749c10
- (id)prepareForHostedWindowWithScene:(id)arg1;	// IMP=0x0000000001749b7e
- (_Bool)wantsToShowKeyboardForViewServiceHost;	// IMP=0x0000000001749b6c
- (_Bool)wantsToShowKeyboard;	// IMP=0x0000000001749aea
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;	// IMP=0x00000000017499a1
- (void)removeWindowHostingPID:(int)arg1 callerID:(id)arg2;	// IMP=0x00000000017497ed
- (void)addWindowHostingPID:(int)arg1 callerID:(id)arg2;	// IMP=0x00000000017496b2
- (_Bool)hasWindowHostingCallerID:(id)arg1;	// IMP=0x0000000001749587
- (_Bool)hasWindowHostingPID:(int)arg1;	// IMP=0x000000000174950c
- (_Bool)isHostedInAnotherProcess;	// IMP=0x000000000174943f
- (void)applicationKeyWindowDidChange:(id)arg1;	// IMP=0x00000000017491c5
- (id)_activeScreen;	// IMP=0x00000000017490e7
- (unsigned long long)localSceneCount;	// IMP=0x0000000001748f58
- (void)signalToProxyKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001748e36
- (_Bool)_didHandleKeyboardClientChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(_Bool)arg2 isLocalEvent:(_Bool)arg3;	// IMP=0x0000000001747ff9
- (void)_layoutKeyboardViews:(id)arg1;	// IMP=0x0000000001747d0b
- (void)_preserveInputViewsForClientChange:(_Bool)arg1 snapshotIfNecessary:(_Bool)arg2;	// IMP=0x0000000001747cf9
- (_Bool)inputDestinationDidChange:(_Bool)arg1 withIAVHeight:(double)arg2 isIAVRelevant:(_Bool)arg3 notifyRemote:(_Bool)arg4 forScene:(id)arg5;	// IMP=0x0000000001746f6f
- (_Bool)shouldIgnoreInputDestinationChange:(_Bool)arg1 withIAVHeight:(double)arg2;	// IMP=0x0000000001746ee6
- (void)setSuppressingKeyboard:(_Bool)arg1 forScene:(id)arg2;	// IMP=0x0000000001746919
- (void)didBecomeActive:(id)arg1;	// IMP=0x00000000017467c7
- (void)willResignActive:(id)arg1;	// IMP=0x00000000017466cc
- (void)didRemoveDeactivationReason:(id)arg1;	// IMP=0x0000000001746404
- (void)willAddDeactivationReason:(id)arg1;	// IMP=0x0000000001746269
- (void)didSuspend:(id)arg1;	// IMP=0x00000000017460be
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0000000001745577
- (void)willResume:(id)arg1;	// IMP=0x00000000017451e5
- (void)restorePreservedInputViewsIfNecessary;	// IMP=0x0000000001745110
- (_Bool)shouldSnapshot;	// IMP=0x00000000017450b5
- (void)setSnapshotting:(_Bool)arg1;	// IMP=0x0000000001744f0a
- (void)setCurrentClientState:(id)arg1;	// IMP=0x0000000001744e34
- (void)didFailArbiterConnection;	// IMP=0x0000000001744df1
- (void)configureArbiterCommunication:(id)arg1;	// IMP=0x0000000001744c36
- (void)stopConnection;	// IMP=0x0000000001744bf5
- (void)startConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000017449a9
- (void)startConnection;	// IMP=0x0000000001744995
- (id)currentHostedPIDs;	// IMP=0x0000000001744945
- (id)init;	// IMP=0x00000000017446cf

@end

