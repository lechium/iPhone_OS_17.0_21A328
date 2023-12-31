//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraStreamConfigure : PBCodable
{
    int _audioCodec;	// 8 = 0x8
    int _cryptoSuite;	// 12 = 0xc
    unsigned int _framerate;	// 16 = 0x10
    int _resolution;	// 20 = 0x14
    int _sampleRate;	// 24 = 0x18
    struct {
        unsigned int audioCodec:1;
        unsigned int cryptoSuite:1;
        unsigned int framerate:1;
        unsigned int resolution:1;
        unsigned int sampleRate:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000063d769
- (unsigned long long)hash;	// IMP=0x000000000063d6c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063d5ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063d4e6
- (void)copyTo:(id)arg1;	// IMP=0x000000000063d441
- (void)writeTo:(id)arg1;	// IMP=0x000000000063d36e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063d361
- (id)dictionaryRepresentation;	// IMP=0x000000000063d0e4
- (id)description;	// IMP=0x000000000063d035
- (int)StringAsCryptoSuite:(id)arg1;	// IMP=0x000000000063cf9e
- (id)cryptoSuiteAsString:(int)arg1;	// IMP=0x000000000063cf56
@property(nonatomic) _Bool hasCryptoSuite;
@property(nonatomic) int cryptoSuite; // @synthesize cryptoSuite=_cryptoSuite;
- (int)StringAsSampleRate:(id)arg1;	// IMP=0x000000000063ce83
- (id)sampleRateAsString:(int)arg1;	// IMP=0x000000000063ce2d
@property(nonatomic) _Bool hasSampleRate;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (int)StringAsAudioCodec:(id)arg1;	// IMP=0x000000000063cd54
- (id)audioCodecAsString:(int)arg1;	// IMP=0x000000000063ccfe
@property(nonatomic) _Bool hasAudioCodec;
@property(nonatomic) int audioCodec; // @synthesize audioCodec=_audioCodec;
@property(nonatomic) _Bool hasFramerate;
- (int)StringAsResolution:(id)arg1;	// IMP=0x000000000063caa8
- (id)resolutionAsString:(int)arg1;	// IMP=0x000000000063ca5d
@property(nonatomic) _Bool hasResolution;
@property(nonatomic) int resolution; // @synthesize resolution=_resolution;

@end

