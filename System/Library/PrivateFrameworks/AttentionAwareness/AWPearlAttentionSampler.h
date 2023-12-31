//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSessionStatus, NSObject, NSString;
@protocol OS_dispatch_source, SamplingOperation;

__attribute__((visibility("hidden")))
@interface AWPearlAttentionSampler
{
    id <SamplingOperation> _unitTestOperation;	// 16 = 0x10
    id <SamplingOperation> _currentOperation;	// 24 = 0x18
    id <SamplingOperation> _finishingOperation;	// 32 = 0x20
    CARSessionStatus *_carSessionStatus;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_operationStalledTimer;	// 48 = 0x30
    unsigned long long _operationCreateTime;	// 56 = 0x38
    unsigned long long _lastErrorTime;	// 64 = 0x40
    int _displayNotifyToken;	// 72 = 0x48
    _Bool _displayState;	// 76 = 0x4c
    _Bool _smartCoverClosed;	// 77 = 0x4d
    _Bool _carPlayConnected;	// 78 = 0x4e
    _Bool _useAVFoundation;	// 79 = 0x4f
    _Bool _unitTest;	// 80 = 0x50
    struct {
        _Bool AWAttentionSamplerActivateAttentionDetection;
        _Bool AWAttentionSamplerActivateMotionDetection;
    } _currentOptions;	// 81 = 0x51
}

- (void).cxx_destruct;	// IMP=0x0000000000021e49
- (id)unitTestSampler;	// IMP=0x0000000000021e2c
- (void)cameraActivityNotification:(int)arg1 data:(CDUnion_0e6d45a1 *)arg2 forOperation:(id)arg3;	// IMP=0x00000000000216eb
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;	// IMP=0x00000000000214da
- (int)currentState;	// IMP=0x000000000002147e
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000021281
- (void)setDisplayState:(_Bool)arg1;	// IMP=0x0000000000021061
- (void)setDisplayStateFromNotification;	// IMP=0x0000000000021014
- (void)setCarplayStateFromNotification:(_Bool)arg1;	// IMP=0x0000000000020e18
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0000000000020dcd
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0000000000020d82
- (void)updateSuppressedMaskWithDisplayState:(_Bool)arg1 smartCoverClosed:(_Bool)arg2 carPlayConnected:(_Bool)arg3;	// IMP=0x0000000000020cdf
- (void)cancelStalledTimer;	// IMP=0x0000000000020c9c
- (void)startStalledTimerForOperation:(id)arg1;	// IMP=0x0000000000020b94
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;	// IMP=0x0000000000020b52
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1 ignoreDisplayState:(_Bool)arg2;	// IMP=0x00000000000208f8
- (void)setCurrentState:(int)arg1;	// IMP=0x0000000000020583
- (void)pearlAttentionSamplerErrorOccurred;	// IMP=0x00000000000203e8
- (void)updateFaceState:(int)arg1 withFaceMetadata:(struct AWFaceDetectMetadata *)arg2;	// IMP=0x000000000001fd53
- (void)updateFaceState:(int)arg1;	// IMP=0x000000000001fd26
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2 withOptions:(CDStruct_3d581f42)arg3;	// IMP=0x000000000001fca6
- (void)cancelFaceDetect:(id)arg1;	// IMP=0x000000000001fc18
- (void)finishingFaceDetect:(id)arg1;	// IMP=0x000000000001fa3c
- (void)faceDetectStalled:(id)arg1;	// IMP=0x000000000001f7cd
- (void)triggerFaceDetectWithDeadline:(unsigned long long)arg1 options:(CDStruct_3d581f42)arg2;	// IMP=0x000000000001f1b5
- (id)createNewSamplingOperation;	// IMP=0x000000000001f142
- (id)initForUnitTest:(_Bool)arg1 useAVFoundation:(_Bool)arg2;	// IMP=0x000000000001ed12
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000001ebc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

