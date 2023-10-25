//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCAudioPayloadConfig;

__attribute__((visibility("hidden")))
@interface VCAudioPayload : NSObject
{
    struct SoundDec_t *_encoder;	// 8 = 0x8
    VCAudioPayloadConfig *_config;	// 16 = 0x10
    unsigned int _bitrate;	// 24 = 0x18
    int _bandwidth;	// 28 = 0x1c
    _Bool _shouldReset;	// 32 = 0x20
    _Bool _ramStadSRCEnabled;	// 33 = 0x21
}

@property(readonly, nonatomic) int bandwidth; // @synthesize bandwidth=_bandwidth;
@property(readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) VCAudioPayloadConfig *config; // @synthesize config=_config;
- (void)setRamStadSRCEnabled:(_Bool)arg1;	// IMP=0x00000000003d5bc1
- (id)description;	// IMP=0x00000000003d5b94
- (_Bool)getMagicCookie:(char *)arg1 withLength:(unsigned int *)arg2;	// IMP=0x00000000003d5b7a
- (void)setCurrentDTXEnable:(_Bool)arg1;	// IMP=0x00000000003d5b48
- (_Bool)setCodecModeRequest:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003d598e
- (_Bool)setBandwidth:(int)arg1;	// IMP=0x00000000003d58ef
- (_Bool)setEVSRFParams:(struct EVSRFParams *)arg1;	// IMP=0x00000000003d58ce
- (_Bool)setBitrate:(unsigned int)arg1;	// IMP=0x00000000003d5830
- (void)resetEncoderWithSampleBuffer:(char *)arg1 numBytes:(int)arg2;	// IMP=0x00000000003d57be
- (void)resetEncoder;	// IMP=0x00000000003d57b4
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4;	// IMP=0x00000000003d5390
- (_Bool)createEncoderWithInputFormat:(const struct tagVCAudioFrameFormat *)arg1;	// IMP=0x00000000003d4e9a
- (void)dealloc;	// IMP=0x00000000003d4e33
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000003d4d2e
- (_Bool)isDTXEmptyPacket:(unsigned int)arg1;	// IMP=0x00000000003d4cc7

@end
