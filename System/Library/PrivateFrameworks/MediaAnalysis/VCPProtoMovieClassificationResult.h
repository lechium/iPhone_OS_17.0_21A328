//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieClassificationResult : PBCodable
{
    NSMutableArray *_classifications;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (Class)classificationType;	// IMP=0x00100000000a9452
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000fb4e2
- (void).cxx_destruct;	// IMP=0x00000000000aa063
@property(retain, nonatomic) NSMutableArray *classifications; // @synthesize classifications=_classifications;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a9e8f
- (unsigned long long)hash;	// IMP=0x00000000000a9e42
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a9d8a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a9bb2
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a9ad8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a998a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a997d
- (id)dictionaryRepresentation;	// IMP=0x00000000000a9512
- (id)description;	// IMP=0x00000000000a9463
- (id)classificationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a9435
- (unsigned long long)classificationsCount;	// IMP=0x00000000000a9418
- (void)addClassification:(id)arg1;	// IMP=0x00000000000a93ae
- (void)clearClassifications;	// IMP=0x00000000000a9391
- (id)exportToLegacyDictionary;	// IMP=0x00000000000fb79e

@end

