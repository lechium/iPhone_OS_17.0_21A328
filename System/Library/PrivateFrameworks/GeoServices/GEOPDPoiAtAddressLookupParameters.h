//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiAtAddressLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_components;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000063b8d7
- (unsigned long long)hash;	// IMP=0x000000000063b8ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063b82a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063b66d
- (void)writeTo:(id)arg1;	// IMP=0x000000000063b50e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063b4ff
- (id)jsonRepresentation;	// IMP=0x000000000063b3ef
- (id)dictionaryRepresentation;	// IMP=0x000000000063b065
- (id)description;	// IMP=0x000000000063afb6

@end

