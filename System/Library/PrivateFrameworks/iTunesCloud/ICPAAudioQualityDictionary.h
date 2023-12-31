//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICPAAudioQualityDictionary : PBCodable
{
    long long _bitDepth;	// 8 = 0x8
    long long _bitRate;	// 16 = 0x10
    long long _sampleRate;	// 24 = 0x18
    NSString *_channelLayoutDescription;	// 32 = 0x20
    unsigned int _codec;	// 40 = 0x28
    _Bool _isSpatialized;	// 44 = 0x2c
    struct {
        unsigned int bitDepth:1;
        unsigned int bitRate:1;
        unsigned int sampleRate:1;
        unsigned int codec:1;
        unsigned int isSpatialized:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001e767
- (unsigned long long)hash;	// IMP=0x000000000001e68e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e524
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e418
- (void)writeTo:(id)arg1;	// IMP=0x000000000001e327
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001e31a
- (id)dictionaryRepresentation;	// IMP=0x000000000001e0f7
- (id)description;	// IMP=0x000000000001e048

@end

