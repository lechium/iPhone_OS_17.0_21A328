//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitVehiclePositionParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_62a50c50 _tripIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000068342f
- (unsigned long long)hash;	// IMP=0x000000000068341e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006833b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000683348
- (void)writeTo:(id)arg1;	// IMP=0x00000000006832d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006832c4
- (id)jsonRepresentation;	// IMP=0x00000000006831b4
- (id)dictionaryRepresentation;	// IMP=0x0000000000682ff7
- (id)description;	// IMP=0x0000000000682f48
- (void)dealloc;	// IMP=0x0000000000682f05

@end

