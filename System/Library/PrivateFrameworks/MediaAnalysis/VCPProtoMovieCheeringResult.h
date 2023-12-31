//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieCheeringResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000c8050
- (void).cxx_destruct;	// IMP=0x0000000000202957
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002028a3
- (unsigned long long)hash;	// IMP=0x000000000020279b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002026f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000202667
- (void)copyTo:(id)arg1;	// IMP=0x0000000000202609
- (void)writeTo:(id)arg1;	// IMP=0x00000000002025a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000020259c
- (id)dictionaryRepresentation;	// IMP=0x00000000002022af
- (id)description;	// IMP=0x0000000000202200
- (id)exportToLegacyDictionary;	// IMP=0x00000000000c81d6

@end

