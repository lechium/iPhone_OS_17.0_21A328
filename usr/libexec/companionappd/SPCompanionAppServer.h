//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NRDevice, NSDate, NSDictionary, NSMutableDictionary, NSString, NSXPCListener, SPUsageTrack;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPCompanionAppServer : NSObject
{
    _Bool _paired;	// 8 = 0x8
    unsigned int _nextTransactionID;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queueRemote;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_gizmoApplicationsUpdateTimer;	// 32 = 0x20
    NSXPCListener *_localListener;	// 40 = 0x28
    NSMutableDictionary *_localConnections;	// 48 = 0x30
    NRDevice *_pairedDevice;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 64 = 0x40
    NSMutableDictionary *_outstandingtransactions;	// 72 = 0x48
    SPUsageTrack *_usageTrack;	// 80 = 0x50
    NSMutableDictionary *_dateOfFirstAttemptToLaunchGizmoAppsByBundleID;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_processAssertionQueue;	// 96 = 0x60
    BKSProcessAssertion *_processAssertion;	// 104 = 0x68
    NSString *_activeApplication;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_processAssertionForXcodeQueue;	// 120 = 0x78
    BKSProcessAssertion *_processAssertionForXcode;	// 128 = 0x80
    NSString *_plugInIdentifierForXcodeProcessAssertion;	// 136 = 0x88
    id _batteryStateObserver;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_remoteInterfaceProcessAssertionsQueue;	// 152 = 0x98
    NSMutableDictionary *_remoteInterfaceProcessAssertions;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_launchSockPuppetAppQueue;	// 168 = 0xa8
    NSString *_launchSockPuppetAppCompanionAppIdentifer;	// 176 = 0xb0
    NSDictionary *_launchSockPuppetAppOptions;	// 184 = 0xb8
    CDUnknownBlockType _launchSockPuppetAppCompletion;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_launchSockPuppetCancelLaunchTimer;	// 200 = 0xc8
    NSDate *_dateOfFirstUnlock;	// 208 = 0xd0
    NSMutableDictionary *_extensionsDoingSnapshot;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_extensionsDoingSnapshotQueue;	// 224 = 0xe0
    NSMutableDictionary *_lastExtensionKilledDates;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_lastExtensionKilledDatesQueue;	// 240 = 0xf0
    double _timingTest_IDSReceiveTime;	// 248 = 0xf8
    double _timingTest_IDSSendTime;	// 256 = 0x100
    unsigned long long _timingTest_IDSSendSize;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_timingTest_queue;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x002000000001712c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timingTest_queue; // @synthesize timingTest_queue=_timingTest_queue;
@property(nonatomic) unsigned long long timingTest_IDSSendSize; // @synthesize timingTest_IDSSendSize=_timingTest_IDSSendSize;
@property(nonatomic) double timingTest_IDSSendTime; // @synthesize timingTest_IDSSendTime=_timingTest_IDSSendTime;
@property(nonatomic) double timingTest_IDSReceiveTime; // @synthesize timingTest_IDSReceiveTime=_timingTest_IDSReceiveTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lastExtensionKilledDatesQueue; // @synthesize lastExtensionKilledDatesQueue=_lastExtensionKilledDatesQueue;
@property(retain, nonatomic) NSMutableDictionary *lastExtensionKilledDates; // @synthesize lastExtensionKilledDates=_lastExtensionKilledDates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionsDoingSnapshotQueue; // @synthesize extensionsDoingSnapshotQueue=_extensionsDoingSnapshotQueue;
@property(retain) NSMutableDictionary *extensionsDoingSnapshot; // @synthesize extensionsDoingSnapshot=_extensionsDoingSnapshot;
@property(retain, nonatomic) NSDate *dateOfFirstUnlock; // @synthesize dateOfFirstUnlock=_dateOfFirstUnlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *launchSockPuppetCancelLaunchTimer; // @synthesize launchSockPuppetCancelLaunchTimer=_launchSockPuppetCancelLaunchTimer;
@property(copy, nonatomic) CDUnknownBlockType launchSockPuppetAppCompletion; // @synthesize launchSockPuppetAppCompletion=_launchSockPuppetAppCompletion;
@property(retain, nonatomic) NSDictionary *launchSockPuppetAppOptions; // @synthesize launchSockPuppetAppOptions=_launchSockPuppetAppOptions;
@property(retain, nonatomic) NSString *launchSockPuppetAppCompanionAppIdentifer; // @synthesize launchSockPuppetAppCompanionAppIdentifer=_launchSockPuppetAppCompanionAppIdentifer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchSockPuppetAppQueue; // @synthesize launchSockPuppetAppQueue=_launchSockPuppetAppQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteInterfaceProcessAssertions; // @synthesize remoteInterfaceProcessAssertions=_remoteInterfaceProcessAssertions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *remoteInterfaceProcessAssertionsQueue; // @synthesize remoteInterfaceProcessAssertionsQueue=_remoteInterfaceProcessAssertionsQueue;
@property(retain, nonatomic) id batteryStateObserver; // @synthesize batteryStateObserver=_batteryStateObserver;
@property(retain, nonatomic) NSString *plugInIdentifierForXcodeProcessAssertion; // @synthesize plugInIdentifierForXcodeProcessAssertion=_plugInIdentifierForXcodeProcessAssertion;
@property(retain) BKSProcessAssertion *processAssertionForXcode; // @synthesize processAssertionForXcode=_processAssertionForXcode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processAssertionForXcodeQueue; // @synthesize processAssertionForXcodeQueue=_processAssertionForXcodeQueue;
@property(retain, nonatomic) NSString *activeApplication; // @synthesize activeApplication=_activeApplication;
@property(retain) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processAssertionQueue; // @synthesize processAssertionQueue=_processAssertionQueue;
@property(retain, nonatomic) NSMutableDictionary *dateOfFirstAttemptToLaunchGizmoAppsByBundleID; // @synthesize dateOfFirstAttemptToLaunchGizmoAppsByBundleID=_dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
@property(retain, nonatomic) SPUsageTrack *usageTrack; // @synthesize usageTrack=_usageTrack;
@property(nonatomic) unsigned int nextTransactionID; // @synthesize nextTransactionID=_nextTransactionID;
@property(retain, nonatomic) NSMutableDictionary *outstandingtransactions; // @synthesize outstandingtransactions=_outstandingtransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) NRDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property _Bool paired; // @synthesize paired=_paired;
@property(retain) NSMutableDictionary *localConnections; // @synthesize localConnections=_localConnections;
@property(retain) NSXPCListener *localListener; // @synthesize localListener=_localListener;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gizmoApplicationsUpdateTimer; // @synthesize gizmoApplicationsUpdateTimer=_gizmoApplicationsUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueRemote; // @synthesize queueRemote=_queueRemote;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x0010000000016c02
- (id)applicationIdentifierFromXPCConnection:(id)arg1;	// IMP=0x0010000000016b3e
- (void)activeComplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000169b1
- (_Bool)_isApplicationViewControllerActivate:(id)arg1;	// IMP=0x001000000001682b
- (void)_sendTextSizeToApplication:(id)arg1 onlyIfChanged:(_Bool)arg2;	// IMP=0x00100000000166b9
- (id)_textSize;	// IMP=0x00100000000165f7
- (id)_textSizeChanged;	// IMP=0x001000000001657e
- (_Bool)isExtensionDoingSnapshot:(id)arg1;	// IMP=0x0010000000016435
- (void)extensionDidEndSnapshot:(id)arg1;	// IMP=0x001000000001620c
- (void)extensionDidBeginSnapshot:(id)arg1;	// IMP=0x0010000000015e6e
- (id)logStringArray:(id)arg1;	// IMP=0x0010000000015de4
- (id)logDictionary:(id)arg1;	// IMP=0x0010000000015936
- (id)decodeInData:(id)arg1;	// IMP=0x00100000000156bd
- (id)decodeOutData:(id)arg1;	// IMP=0x0010000000014e70
- (id)decodeProtoData:(id)arg1;	// IMP=0x0010000000014d47
- (id)transactionDictForID:(id)arg1 removeFromOutstanding:(_Bool)arg2;	// IMP=0x00100000000149e0
- (void)sendAndTrackTransactionDict:(id)arg1 withCompletion:(id)arg2;	// IMP=0x0010000000014504
- (_Bool)isPaired;	// IMP=0x00100000000144fc
- (void)nanoRegistryChanged:(id)arg1;	// IMP=0x001000000001441b
- (_Bool)showUserNotificationWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x001000000001429b
- (void)releaseRemoteInterfaceAssertionsForPluginIdentifer:(id)arg1;	// IMP=0x0010000000013e83
- (void)releaseProcessAssertionForXcode;	// IMP=0x0010000000013b9f
- (void)takeProcessAssertionForXcode:(id)arg1;	// IMP=0x00100000000130d9
- (void)setApplicationIDForXcodeProcessAssertion:(id)arg1;	// IMP=0x0010000000012c09
- (void)releaseProcessAssertion:(id)arg1;	// IMP=0x0010000000012986
- (void)_applicationDeactivated:(id)arg1;	// IMP=0x00100000000127b2
- (void)_applicationActivated:(id)arg1;	// IMP=0x0010000000012751
- (void)handleIncomingPlist:(id)arg1;	// IMP=0x0010000000010d81
- (id)appBundleIDFromPlist:(id)arg1;	// IMP=0x0010000000010d47
- (void)handleIncomingData:(id)arg1;	// IMP=0x0010000000010aa9
- (_Bool)unlockedSinceBoot;	// IMP=0x0010000000010a97
- (void)incomingData:(id)arg1;	// IMP=0x0010000000010a34
- (void)_saveReceiveTime;	// IMP=0x0010000000010990
- (void)_saveSendTimeAndSize:(unsigned long long)arg1;	// IMP=0x00100000000108be
- (void)handleIncomingProtoPlist:(id)arg1;	// IMP=0x00100000000105aa
- (void)incomingProtobuf:(id)arg1;	// IMP=0x001000000001049c
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010404
- (void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;	// IMP=0x00100000000101aa
- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000001011d
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001005a
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;	// IMP=0x001000000000fe05
- (void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;	// IMP=0x001000000000fcfc
- (void)wakeExtensionForWatchApp:(id)arg1;	// IMP=0x001000000000fc04
- (void)hideUserNotification;	// IMP=0x001000000000fb5d
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2;	// IMP=0x001000000000fa39
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f968
- (void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f417
- (void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ef5d
- (void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e6ce
- (void)_cancelLaunchSockPuppetAppTimeout;	// IMP=0x001000000000e586
- (void)_sockPuppetAppListUpdatedToLaunchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 acxRetryGeneration:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000d2fb
- (void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000cbb2
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cb45
- (void)killExtensionForAppIdentifier:(id)arg1;	// IMP=0x001000000000c9de
- (void)sendData:(id)arg1 toApplication:(id)arg2;	// IMP=0x001000000000c69e
- (void)sendProtoData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3;	// IMP=0x001000000000c3e2
- (void)sendData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3;	// IMP=0x001000000000c124
- (void)sendToRemoteInterface:(id)arg1 call:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b6dd
- (void)sendPlist:(id)arg1 securityType:(long long)arg2;	// IMP=0x001000000000b6c3
- (_Bool)shouldKillExtensionOnError:(id)arg1;	// IMP=0x001000000000b4d5
- (void)clearLastResetDateForPluginIdentifier:(id)arg1;	// IMP=0x001000000000b3ea
- (void)setLastExtensionKilledDateForPluginIdentifier:(id)arg1;	// IMP=0x001000000000b25f
- (void)sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 securityType:(long long)arg4;	// IMP=0x001000000000adce
- (void)sendPlist:(id)arg1 timeOut:(double)arg2 securityType:(long long)arg3;	// IMP=0x001000000000ac92
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000a64b
- (void)sendFirstUnlockStatusToGizmo;	// IMP=0x001000000000a4b8
- (_Bool)_checkUnlockedSinceBoot;	// IMP=0x001000000000a4b0
- (_Bool)_unlockedSinceBoot;	// IMP=0x001000000000a48a
- (void)cancelGizmoApplicationsUpdateTimer;	// IMP=0x001000000000a454
- (void)setup;	// IMP=0x001000000000a417
- (void)logDataSent:(unsigned long long)arg1 application:(id)arg2;	// IMP=0x001000000000a390
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a274
- (void)_setupSignalHandlers;	// IMP=0x0010000000009d10
- (id)init;	// IMP=0x001000000000943f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

