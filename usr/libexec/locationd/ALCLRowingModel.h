//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLRowingModel : PBCodable
{
    float _strokeAmp;	// 8 = 0x8
    float _strokeFrequency;	// 12 = 0xc
    float _strokePower;	// 16 = 0x10
    struct {
        unsigned int strokeAmp:1;
        unsigned int strokeFrequency:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) float strokeFrequency; // @synthesize strokeFrequency=_strokeFrequency;
@property(nonatomic) float strokeAmp; // @synthesize strokeAmp=_strokeAmp;
@property(nonatomic) float strokePower; // @synthesize strokePower=_strokePower;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000597e77
- (unsigned long long)hash;	// IMP=0x0010000000597bb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000597b18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000597a82
- (void)copyTo:(id)arg1;	// IMP=0x0010000000597a2a
- (void)writeTo:(id)arg1;	// IMP=0x00100000005979a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000597994
- (id)dictionaryRepresentation;	// IMP=0x0010000000597674
- (id)description;	// IMP=0x00100000005975fd
@property(nonatomic) _Bool hasStrokeFrequency;
@property(nonatomic) _Bool hasStrokeAmp;

@end

