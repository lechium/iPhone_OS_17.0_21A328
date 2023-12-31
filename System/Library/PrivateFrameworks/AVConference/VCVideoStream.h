//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, NSNumber, NSObject, NSString, VCRedundancyControllerVideo, VCVideoCaptureConverter, VCVideoReceiverBase, VCVideoRule, VCVideoTransmitterBase;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, VCVideoReceiverFeedbackDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoStream
{
    long long _type;	// 648 = 0x288
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;	// 656 = 0x290
    unsigned int _uplinkOperatingBitrate;	// 664 = 0x298
    struct __CVBuffer *_cachedRemoteVideoFrame;	// 672 = 0x2a0
    VCVideoTransmitterBase *_videoTransmitter;	// 680 = 0x2a8
    VCVideoReceiverBase *_videoReceiver;	// 688 = 0x2b0
    VCVideoRule *_videoRule;	// 696 = 0x2b8
    int _reportingModuleID;	// 704 = 0x2c0
    unsigned int _reportingDefaultRealtimePeriod;	// 708 = 0x2c4
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;	// 712 = 0x2c8
    struct opaqueCMBufferQueue *_bufferQueue;	// 720 = 0x2d0
    VCVideoCaptureConverter *_captureConverter;	// 728 = 0x2d8
    _Bool _isServerBasedBandwidthProbingEnabled;	// 736 = 0x2e0
    _Bool _isEndToEndBasedBandwidthProbingEnabled;	// 737 = 0x2e1
    unsigned char _lastMediaPriority;	// 738 = 0x2e2
    NSNumber *_targetStreamID;	// 744 = 0x2e8
    unsigned short _currentStreamID;	// 752 = 0x2f0
    NSNumber *_sendingStreamID;	// 760 = 0x2f8
    _Bool _isCompoundStreamIDsIncreased;	// 768 = 0x300
    _Bool _shouldEnableFaceZoom;	// 769 = 0x301
    _Bool _didReceiveFirstFrame;	// 770 = 0x302
    _Bool _shouldCacheRemoteVideoFrame;	// 771 = 0x303
    _Atomic _Bool _isVideoCaptureRegistered;	// 772 = 0x304
    double _fecRatio;	// 776 = 0x308
    int _captureSource;	// 784 = 0x310
    int _streamInputCaptureSource;	// 788 = 0x314
    long long _captureSourceID;	// 792 = 0x318
    unsigned int _mediaQueueSizeInMillisecond;	// 800 = 0x320
    unsigned int _screenDisplayID;	// 804 = 0x324
    unsigned int _customWidth;	// 808 = 0x328
    unsigned int _customHeight;	// 812 = 0x32c
    unsigned int _tilesPerFrame;	// 816 = 0x330
    unsigned int _initialTargetBitrate;	// 820 = 0x334
    struct OpaqueFigCFWeakReference *_weakStream;	// 824 = 0x338
    AVCStatisticsCollector *_statisticsCollector;	// 832 = 0x340
    VCRedundancyControllerVideo *_redundancyController;	// 840 = 0x348
    int _lastDisplayedFromImageQueueCount;	// 848 = 0x350
    int _lastDroppedFromImageQueueCount;	// 852 = 0x354
    double _lastDecodedVideoFrameTime;	// 856 = 0x358
    double _lastStatisticsCollectorVideoStallTotalUpdateTime;	// 864 = 0x360
    _Bool _isRemoteMediaStalled;	// 872 = 0x368
    double _lastMediaStallReportTime;	// 880 = 0x370
    unsigned int _rtpTimestampRate;	// 888 = 0x378
    unsigned short _temporalScalingBaseLayerStreamID;	// 892 = 0x37c
    _Bool _isTemporalScalingEnabled;	// 894 = 0x37e
    CDStruct_1b6d18a9 _lastSentFrameHostTimeBeforeStop;	// 896 = 0x380
    unsigned int _lastSentFrameRTPTimestampBeforeStop;	// 920 = 0x398
    id _videoStreamDelegate;	// 928 = 0x3a0
    struct tagVCVideoStreamDelegateRealtimeInstanceVTable _videoStreamDelegateFunctions;	// 936 = 0x3a8
    struct __CFDictionary *_hdrColorInfo;	// 944 = 0x3b0
    unsigned int _baseQualityIndex;	// 952 = 0x3b8
    unsigned int _cachedConnectionMTU;	// 956 = 0x3bc
    unsigned int _constantTransportOverhead;	// 960 = 0x3c0
}

+ (_Bool)shouldRegisterReportingForStreamType:(long long)arg1;	// IMP=0x00100000003deec3
+ (_Bool)shouldEnableRateControlForStreamType:(long long)arg1;	// IMP=0x00100000003deea9
+ (_Bool)isFeatureListStringExpectedForStreamType:(long long)arg1;	// IMP=0x00100000003dee8f
+ (_Bool)isLowLatencyStreamType:(long long)arg1;	// IMP=0x00100000003dee4a
+ (id)capabilities;	// IMP=0x00100000003dcac7
+ (id)supportedVideoPayloads;	// IMP=0x00100000003dcaba
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x00100000003dc198
+ (_Bool)shouldUseRandomRTPTimestampWithType:(long long)arg1;	// IMP=0x00100000003dbaca
+ (id)newFeatureListStringsWithConfiguration:(id)arg1;	// IMP=0x00100000003d796e
@property(readonly, nonatomic) _Bool isTemporalScalingEnabled; // @synthesize isTemporalScalingEnabled=_isTemporalScalingEnabled;
@property(readonly) VCVideoTransmitterBase *videoTransmitter; // @synthesize videoTransmitter=_videoTransmitter;
@property(readonly) VCVideoReceiverBase *videoReceiver; // @synthesize videoReceiver=_videoReceiver;
@property(nonatomic) unsigned int customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) unsigned int customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property(nonatomic) _Bool didReceiveFirstFrame; // @synthesize didReceiveFirstFrame=_didReceiveFirstFrame;
@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(readonly, nonatomic) _Bool isCompoundStreamIDsIncreased; // @synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased;
@property(readonly, nonatomic) NSNumber *sendingStreamID; // @synthesize sendingStreamID=_sendingStreamID;
@property(nonatomic) _Bool isEndToEndBasedBandwidthProbingEnabled; // @synthesize isEndToEndBasedBandwidthProbingEnabled=_isEndToEndBasedBandwidthProbingEnabled;
@property(nonatomic) _Bool isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x00000000003e80d3
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x00000000003e7eb2
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000003e7eac
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000003e7e72
- (void)rateAdaptation:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x00000000003e7b5d
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000003e7a49
- (void)collectTxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000003e7a1a
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000003e79eb
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x00000000003e79ce
- (void)reactionDidStart:(id)arg1;	// IMP=0x00000000003e79c8
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x00000000003e790d
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x00000000003e76dd
- (id)clientCaptureRule;	// IMP=0x00000000003e76cc
- (void)avConferenceScreenCaptureError:(id)arg1;	// IMP=0x00000000003e7537
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x00000000003e73a2
- (CDUnknownBlockType)copyOnVideoFrameBlock;	// IMP=0x00000000003e72e1
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x00000000003e72c4
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x00000000003e720e
- (void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x00000000003e70dd
- (unsigned int)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;	// IMP=0x00000000003e6f44
- (void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x00000000003e6e45
- (void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;	// IMP=0x00000000003e6a1d
- (void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x00000000003e678f
@property(nonatomic, getter=getVideoReceiverFeedbackDelegate) id <VCVideoReceiverFeedbackDelegate> videoReceiverFeedbackDelegate;
- (void)stopSynchronization;	// IMP=0x00000000003e66cc
- (_Bool)startSynchronization:(id)arg1;	// IMP=0x00000000003e66af
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x00000000003e521d
- (_Bool)isClientSpecificUserInfoSupported:(int)arg1;	// IMP=0x00000000003e5204
- (int)reportVideoStreamType;	// IMP=0x00000000003e5174
- (struct __CFString *)getReportingClientName;	// IMP=0x00000000003e5080
- (int)reportingClientTypeForClientName;	// IMP=0x00000000003e501c
- (void)setVideoStreamDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable *)arg2;	// IMP=0x00000000003e4f16
- (void)handleVTPSendFailedWithData:(void *)arg1;	// IMP=0x00000000003e4ea9
@property(nonatomic) unsigned int targetBitrateChangeCounter;
@property(nonatomic) unsigned int targetEncoderBitrate;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
- (void)setPeerSubscribedStreamIDs:(id)arg1;	// IMP=0x00000000003e459e
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x00000000003e3c2b
- (void)setTransmitterStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x00000000003e355a
- (unsigned int)getMaxTemporalBitrateForStreamIDs:(id)arg1;	// IMP=0x00000000003e31e6
- (double)rtcpHeartbeatLeeway;	// IMP=0x00000000003e31d8
- (void)onSendRTCPPacket;	// IMP=0x00000000003e30de
- (void)onRTCPTimeout;	// IMP=0x00000000003e30cb
- (void)onRTPTimeout;	// IMP=0x00000000003e30b8
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e2f23
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e2d92
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e29ec
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e23af
- (void)deregisterAggregationHandlers;	// IMP=0x00000000003e2393
- (void)registerAggregationHandlers;	// IMP=0x00000000003e228d
- (void)setupInternalRedundancyControllerWithStreamConfig:(id)arg1;	// IMP=0x00000000003e2098
- (_Bool)shouldReportNetworkInterfaceType;	// IMP=0x00000000003e2086
- (_Bool)isTransportIPv6;	// IMP=0x00000000003e1f82
@property(readonly) unsigned int networkMTU;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x00000000003e1dfd
- (void)setupReportingAgent;	// IMP=0x00000000003e18ea
- (void)collectImageQueuePerformanceMetrics:(struct __CFDictionary *)arg1;	// IMP=0x00000000003e18e4
- (_Bool)registerForVideoCapture;	// IMP=0x00000000003e187f
- (_Bool)registerForCameraCaptureWithConfig:(id)arg1;	// IMP=0x00000000003e1549
- (void)reportFailedToRegisterVideoFramesFromSource:(int)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4;	// IMP=0x00000000003e1429
- (void)deregisterForVideoCapture;	// IMP=0x00000000003e1417
- (int)operatingModeForVideoStreamType:(long long)arg1;	// IMP=0x00000000003e13f7
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003dfee1
- (void)configureNetworkSampleRateScaleForStream:(id)arg1 transport:(id)arg2;	// IMP=0x00000000003dfaec
- (unsigned int)maxFramerateFromStreamConfigs:(id)arg1;	// IMP=0x00000000003df750
- (_Bool)configureStreamInputCaptureSourceWithStreamInputID:(long long)arg1 frameRate:(unsigned int)arg2;	// IMP=0x00000000003df748
- (void)deregisterCurrentStreamInputCaptureSource;	// IMP=0x00000000003df742
- (id)getReceiveStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x00000000003df6b8
- (id)getTransmitStatsCollectorWithStreamConfig:(id)arg1;	// IMP=0x00000000003df653
- (id)getTransmitMediaControllerWithStreamConfig:(id)arg1;	// IMP=0x00000000003df605
- (void)onCallIDChanged;	// IMP=0x00000000003df5ff
- (id)supportedPayloads;	// IMP=0x00000000003df5e6
- (void)setUplinkRetransmissionEnabled:(_Bool)arg1;	// IMP=0x00000000003df54e
- (void)setJitterBufferMode:(int)arg1;	// IMP=0x00000000003df531
- (_Bool)enableRateControlFeebackInConfig:(id)arg1;	// IMP=0x00000000003df38d
- (_Bool)setEncodingMode:(int)arg1;	// IMP=0x00000000003df279
- (_Bool)validateStreamConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003deedd
- (_Bool)isLowLatencyStreamType;	// IMP=0x00000000003dee68
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)setShouldEnableMLEnhance:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x00000000003ded22
- (void)cleanupBeforeReconfigure:(id)arg1;	// IMP=0x00000000003de311
- (_Bool)validateVideoStreamConfigurations:(id)arg1;	// IMP=0x00000000003de203
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;	// IMP=0x00000000003de1b1
- (void)setFECRedundancyVector:(const CDStruct_d7e2e0ee *)arg1;	// IMP=0x00000000003de194
@property(nonatomic) double fecRatio;
- (void)generateKeyFrameWithFIRType:(int)arg1;	// IMP=0x00000000003ddd3a
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;	// IMP=0x00000000003dd750
- (void)resetRemoteMediaStalled;	// IMP=0x00000000003dd53a
- (void)requestLastDecodedFrame;	// IMP=0x00000000003dd4a4
- (void)updateVideoConfig:(id)arg1;	// IMP=0x00000000003dcc6f
- (void)dealloc;	// IMP=0x00000000003dc86c
- (void)setupVideoStream;	// IMP=0x00000000003dc60a
- (id)initWithTransportSessionID:(unsigned int)arg1 idsParticipantID:(unsigned long long)arg2 ssrc:(unsigned int)arg3 streamToken:(long long)arg4;	// IMP=0x00000000003dc323
- (id)init;	// IMP=0x00000000003dc2b4
- (double)lastReceivedRTCPPacketTime;	// IMP=0x00000000003dc297
- (double)lastReceivedRTPPacketTime;	// IMP=0x00000000003dc27a
- (_Bool)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;	// IMP=0x00000000003dc1d8
- (void)updateShouldCacheRemoteVideoFrame;	// IMP=0x00000000003dc1ac
- (void)setVideoTransmitterConfigColorInfo:(id)arg1;	// IMP=0x00000000003dc096
- (void)setupColorInfo:(id)arg1;	// IMP=0x00000000003dbaf0
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x00000000003dbaad
- (void)handleNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;	// IMP=0x00000000003dba54
- (void)handleNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x00000000003dba08
- (struct tagVCVideoReceiverDelegateRealtimeInstanceVTable)videoReceiverDelegateFunctions;	// IMP=0x00000000003db759
- (void)stopRateAdaptation;	// IMP=0x00000000003db6d8
- (void)startRateAdaptationWithStreamConfig:(id)arg1;	// IMP=0x00000000003db106
- (void)enableRedundancyController:(id)arg1;	// IMP=0x00000000003dae41
- (unsigned int)dumpIDFromCallID;	// IMP=0x00000000003dad6e
- (void)setupCompoundStreamIDsWithStreamIDs:(id)arg1;	// IMP=0x00000000003da787
- (void)destroyVideoModules;	// IMP=0x00000000003da699
- (void)destroyVideoReceiver;	// IMP=0x00000000003da58e
- (void)updateVideoReceiver:(id)arg1;	// IMP=0x00000000003da3e9
- (_Bool)useUEPForVideoConfig:(int)arg1;	// IMP=0x00000000003da32d
- (void)setupVideoReceiver:(id)arg1 withTransmitterHandle:(struct tagHANDLE *)arg2;	// IMP=0x00000000003d9d2c
- (struct tagVCNACKGeneratorStoreBagsConfig)readServerPacketRetransmissionsForVideoStoreBagConfig:(id)arg1;	// IMP=0x00000000003d97a4
- (struct tagVCVideoReceiverConfig)videoReceiverConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x00000000003d8734
- (struct tagVCVideoStreamReceiverConfig)videoStreamReceiverConfigWithDumpID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x00000000003d8654
- (void)cleaunpReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1;	// IMP=0x00000000003d860b
- (void)addReceiverStreamConfigsToReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 streamConfig:(id)arg2;	// IMP=0x00000000003d8415
- (void)setupMultiwayVideoReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x00000000003d80b6
- (void)setupMultiwayVideoReceiverStreamSwitchInfo:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x00000000003d7f8f
- (void)setupMultiwayVideoReceiverTemporalScalingConfig:(struct tagVCVideoReceiverStreamConfig *)arg1 forTransportStream:(id)arg2;	// IMP=0x00000000003d7ec5
- (_Bool)isScreenConfig:(id)arg1;	// IMP=0x00000000003d7e5a
- (id)newScreenCaptureConfigForVideoConfig:(id)arg1;	// IMP=0x00000000003d7a25
- (void)destroyVideoTransmitter;	// IMP=0x00000000003d7853
- (void)initVideoTransmitter;	// IMP=0x00000000003d7247
- (_Bool)isFECGeneratorEnabled;	// IMP=0x00000000003d70de
- (id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg1;	// IMP=0x00000000003d5d73
- (void)overrideConfigWithDefaults;	// IMP=0x00000000003d5be8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

