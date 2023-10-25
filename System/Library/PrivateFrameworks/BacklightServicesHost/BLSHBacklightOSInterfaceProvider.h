//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHBacklightOSTimerProvider.h"

@class BLSHCriticalAssertProvider, BLSHSuppressionEvent, BLSHWatchdogProvider, BSContinuousMachTimer, CBDisplayStateClient, CMSuppressionManager, NSDate, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol BLSCBDisplayStateDelegate, BLSHBacklightPlatformProvider, BLSHWatchdogInvalidatable, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLSHBacklightOSInterfaceProvider : BLSHBacklightOSTimerProvider
{
    id <BLSHBacklightPlatformProvider> _platformProvider;	// 8 = 0x8
    BLSHWatchdogProvider *_watchdogProvider;	// 16 = 0x10
    BLSHCriticalAssertProvider *_criticalAssertProvider;	// 24 = 0x18
    NSMutableDictionary *_lock_sceneObservers;	// 32 = 0x20
    NSMutableSet *_lock_sceneWorkspaces;	// 40 = 0x28
    BLSHSuppressionEvent *_lock_lastSuppressionEvent;	// 48 = 0x30
    CBDisplayStateClient *_displayStateClient;	// 56 = 0x38
    CMSuppressionManager *_suppressionManager;	// 64 = 0x40
    BSContinuousMachTimer *_setCBDisplayModeTimer;	// 72 = 0x48
    struct os_unfair_lock_s _lock;	// 80 = 0x50
    long long _lock_cbDisplayMode;	// 88 = 0x58
    long long _lock_cbFlipbookState;	// 96 = 0x60
    _Bool _lock_suppressionServiceActive;	// 104 = 0x68
    _Bool _lock_caFlipbookEnabled;	// 105 = 0x69
    _Bool _lock_caFlipbookSuppressed;	// 106 = 0x6a
    _Bool _lock_caBlanked;	// 107 = 0x6b
    _Bool _lock_flipbookTransparent;	// 108 = 0x6c
    _Bool _deviceSupportsAlwaysOn;	// 109 = 0x6d
    _Bool _lock_kernelSpecialMode;	// 110 = 0x6e
    _Bool _displayStateClientSupported;	// 111 = 0x6f
    float _backlightDimmedFactor;	// 112 = 0x70
    id <BLSHWatchdogInvalidatable> _lock_watchdogTimer;	// 120 = 0x78
    unsigned long long _lock_watchdogType;	// 128 = 0x80
    double _completionDelayForTesting;	// 136 = 0x88
    unsigned long long _flipbookDiagnosticHistoryFrameLimit;	// 144 = 0x90
    unsigned long long _flipbookDiagnosticHistoryMemoryLimit;	// 152 = 0x98
    id <BLSCBDisplayStateDelegate> _cbDisplayStateDelegate;	// 160 = 0xa0
}

+ (void)setSharedProvider:(id)arg1;	// IMP=0x0010000000004b8a
+ (id)sharedProvider;	// IMP=0x0010000000004b50
- (void).cxx_destruct;	// IMP=0x0000000000008111
@property(retain, setter=setCBDisplayStateDelegate:) id <BLSCBDisplayStateDelegate> cbDisplayStateDelegate; // @synthesize cbDisplayStateDelegate=_cbDisplayStateDelegate;
@property(readonly, nonatomic) unsigned long long flipbookDiagnosticHistoryMemoryLimit; // @synthesize flipbookDiagnosticHistoryMemoryLimit=_flipbookDiagnosticHistoryMemoryLimit;
@property(readonly, nonatomic) unsigned long long flipbookDiagnosticHistoryFrameLimit; // @synthesize flipbookDiagnosticHistoryFrameLimit=_flipbookDiagnosticHistoryFrameLimit;
- (_Bool)isTailspinAvailable;	// IMP=0x00000000000080af
- (void)writeTailspinForWatchdog:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007f04
- (_Bool)panicForWatchdog:(id)arg1;	// IMP=0x0000000000007e92
- (void)abortForWatchdog:(unsigned long long)arg1 payload:(void *)arg2 payloadSize:(unsigned int)arg3 explanation:(id)arg4;	// IMP=0x0000000000007e23
@property(nonatomic) double completionDelayForTesting;
- (id)identifier;	// IMP=0x0000000000007d1e
- (id)osInterfaceProvider;	// IMP=0x0000000000007d15
- (id)abortContext;	// IMP=0x0000000000007c0c
@property(nonatomic, getter=isFlipbookTransparent) _Bool flipbookTransparent;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)didCompleteSwitchToFlipbookState:(long long)arg1 withError:(id)arg2;	// IMP=0x0000000000007903
- (void)didCompleteTransitionToDisplayMode:(long long)arg1 withError:(id)arg2;	// IMP=0x00000000000075c8
- (id)removeSceneObserver:(id)arg1 forSceneIdentityToken:(id)arg2;	// IMP=0x00000000000072fd
- (id)addSceneObserver:(id)arg1 forSceneIdentityToken:(id)arg2;	// IMP=0x0000000000006efb
- (void)didDetectSignificantUserInteraction;	// IMP=0x0000000000006ea1
- (void)endSuppressionService;	// IMP=0x0000000000006e17
- (void)startSuppressionServiceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006b22
@property(readonly, nonatomic) BLSHSuppressionEvent *lastSuppressionEvent;
@property(readonly, nonatomic, getter=isSuppressionServiceActive) _Bool suppressionServiceActive;
@property(readonly, nonatomic) _Bool deviceSupportsAlwaysOn;
- (id)observeSignificantTimeChangeWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000067a0
- (id)systemSleepMonitor;	// IMP=0x0000000000006787
- (id)createFlipbook;	// IMP=0x0000000000006760
- (id)createSystemActivityAssertionWithIdentifier:(id)arg1;	// IMP=0x0000000000006713
- (id)createPowerAssertionWithIdentifier:(id)arg1;	// IMP=0x00000000000066c6
- (id)scheduleWatchdogWithDelegate:(id)arg1 explanation:(id)arg2 timeout:(double)arg3;	// IMP=0x00000000000066a9
- (void)willUnblank;	// IMP=0x000000000000669f
- (void)setShowingBlankingWindow:(_Bool)arg1 fadeDuration:(double)arg2;	// IMP=0x0000000000006682
@property(readonly, nonatomic, getter=isShowingBlankingWindow) _Bool showingBlankingWindow;
- (void)switchToFlipbookState:(long long)arg1;	// IMP=0x0000000000006444
@property(readonly, nonatomic) long long cbFlipbookState;
@property(readonly, nonatomic) _Bool supportsFlipbookState;
- (void)transitionToDisplayMode:(long long)arg1 withDuration:(double)arg2;	// IMP=0x0000000000005d9e
@property(readonly, nonatomic) long long cbDisplayMode;
- (void)dispatchToMainQueueAfterSecondsDelay:(double)arg1 identifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005d1e
@property(nonatomic, getter=isKernelAlwaysOnMode) _Bool kernelAlwaysOnMode;
@property(nonatomic, getter=isCAFlipbookSuppressed, setter=setCAFlipbookSuppressed:) _Bool caFlipbookSuppressed;
@property(nonatomic, getter=isCAFlipbookEnabled, setter=setCAFlipbookEnabled:) _Bool caFlipbookEnabled;
@property(nonatomic, getter=isCABlanked, setter=setCABlanked:) _Bool caBlanked;
- (id)sceneWithIdentityToken:(id)arg1;	// IMP=0x000000000000571b
- (void)deregisterSceneWorkspace:(id)arg1;	// IMP=0x00000000000056ba
- (void)registerSceneWorkspace:(id)arg1;	// IMP=0x0000000000005659
- (void)registerHandlersForService:(id)arg1;	// IMP=0x0000000000005566
- (id)initWithPlatformProvider:(id)arg1;	// IMP=0x0000000000004bcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long mach_continuous_time;
@property(readonly, nonatomic) NSDate *now;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTesting) _Bool testing;

@end
