//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSImplicitQueryIntroTipForHiking, GEOPDSImplicitQuerySearchAroundPOI, GEOPDSImplicitQuerySearchForEVCharger, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSImplicitQueryCategoryFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDSImplicitQueryIntroTipForHiking *_implicitQueryIntroTipForHiking;	// 24 = 0x18
    GEOPDSImplicitQuerySearchAroundPOI *_implicitQuerySearchAroundPoi;	// 32 = 0x20
    GEOPDSImplicitQuerySearchForEVCharger *_implicitQuerySearchForEvcharger;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _implicitQueryType;	// 60 = 0x3c
    struct {
        unsigned int has_implicitQueryType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_implicitQueryIntroTipForHiking:1;
        unsigned int read_implicitQuerySearchAroundPoi:1;
        unsigned int read_implicitQuerySearchForEvcharger:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000006cf6ed
- (unsigned long long)hash;	// IMP=0x00000000006cf269
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006cf139
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006cef2c
- (void)writeTo:(id)arg1;	// IMP=0x00000000006cec5e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006cec4f
- (id)jsonRepresentation;	// IMP=0x00000000006ce113
- (id)dictionaryRepresentation;	// IMP=0x00000000006cdcdf
- (id)description;	// IMP=0x00000000006cdc30
- (id)initWithData:(id)arg1;	// IMP=0x00000000006cd08d
- (id)init;	// IMP=0x00000000006cd031

@end

