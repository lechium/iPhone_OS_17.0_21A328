//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPVoiceDetectorV2
{
    _Bool _voiceActivityNew;	// 136 = 0x88
    struct OpaqueAudioComponentInstance *_audioUnit;	// 144 = 0x90
}

- (id)results;	// IMP=0x00000000002b86ef
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;	// IMP=0x00000000002b86ac
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;	// IMP=0x00000000002b8512
- (int)loadModel;	// IMP=0x00000000002b845c
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription *)arg1;	// IMP=0x00000000002b817b
- (void)dealloc;	// IMP=0x00000000002b80f3
- (id)init;	// IMP=0x00000000002b80b0

@end

