//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraMediaConfigGenerator, HMDCameraRemoteStreamSession, HMDCameraResidentMessageHandler, HMDCameraStreamMetrics, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraRemoteStreamControlManager
{
    NSUUID *_profileUniqueIdentifier;	// 8 = 0x8
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 16 = 0x10
    HMDCameraMediaConfigGenerator *_configGenerator;	// 24 = 0x18
    HMDCameraRemoteStreamSession *_streamSession;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000033678a
- (void).cxx_destruct;	// IMP=0x0000000000335b7d
@property(retain) HMDCameraRemoteStreamSession *streamSession; // @synthesize streamSession=_streamSession;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
- (void)_sendUpdatedConfiguration;	// IMP=0x000000000033580d
- (void)_dispatchReconfigureToResident:(id)arg1;	// IMP=0x00000000003355f1
- (void)_reconfigureStreams;	// IMP=0x000000000033546e
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x0000000000335351
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x0000000000335163
- (void)streamingManagerDidNetworkImprove:(id)arg1;	// IMP=0x0000000000334f75
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x0000000000334e2e
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x0000000000334e1c
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;	// IMP=0x0000000000334c01
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x0000000000334b0d
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000003349f9
- (void)deviceConnectionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x0000000000334905
- (void)deviceConnectionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000003348f0
- (void)sessionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000003347fc
- (void)sessionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000003347e7
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x000000000033463b
- (void)_sendStopMessageToResident;	// IMP=0x0000000000334438
- (void)_stopCurrentStreamSessionWithError:(id)arg1;	// IMP=0x00000000003342bb
- (void)stopStreamWithError:(id)arg1;	// IMP=0x0000000000334203
- (void)_setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000003340cb
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x0000000000334013
- (void)_reconfigureStream:(id)arg1;	// IMP=0x0000000000333f5b
- (void)reconfigureStream:(id)arg1;	// IMP=0x0000000000333ea3
- (void)_streamStarted;	// IMP=0x0000000000333dae
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;	// IMP=0x000000000033385b
- (void)_startStreamWithRemoteSettings:(id)arg1;	// IMP=0x0000000000333181
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000003330c9
- (void)_relaySessionStarted:(id)arg1;	// IMP=0x0000000000332e71
- (void)_idsSessionCreatedAndConfigNegotiated;	// IMP=0x0000000000332bf7
- (void)_setParametersSelected:(id)arg1;	// IMP=0x0000000000332338
- (void)_negotiateStream;	// IMP=0x0000000000331f1c
- (void)negotiateStream;	// IMP=0x0000000000331eab
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000331dcd
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x0000000000331d51
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (void)dealloc;	// IMP=0x0000000000331ac8
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 profileUniqueIdentifier:(id)arg8 residentMessageHandler:(id)arg9 streamSession:(id)arg10;	// IMP=0x0000000000331843
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 remoteAccessDevice:(id)arg13 streamPreference:(id)arg14;	// IMP=0x000000000033141f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end

