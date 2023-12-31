//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocation, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGroundViewLabelParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _locationId;	// 16 = 0x10
    GEOLocation *_location;	// 24 = 0x18
    struct {
        unsigned int has_locationId:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000057a6cf
- (unsigned long long)hash;	// IMP=0x000000000057a685
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000057a5c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000057a520
- (void)writeTo:(id)arg1;	// IMP=0x000000000057a3a3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000057a394
- (id)jsonRepresentation;	// IMP=0x0000000000579f6f
- (id)dictionaryRepresentation;	// IMP=0x0000000000579d24
- (id)description;	// IMP=0x0000000000579c75

@end

