//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieInterestingnessResult : PBCodable
{
    float _interestScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002dfba4
- (void).cxx_destruct;	// IMP=0x000000000014c391
@property(nonatomic) float interestScore; // @synthesize interestScore=_interestScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000014c2dd
- (unsigned long long)hash;	// IMP=0x000000000014c1d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014c12b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014c0a1
- (void)copyTo:(id)arg1;	// IMP=0x000000000014c043
- (void)writeTo:(id)arg1;	// IMP=0x000000000014bfe3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014bfd6
- (id)dictionaryRepresentation;	// IMP=0x000000000014bce9
- (id)description;	// IMP=0x000000000014bc3a
- (id)exportToLegacyDictionary;	// IMP=0x00000000002dfd2a

@end
