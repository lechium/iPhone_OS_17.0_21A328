//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMoviePetsFaceResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002bf299
- (void).cxx_destruct;	// IMP=0x0000000000071b7b
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000071a6c
- (unsigned long long)hash;	// IMP=0x000000000007193b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000071869
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000717b9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000071736
- (void)writeTo:(id)arg1;	// IMP=0x00000000000716be
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000716b1
- (id)dictionaryRepresentation;	// IMP=0x0000000000071334
- (id)description;	// IMP=0x0000000000071285
- (id)exportToLegacyDictionary;	// IMP=0x00000000002bf517

@end
