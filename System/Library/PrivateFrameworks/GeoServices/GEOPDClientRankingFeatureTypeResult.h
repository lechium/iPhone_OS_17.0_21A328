//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _resultFeature;	// 16 = 0x10
    struct {
        unsigned int has_resultFeature:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000006c1beb
- (unsigned long long)hash;	// IMP=0x00000000006c1bc0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006c1b2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006c1aae
- (void)writeTo:(id)arg1;	// IMP=0x00000000006c1a4a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006c1a3d
- (id)jsonRepresentation;	// IMP=0x00000000006c121f
- (id)dictionaryRepresentation;	// IMP=0x00000000006c1030
- (id)description;	// IMP=0x00000000006c0f81

@end

