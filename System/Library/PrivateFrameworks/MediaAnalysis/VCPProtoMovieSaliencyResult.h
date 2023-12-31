//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000d13d9
- (void).cxx_destruct;	// IMP=0x000000000008c340
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008c231
- (unsigned long long)hash;	// IMP=0x000000000008c100
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008c02e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008bf7e
- (void)copyTo:(id)arg1;	// IMP=0x000000000008befb
- (void)writeTo:(id)arg1;	// IMP=0x000000000008be83
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008be76
- (id)dictionaryRepresentation;	// IMP=0x000000000008baf9
- (id)description;	// IMP=0x000000000008ba4a
- (id)exportToLegacyDictionary;	// IMP=0x00000000000d1657

@end

