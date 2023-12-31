//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCHIPDataSource, HMFActivity, HMFMessageDispatcher, HMMTRAccessoryServerBrowser, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetupCoordinator : HMFObject
{
    NSString *_currentBundleIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    HMMTRAccessoryServerBrowser *_chipAccessoryServerBrowser;	// 32 = 0x20
    HMDCHIPDataSource *_chipDataSource;	// 40 = 0x28
    NSMutableDictionary *_stagingRequestsByUUID;	// 48 = 0x30
    HMFActivity *_metricsActivity;	// 56 = 0x38
    CDUnknownBlockType _urlStringCHIPAccessorySetupPayloadFactory;	// 64 = 0x40
    CDUnknownBlockType _decimalStringRepresentationCHIPAccessorySetupPayloadFactory;	// 72 = 0x48
    CDUnknownBlockType _payloadCHIPAccessorySetupPayloadFactory;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x001000000090c4e0
- (void).cxx_destruct;	// IMP=0x000000000090b0e7
@property(copy) CDUnknownBlockType payloadCHIPAccessorySetupPayloadFactory; // @synthesize payloadCHIPAccessorySetupPayloadFactory=_payloadCHIPAccessorySetupPayloadFactory;
@property(copy) CDUnknownBlockType decimalStringRepresentationCHIPAccessorySetupPayloadFactory; // @synthesize decimalStringRepresentationCHIPAccessorySetupPayloadFactory=_decimalStringRepresentationCHIPAccessorySetupPayloadFactory;
@property(copy) CDUnknownBlockType urlStringCHIPAccessorySetupPayloadFactory; // @synthesize urlStringCHIPAccessorySetupPayloadFactory=_urlStringCHIPAccessorySetupPayloadFactory;
@property(retain) HMFActivity *metricsActivity; // @synthesize metricsActivity=_metricsActivity;
@property(readonly) NSMutableDictionary *stagingRequestsByUUID; // @synthesize stagingRequestsByUUID=_stagingRequestsByUUID;
@property(readonly) HMDCHIPDataSource *chipDataSource; // @synthesize chipDataSource=_chipDataSource;
@property(readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser; // @synthesize chipAccessoryServerBrowser=_chipAccessoryServerBrowser;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) NSString *currentBundleIdentifier; // @synthesize currentBundleIdentifier=_currentBundleIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000090af34
- (void)_handleStagedPairingServer:(id)arg1 error:(id)arg2 forRequest:(id)arg3 activity:(id)arg4;	// IMP=0x000000000090a1a2
- (void)_handleStagedPairingProgressState:(long long)arg1 forRequest:(id)arg2;	// IMP=0x0000000000909e81
- (void)_handleStagedPairingReadyToCancel:(CDUnknownBlockType)arg1 forRequest:(id)arg2;	// IMP=0x0000000000909b34
- (void)_handleStagedPairingThreadNetworkScanResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 forRequest:(id)arg3 activity:(id)arg4;	// IMP=0x000000000090942c
- (void)_handleStagedPairingWiFiNetworkScanResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 forRequest:(id)arg3 activity:(id)arg4;	// IMP=0x0000000000908f86
- (void)_handleStagedPairingDeviceCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 forRequest:(id)arg3 activity:(id)arg4;	// IMP=0x0000000000908af5
- (id)_setupPayloadWithCHIPSetupPayload:(id)arg1 setupPayloadURL:(id)arg2;	// IMP=0x00000000009086e2
- (id)_createCHIPSetupAccessoryPayloadWithSetupPayloadDecimalStringRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000009084f6
- (void)handleCancelStagedCHIPAccessoryPairingMessage:(id)arg1;	// IMP=0x0000000000908228
- (void)handleCreateCHIPSetupPayloadMessage:(id)arg1;	// IMP=0x00000000009079bd
- (void)handleCancelStagingMessage:(id)arg1;	// IMP=0x000000000090734d
- (void)handleSelectWiFiNetworkAssociationMessage:(id)arg1;	// IMP=0x0000000000906bff
- (void)handleSelectThreadNetworkAssociationMessage:(id)arg1;	// IMP=0x00000000009064b1
- (void)handleRejectDeviceCredentialMessage:(id)arg1;	// IMP=0x0000000000905cd1
- (void)handleConfirmDeviceCredentialMessage:(id)arg1;	// IMP=0x00000000009055d7
- (void)handleStageCHIPAccessoryPairingInStepsMessage:(id)arg1;	// IMP=0x000000000090430c
- (void)handleCreateCHIPSetupAccessoryPayloadMessage:(id)arg1;	// IMP=0x0000000000903f4a
- (void)stopMetricsForThirdPartyPairingWithError:(id)arg1;	// IMP=0x0000000000903c1c
- (void)startMetricsForThirdPartyPairing;	// IMP=0x000000000090391a
- (id)createSetupAccessoryPayloadWithCHIPSetupPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000090372e
- (id)createCHIPSetupAccessoryPayloadWithSetupPayloadURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000009034f5
- (void)configure;	// IMP=0x0000000000902fe8
- (id)initWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 chipAccessoryServerBrowser:(id)arg3 chipDataSource:(id)arg4;	// IMP=0x0000000000902df0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

