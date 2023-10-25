//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class AVCRemoteVideoClient, HMDAudioStreamInterface, HMDCameraStreamSessionID, HMDCameraStreamSnapshotHandler, HMDVideoStreamInterface, NSNumber, NSObject, NSString;
@protocol HMDStreamingManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDStreamingManager : HMFObject
{
    NSNumber *_slotIdentifier;	// 8 = 0x8
    NSNumber *_aspectRatio;	// 16 = 0x10
    HMDVideoStreamInterface *_videoStreamInterface;	// 24 = 0x18
    HMDAudioStreamInterface *_audioStreamInterface;	// 32 = 0x20
    HMDCameraStreamSessionID *_sessionID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    id <HMDStreamingManagerDelegate> _delegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 64 = 0x40
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 72 = 0x48
    AVCRemoteVideoClient *_avcRemoteVideo;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x00100000001f4078
- (void).cxx_destruct;	// IMP=0x00000000001f37da
@property(retain) AVCRemoteVideoClient *avcRemoteVideo; // @synthesize avcRemoteVideo=_avcRemoteVideo;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDStreamingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) HMDAudioStreamInterface *audioStreamInterface; // @synthesize audioStreamInterface=_audioStreamInterface;
@property(readonly) HMDVideoStreamInterface *videoStreamInterface; // @synthesize videoStreamInterface=_videoStreamInterface;
@property(copy) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
- (void)remoteVideoServerDidDie:(id)arg1;	// IMP=0x00000000001f3643
- (void)remoteVideoClientDidReceiveLastFrame:(id)arg1;	// IMP=0x00000000001f35d2
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;	// IMP=0x00000000001f351a
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000001f3462
- (void)videoStreamDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000001f338b
- (void)videoStreamDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000001f32b4
- (void)videoStreamDidNetworkImprove:(id)arg1;	// IMP=0x00000000001f31dd
- (void)videoStream:(id)arg1 didStop:(id)arg2;	// IMP=0x00000000001f30db
- (void)videoStream:(id)arg1 didStart:(id)arg2;	// IMP=0x00000000001f2c5c
- (void)audioStream:(id)arg1 didStop:(id)arg2;	// IMP=0x00000000001f2c56
- (void)audioStream:(id)arg1 didResume:(id)arg2;	// IMP=0x00000000001f2c50
- (void)audioStream:(id)arg1 didPause:(id)arg2;	// IMP=0x00000000001f2c4a
- (void)audioStream:(id)arg1 didStart:(id)arg2;	// IMP=0x00000000001f2b3d
- (void)_callConfigurationUpdated;	// IMP=0x00000000001f29bc
- (void)_callNetworkDeteriorated;	// IMP=0x00000000001f283b
- (void)_callNetworkImproved;	// IMP=0x00000000001f26ba
- (void)_callStreamStoppedWithError:(id)arg1;	// IMP=0x00000000001f2509
- (void)_callRelayStarted;	// IMP=0x00000000001f2388
- (void)_callReceivedFirstFrame;	// IMP=0x00000000001f2207
- (void)_callStreamStarted:(id)arg1;	// IMP=0x00000000001f2056
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f1f78
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000001f1efc
- (void)_stopStream;	// IMP=0x00000000001f1d76
- (void)updateStreamConfiguration:(id)arg1;	// IMP=0x00000000001f1cbe
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x00000000001f1c44
- (void)_startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;	// IMP=0x00000000001f13ba
- (void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;	// IMP=0x00000000001f12dc
@property(readonly) unsigned long long audioStreamSetting;
- (id)logIdentifier;	// IMP=0x00000000001f1248
- (void)dealloc;	// IMP=0x00000000001f120a
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 localVideoNetworkConfig:(id)arg6 localAudioNetworkConfig:(id)arg7 sessionHandler:(id)arg8;	// IMP=0x00000000001f0e9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
