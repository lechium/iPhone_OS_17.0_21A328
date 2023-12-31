//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraResidentMessageHandler, HMDCameraSnapshotMonitorEvents, HMDCameraStreamSnapshotHandler, HMDHAPAccessory, HMDSnapshotCacheRequestHandler, HMDSnapshotLocalSession, HMDSnapshotRequestHandler, HMDSnapshotSlotManager, HMFMessageDispatcher, HMFNetMonitor, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol HMDCameraSnapshotManagerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    HMDSnapshotLocalSession *_currentLocalSession;	// 32 = 0x20
    NSMutableDictionary *_currentRemoteSessions;	// 40 = 0x28
    HMDHAPAccessory *_accessory;	// 48 = 0x30
    NSString *_imageCacheDirectory;	// 56 = 0x38
    HMDCameraSnapshotMonitorEvents *_monitorServicesManager;	// 64 = 0x40
    HMDSnapshotRequestHandler *_snapshotRequestHandler;	// 72 = 0x48
    HMDSnapshotCacheRequestHandler *_snapshotCacheRequestHandler;	// 80 = 0x50
    HMDSnapshotSlotManager *_snapshotSlotManager;	// 88 = 0x58
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 96 = 0x60
    NSMutableArray *_pendingSnapshotRequestDuringStreamSetup;	// 104 = 0x68
    NSMutableArray *_pendingRemoteSnapshotRequestDuringStreamSetup;	// 112 = 0x70
    HMFNetMonitor *_networkMonitor;	// 120 = 0x78
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 128 = 0x80
    id <HMDCameraSnapshotManagerDataSource> _dataSource;	// 136 = 0x88
    NSString *_logIdentifier;	// 144 = 0x90
}

+ (id)logCategory;	// IMP=0x00100000007bfd3f
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00100000007bfd37
+ (void)cleanStaleSnapshotDirectoriesUsingCurrentAccessories:(id)arg1;	// IMP=0x00100000007bf8f4
- (void).cxx_destruct;	// IMP=0x00000000007bd1a7
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000007bd103
- (void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(_Bool)arg2;	// IMP=0x00000000007bcd99
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;	// IMP=0x00000000007bcc19
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;	// IMP=0x00000000007bc9b0
- (void)snapshotRelayStream:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bc892
- (void)snapshotRelayStream:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bc774
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bc656
- (void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bc538
- (void)snapshotStreamReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x00000000007bc405
- (void)snapshotStreamReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bc2f5
- (void)snapshotRelaySender:(id)arg1 didSaveSnapshotFile:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bc114
- (void)snapshotRelaySender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bbff6
- (void)snapshotRelaySender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bbed8
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x00000000007bbda5
- (void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000007bbc95
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x00000000007bbb62
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleTakeRemoteSnapshotFailureMessage:(id)arg1;	// IMP=0x00000000007bb584
- (void)_handleRemoteSnapshotReceivedMessage:(id)arg1;	// IMP=0x00000000007bb188
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007baf82
- (void)_handleTakeRemoteSnapshotMessage:(id)arg1;	// IMP=0x00000000007b9f84
- (void)_handleTakeSnapshotMessage:(id)arg1;	// IMP=0x00000000007b91a0
@property(readonly, copy) NSDictionary *encodedMostRecentSnapshot;
- (void)_handleCreateSnapshotFromBulletinContextMessage:(id)arg1;	// IMP=0x00000000007b8b75
- (void)_handleReleaseSnapshotMessage:(id)arg1;	// IMP=0x00000000007b8b4f
- (void)_handleFillSnapshotSlotMessage:(id)arg1;	// IMP=0x00000000007b8b29
- (void)handleAccessoryUnconfigured:(id)arg1;	// IMP=0x00000000007b8ab8
- (void)releaseSnapshotWithSlotIdentifier:(id)arg1;	// IMP=0x00000000007b8a00
- (void)takeSnapshot:(id)arg1;	// IMP=0x00000000007b8948
- (void)registerForMessages;	// IMP=0x00000000007b8277
- (void)dealloc;	// IMP=0x00000000007b81e6
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 networkMonitor:(id)arg6 logIdentifier:(id)arg7 imageCacheDirectory:(id)arg8 residentMessageHandler:(id)arg9 snapshotSlotManager:(id)arg10 dataSource:(id)arg11;	// IMP=0x00000000007b7dbf
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 networkMonitor:(id)arg6;	// IMP=0x00000000007b7b27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

