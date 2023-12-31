//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedPlace : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOLatLng *_center;	// 24 = 0x18
    unsigned long long _featureId;	// 32 = 0x20
    GEOPDMapsIdentifier *_mapsId;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    GEOStyleAttributes *_styleAttributes;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int has_featureId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_mapsId:1;
        unsigned int read_name:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000cd604a
- (unsigned long long)hash;	// IMP=0x0000000000cd5f92
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd5e3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd5bf6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd59eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd59dc
- (id)jsonRepresentation;	// IMP=0x0000000000cd54bf
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd5124
- (id)description;	// IMP=0x0000000000cd5075
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cd42e5
- (id)init;	// IMP=0x0000000000cd4289

@end

