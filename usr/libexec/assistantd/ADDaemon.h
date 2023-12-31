//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADClientLiteListener, ADExternalRequestListener, ADPeerLocationRemote, ADSiriConnectionRemote, ADSiriTetherListener, AFInstanceContext, MISSING_TYPE, NSCountedSet, NSMutableSet, NSString, NSXPCListener, PommesSearchServiceLauncher;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ADDaemon : NSObject
{
    MISSING_TYPE *_queue;	// 8 = 0x8
    NSXPCListener *_analyticsListener;	// 16 = 0x10
    NSXPCListener *_analyticsObservationListener;	// 24 = 0x18
    NSXPCListener *_clientListener;	// 32 = 0x20
    NSXPCListener *_dictationListener;	// 40 = 0x28
    NSXPCListener *_settingsListener;	// 48 = 0x30
    NSXPCListener *_synapseSyncListener;	// 56 = 0x38
    NSXPCListener *_managedStorageListener;	// 64 = 0x40
    NSXPCListener *_securityListener;	// 72 = 0x48
    NSXPCListener *_notificationServiceListener;	// 80 = 0x50
    NSXPCListener *_audioSessionAssertionServiceListener;	// 88 = 0x58
    PommesSearchServiceLauncher *_pommesSearchServiceLauncher;	// 96 = 0x60
    NSObject<OS_xpc_object> *_syncListener;	// 104 = 0x68
    ADExternalRequestListener *_externalRequestListener;	// 112 = 0x70
    ADClientLiteListener *_clientLiteListener;	// 120 = 0x78
    ADSiriTetherListener *_siriTetherListener;	// 128 = 0x80
    unsigned long long _lastSyncRequested;	// 136 = 0x88
    NSMutableSet *_syncReasonsQueued;	// 144 = 0x90
    _Bool _syncActivityRegistered;	// 152 = 0x98
    _Bool _syncUrgentActivityRegistered;	// 153 = 0x99
    ADSiriConnectionRemote *_proxyRemote;	// 160 = 0xa0
    ADPeerLocationRemote *_peerLocationManagerRemote;	// 168 = 0xa8
    _Bool _unlockedWorkQueueIsSuspended;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_unlockedWorkQueue;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_dictationListenerQueue;	// 192 = 0xc0
    NSCountedSet *_dictationPidSet;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_trialExperimentsQueue;	// 208 = 0xd0
    struct MGNotificationTokenStruct *_mg_notification_token;	// 216 = 0xd8
    AFInstanceContext *_instanceContext;	// 224 = 0xe0
}

+ (unsigned long long)processLaunchMachTime;	// IMP=0x00200000000cb262
+ (double)processLaunchTime;	// IMP=0x00100000000cb254
+ (id)sharedDaemon;	// IMP=0x00100000000cb224
- (void).cxx_destruct;	// IMP=0x00200000000c83a6
- (void)_setupAccessibility;	// IMP=0x00100000000c8360
- (void)_setupOfflineDictationStatusObserver;	// IMP=0x00100000000c833e
- (void)scheduleUnlockedWork:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c82b1
- (void)scheduleValidationRefreshForInterval:(double)arg1;	// IMP=0x00100000000c80f0
- (void)unscheduleDestroyJob;	// IMP=0x00100000000c80cf
- (void)scheduleDestroyJob;	// IMP=0x00100000000c7ffb
- (void)_syncForReason:(id)arg1 withCoalescing:(_Bool)arg2;	// IMP=0x00100000000c7d8d
- (void)syncForReason:(id)arg1 withCoalescing:(_Bool)arg2;	// IMP=0x00100000000c7cee
- (void)_syncCoalesced;	// IMP=0x00100000000c7a0f
- (void)_syncUrgently:(id)arg1;	// IMP=0x00100000000c7704
- (void)_setupSessionLanguage;	// IMP=0x00100000000c76c0
- (void)_daemonWillShutdown;	// IMP=0x00100000000c75c7
- (void)_daemonDidLaunchWithContext:(id)arg1;	// IMP=0x00100000000c72f5
- (void)_setupPommesSearchService;	// IMP=0x00100000000c72cc
- (void)_setupAudioSessionAssertionAcquisitionService;	// IMP=0x00100000000c72bb
- (void)_setupNanoPreferences;	// IMP=0x00100000000c72b5
- (void)_setupWirelessCoexManagerSubscription;	// IMP=0x00100000000c72af
- (void)_setupMemoryPressureObservation;	// IMP=0x00100000000c72a9
- (void)_setupMultiUserCloudSyncer;	// IMP=0x00100000000c72a3
- (void)_setupCloudKit;	// IMP=0x00100000000c729d
- (void)_setupHomeKit;	// IMP=0x00100000000c7259
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x00100000000c715d
- (void)_setupPairedSync;	// IMP=0x00100000000c7101
- (void)_setupClientLiteListener;	// IMP=0x00100000000c70c7
- (void)_setupExternalRequestListener;	// IMP=0x00100000000c7088
- (void)_setupTetherListener;	// IMP=0x00100000000c7045
- (void)_registerForSyncNotifications;	// IMP=0x00100000000c6f82
- (void)_meDeviceChanged:(id)arg1;	// IMP=0x00100000000c6eb3
- (void)_enabledBitsChanged:(id)arg1;	// IMP=0x00100000000c6e6d
- (void)_setupSyncListener;	// IMP=0x00100000000c6d45
- (void)_setupMobileGestaltNotificationHandlers;	// IMP=0x00100000000c6caa
- (void)_setupDistributedNotificationHandlers;	// IMP=0x00100000000c6c5b
- (void)_setupNotifyHandlers;	// IMP=0x00100000000c6c0c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000c6b18
- (void)_setupAnnouncementSpeakingStatePublisher;	// IMP=0x00100000000c6af6
- (_Bool)_audioSessionAssertionServiceListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c6830
- (void)_setupAudioSessionAssertionServiceListener;	// IMP=0x00100000000c67c9
- (_Bool)_notificationServiceListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c6526
- (void)_setupNotificationServiceListener;	// IMP=0x00100000000c64a7
- (_Bool)_securityListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c6264
- (void)_setupSecurityListener;	// IMP=0x00100000000c61fd
- (_Bool)_analyticsObservationListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c5f5f
- (void)_setupAnalyticsObservationListener;	// IMP=0x00100000000c5ef8
- (_Bool)_analyticsListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c5bec
- (void)_setupAnalyticsListener;	// IMP=0x00100000000c5b03
- (void)_setupSiriAnalyticsListener;	// IMP=0x00100000000c5abf
- (void)_setupContextListener;	// IMP=0x00100000000c5ab9
- (_Bool)_managedStorageListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c58ea
- (void)_setupManagedStorageListener;	// IMP=0x00100000000c5883
- (_Bool)_synapseSyncListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c5375
- (id)_synapseAppBundleIDFromPossibleDeamonBundleID:(id)arg1;	// IMP=0x00100000000c52ff
- (void)_bundleID:(id *)arg1 andPath:(id *)arg2 forXPCConnection:(id)arg3;	// IMP=0x00100000000c4f55
- (void)_setupSynapseSyncListener;	// IMP=0x00100000000c4eee
- (void)_setupSettingsListener;	// IMP=0x00100000000c4e4c
- (_Bool)_settingsListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c4b5b
- (void)_setupDictationListener;	// IMP=0x00100000000c4a5b
- (_Bool)_dictationListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c469d
- (void)startUISpeechRequest;	// IMP=0x00100000000c4688
- (void)startUIRequestWithInfo:(id)arg1;	// IMP=0x00100000000c4605
- (_Bool)_clientListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000c3fcd
- (void)_setupClientListener;	// IMP=0x00100000000c3ec9
- (id)_peerLocationService;	// IMP=0x00100000000c3dff
- (id)_proxyService;	// IMP=0x00100000000c3d35
- (void)_setupIDSServices;	// IMP=0x00100000000c3c41
- (void)_setupRapportServices;	// IMP=0x00100000000c3c3b
- (void)_setupInternal;	// IMP=0x00100000000c3b6c
- (void)keepAlive;	// IMP=0x00100000000c3aad
- (void)shutdown;	// IMP=0x00100000000c3a95
- (void)runWithLaunchContext:(id)arg1;	// IMP=0x00100000000c3a09
- (void)dealloc;	// IMP=0x00100000000c394a
- (id)init;	// IMP=0x00100000000c388b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

