//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2MicrophoneSettingsU1 : PBCodable
{
    unsigned int _payloads;	// 8 = 0x8
    unsigned int _rtpSSRC;	// 12 = 0xc
    struct {
        unsigned int payloads:1;
        unsigned int rtpSSRC:1;
    } _has;	// 16 = 0x10
}

+ (int)payloadFromFlag:(int)arg1;	// IMP=0x00100000003b8f95
+ (int)flagFromPayload:(int)arg1;	// IMP=0x00100000003b8f4c
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003a4fd3
- (unsigned long long)hash;	// IMP=0x00000000003a4f8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a4f0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a4e91
- (void)copyTo:(id)arg1;	// IMP=0x00000000003a4e52
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a4de6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a4dd9
- (id)dictionaryRepresentation;	// IMP=0x00000000003a4ad6
- (id)description;	// IMP=0x00000000003a4a3c
@property(nonatomic) _Bool hasPayloads;
@property(nonatomic) unsigned int payloads; // @synthesize payloads=_payloads;
@property(nonatomic) _Bool hasRtpSSRC;
- (unsigned int)payloadBitmapWithAudioPayloads:(id)arg1;	// IMP=0x00000000003b8ffc
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x00000000003b8c8c
@property(readonly, nonatomic) NSSet *audioPayloads;
- (id)initWithSSRC:(unsigned int)arg1 audioPayloads:(id)arg2;	// IMP=0x00000000003b8a6c

@end
