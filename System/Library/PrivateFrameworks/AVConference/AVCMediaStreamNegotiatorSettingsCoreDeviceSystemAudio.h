//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsCoreDeviceSystemAudio
{
    int _preferredAudioPayload;	// 92 = 0x5c
}

- (unsigned int)jitterBufferMode;	// IMP=0x00000000002c1f7f
- (unsigned long long)preferredMediaBitRate;	// IMP=0x00000000002c1f5a
- (unsigned long long)ptime;	// IMP=0x00000000002c1f35
- (unsigned long long)audioChannelCount;	// IMP=0x00000000002c1f2a
- (int)operatingMode;	// IMP=0x00000000002c1f1f
- (long long)audioStreamMode;	// IMP=0x00000000002c1f14
- (int)preferredAudioCodec;	// IMP=0x00000000002c1f04
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x00000000002c1d38

@end
