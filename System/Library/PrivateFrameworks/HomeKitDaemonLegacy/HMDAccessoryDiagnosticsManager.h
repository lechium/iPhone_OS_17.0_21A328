//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessoryDiagnosticsSession, HMDAccessoryDiagnosticsSettings, HMDHAPAccessory, HMDService, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryDiagnosticsManager : HMFObject
{
    _Bool _didShutDown;	// 8 = 0x8
    _Bool _cloudFetchInProgress;	// 9 = 0x9
    _Bool _cloudFetchCompleted;	// 10 = 0xa
    HMDHAPAccessory *_accessory;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDService *_diagnosticsService;	// 40 = 0x28
    HMDAccessoryDiagnosticsSettings *_diagnosticsSettings;	// 48 = 0x30
    HMDAccessoryDiagnosticsSession *_currentDiagnosticsSession;	// 56 = 0x38
    NSString *_clientIdentifier;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000008379cc
- (void).cxx_destruct;	// IMP=0x00000000008366ca
@property _Bool cloudFetchCompleted; // @synthesize cloudFetchCompleted=_cloudFetchCompleted;
@property _Bool cloudFetchInProgress; // @synthesize cloudFetchInProgress=_cloudFetchInProgress;
@property _Bool didShutDown; // @synthesize didShutDown=_didShutDown;
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) HMDAccessoryDiagnosticsSession *currentDiagnosticsSession; // @synthesize currentDiagnosticsSession=_currentDiagnosticsSession;
@property(retain) HMDAccessoryDiagnosticsSettings *diagnosticsSettings; // @synthesize diagnosticsSettings=_diagnosticsSettings;
@property(readonly) HMDService *diagnosticsService; // @synthesize diagnosticsService=_diagnosticsService;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
- (id)logIdentifier;	// IMP=0x0000000000836555
- (void)_clearCurrentDiagnosticsSession:(id)arg1;	// IMP=0x0000000000836397
- (void)_readDiagnosticsDataWithCloudKitMetadataRequirement:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000836176
- (void)_handleDiagnosticsTransferRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008359a0
- (void)_readRequiredDiagnosticCharacteristicsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000835602
- (_Bool)_isRequestSupported:(id)arg1;	// IMP=0x0000000000834f1a
- (void)_notifyClientsOfDiagnosticsTransferSupportUpdated;	// IMP=0x0000000000834cc6
- (void)_updateDiagnosticSettings;	// IMP=0x0000000000834523
- (void)_registerForMessagesAndNotifications;	// IMP=0x00000000008340b2
- (void)_shutDown;	// IMP=0x0000000000833f49
- (void)_start;	// IMP=0x0000000000833da9
- (void)_handleDiagnosticsTransferRequest:(id)arg1;	// IMP=0x00000000008339ba
- (void)handleAccessoryConfiguredNotification:(id)arg1;	// IMP=0x0000000000833902
- (void)handleCharacteristicValueUpdatedNotification:(id)arg1;	// IMP=0x0000000000833891
- (void)handleCharacteristicsUpdatedNotification:(id)arg1;	// IMP=0x0000000000833820
- (void)shutDown;	// IMP=0x00000000008337af
- (void)start;	// IMP=0x000000000083373e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)dealloc;	// IMP=0x00000000008334ab
- (id)attributeDescriptions;	// IMP=0x00000000008332b0
- (id)initWithAccessory:(id)arg1 service:(id)arg2 msgDispatcher:(id)arg3 workQueue:(id)arg4;	// IMP=0x000000000083313b
- (void)_invalidateCloudDiagnosticsMetadata;	// IMP=0x0000000000866d76
- (void)_callCompletionHandler:(CDUnknownBlockType)arg1 diagnostics:(id)arg2 error:(id)arg3;	// IMP=0x0000000000866c72
- (void)_fetchModelDiagnosticsMetadataForAccessory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000866950
- (void)__fetchCloudDiagnosticsMetadataForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000866880
- (void)_fetchCloudDiagnosticsMetadata;	// IMP=0x000000000086679f
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1;	// IMP=0x000000000086670a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
