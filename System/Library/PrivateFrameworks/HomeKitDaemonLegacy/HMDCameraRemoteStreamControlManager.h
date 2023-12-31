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

+ (id)logCategory;	// IMP=0x00100000002e2647
- (void).cxx_destruct;	// IMP=0x00000000002e1a3a
@property(retain) HMDCameraRemoteStreamSession *streamSession; // @synthesize streamSession=_streamSession;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
- (void)_sendUpdatedConfiguration;	// IMP=0x00000000002e16ca
- (void)_dispatchReconfigureToResident:(id)arg1;	// IMP=0x00000000002e14ae
- (void)_reconfigureStreams;	// IMP=0x00000000002e132b
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000002e120e
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000002e1020
- (void)streamingManagerDidNetworkImprove:(id)arg1;	// IMP=0x00000000002e0e32
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x00000000002e0ceb
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000002e0cd9
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;	// IMP=0x00000000002e0abe
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002e09ca
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002e08b6
- (void)deviceConnectionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002e07c2
- (void)deviceConnectionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002e07ad
- (void)sessionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002e06b9
- (void)sessionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002e06a4
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x00000000002e04f8
- (void)_sendStopMessageToResident;	// IMP=0x00000000002e02f5
- (void)_stopCurrentStreamSessionWithError:(id)arg1;	// IMP=0x00000000002e0178
- (void)stopStreamWithError:(id)arg1;	// IMP=0x00000000002e00c0
- (void)_setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000002dff88
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000002dfed0
- (void)_reconfigureStream:(id)arg1;	// IMP=0x00000000002dfe18
- (void)reconfigureStream:(id)arg1;	// IMP=0x00000000002dfd60
- (void)_streamStarted;	// IMP=0x00000000002dfc6b
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;	// IMP=0x00000000002df718
- (void)_startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000002df03e
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000002def86
- (void)_relaySessionStarted:(id)arg1;	// IMP=0x00000000002ded2e
- (void)_idsSessionCreatedAndConfigNegotiated;	// IMP=0x00000000002deab4
- (void)_setParametersSelected:(id)arg1;	// IMP=0x00000000002de1f5
- (void)_negotiateStream;	// IMP=0x00000000002dddd9
- (void)negotiateStream;	// IMP=0x00000000002ddd68
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ddc8a
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000002ddc0e
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (void)dealloc;	// IMP=0x00000000002dd985
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 profileUniqueIdentifier:(id)arg8 residentMessageHandler:(id)arg9 streamSession:(id)arg10;	// IMP=0x00000000002dd700
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 remoteAccessDevice:(id)arg13 streamPreference:(id)arg14;	// IMP=0x00000000002dd2dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end

