//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardEnrichmentResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000063a804
- (unsigned long long)hash;	// IMP=0x000000000063a7fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063a7b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063a75c
- (void)writeTo:(id)arg1;	// IMP=0x000000000063a73f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063a732
- (id)jsonRepresentation;	// IMP=0x000000000063a622
- (id)dictionaryRepresentation;	// IMP=0x000000000063a4b8
- (id)description;	// IMP=0x000000000063a409

@end

