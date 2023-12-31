//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSPolicy.h>

@class MISSING_TYPE, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy
{
    NSObject<OS_dispatch_queue> *_recordStateQueue;	// 8 = 0x8
    _Bool _isSiriClientConsideredAsRecord;	// 16 = 0x10
    MISSING_TYPE *_pendingRecordingStopUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000146e84
@property(retain, nonatomic) NSString *pendingRecordingStopUUID; // @synthesize pendingRecordingStopUUID=_pendingRecordingStopUUID;
@property(nonatomic) _Bool isSiriClientConsideredAsRecord; // @synthesize isSiriClientConsideredAsRecord=_isSiriClientConsideredAsRecord;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x0010000000146e39
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0010000000146e33
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x0010000000146e2d
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x0010000000146e27
- (void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(_Bool)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;	// IMP=0x0010000000146d81
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)arg1 stopStreamOption:(id)arg2 eventUUID:(id)arg3;	// IMP=0x0010000000146ced
- (void)intuitiveConvAudioCaptureMonitor:(id)arg1 didStartAudioCaptureSuccessfully:(_Bool)arg2 option:(id)arg3 eventUUID:(id)arg4;	// IMP=0x0010000000146c47
- (void)_handleClientRecordStateDidChange:(_Bool)arg1 eventUUID:(id)arg2;	// IMP=0x0010000000146a7b
- (_Bool)_isInPhoneCallStateWithHSPhoneCallCapableRoute;	// IMP=0x00100000001467f0
- (_Bool)_isAudioRouteIneligibleForAP;	// IMP=0x00100000001466e5
- (_Bool)_isHearstRoutedAndWithNoPhoneCall;	// IMP=0x0010000000146655
- (_Bool)_isJarvisRouted;	// IMP=0x00100000001465bd
- (_Bool)_isSpeechDetectionDevicePresent;	// IMP=0x00100000001464fb
- (void)_addConditionsForIOSAOP;	// IMP=0x001000000014632c
- (void)_addConditionsForIOSBargeIn;	// IMP=0x001000000014608e
- (void)_addVoiceTriggerAOPModeEnabledConditions;	// IMP=0x0010000000145fb7
- (void)_subscribeEventMonitors;	// IMP=0x0010000000145d7c
- (id)init;	// IMP=0x0010000000145c74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

