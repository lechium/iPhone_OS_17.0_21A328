//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueContainer, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureVenue : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_buildings;	// 24 = 0x18
    NSMutableArray *_levels;	// 32 = 0x20
    GEOPDVenueContainer *_venueContainer;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_buildings:1;
        unsigned int read_levels:1;
        unsigned int read_venueContainer:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000425b9b
- (unsigned long long)hash;	// IMP=0x0000000000425b24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000425a26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000042540e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000424f08
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000424ef9
- (id)jsonRepresentation;	// IMP=0x0000000000424b7a
- (id)dictionaryRepresentation;	// IMP=0x00000000004244cb
- (id)description;	// IMP=0x000000000042441c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000423956
- (id)init;	// IMP=0x00000000004238fa

@end

