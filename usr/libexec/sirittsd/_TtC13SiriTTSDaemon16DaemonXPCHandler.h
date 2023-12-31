//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13SiriTTSDaemon16DaemonXPCHandler : NSObject
{
    MISSING_TYPE *remoteDelegate;	// 8 = 0x8
    MISSING_TYPE *entitlements;	// 20306 = 0x4f52
    MISSING_TYPE *preferences;	// 0 = 0x0
    MISSING_TYPE *trialAssetProvider;	// 0 = 0x0
    MISSING_TYPE *subscriptionService;	// 0 = 0x0
    MISSING_TYPE *activeSession;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000013750
- (id)init;	// IMP=0x00100000000136f0
- (void)clearDeviceCache;	// IMP=0x00100000000136e0
- (void)isANEModelCompiledMatching:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013640
- (void)killDaemon;	// IMP=0x0010000000013560
- (void)adjustVolumeWithAccessoryId:(id)arg1 volume:(float)arg2 rampTime:(double)arg3 didFinish:(CDUnknownBlockType)arg4;	// IMP=0x0010000000013460
- (void)getAudioPowerWithAccessoryId:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013360
- (void)isSpeakingWithAccessoryId:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013340
- (void)queryPhaticCapabilityWithVoice:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013320
- (void)getSynthesisVoiceMatching:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013300
- (void)downloadedVoicesMatching:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013200
- (void)subscribedVoicesWithClientId:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013110
- (void)subscribeWithVoices:(id)arg1 clientId:(id)arg2 accessoryId:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000013020
- (void)forwardWithStreamObject:(id)arg1;	// IMP=0x0010000000012fc0
- (void)signalWithInlineStreaming:(id)arg1;	// IMP=0x0010000000012f60
- (void)textToPhonemeWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012e40
- (void)estimateDurationWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012ca0
- (void)synthesizeWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012c80
- (void)cancelWithRequest:(id)arg1;	// IMP=0x00100000000129c0
- (void)speakWithSpeechRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000129a0
- (void)speakWithAudioRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012980
- (void)speakWithPreviewRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012840
- (void)prewarmWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011f10
- (void)keepActive:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011e70

@end

