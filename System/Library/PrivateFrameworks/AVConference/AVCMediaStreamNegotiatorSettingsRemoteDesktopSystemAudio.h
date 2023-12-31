//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsRemoteDesktopSystemAudio
{
    int _preferredAudioPayload;	// 92 = 0x5c
}

- (unsigned long long)audioChannelCount;	// IMP=0x00000000002c21c1
- (unsigned int)jitterBufferMode;	// IMP=0x00000000002c21b9
- (double)rtcpSendInterval;	// IMP=0x00000000002c21ab
- (double)rtcpTimeOutInterval;	// IMP=0x00000000002c219d
- (_Bool)rtcpTimeOutEnabled;	// IMP=0x00000000002c2195
- (unsigned long long)preferredMediaBitRate;	// IMP=0x00000000002c218a
- (unsigned long long)ptime;	// IMP=0x00000000002c217f
- (int)operatingMode;	// IMP=0x00000000002c2174
- (long long)audioStreamMode;	// IMP=0x00000000002c2169
- (int)preferredAudioCodec;	// IMP=0x00000000002c2159
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x00000000002c1f9d

@end

