//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildPlace : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDMapsIdentifier *_mapsId;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mapsId:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000bf1e08
- (unsigned long long)hash;	// IMP=0x0000000000bf1db1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bf1cdf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bf1b31
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bf198a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bf197b
- (id)jsonRepresentation;	// IMP=0x0000000000bf169a
- (id)dictionaryRepresentation;	// IMP=0x0000000000bf1461
- (id)description;	// IMP=0x0000000000bf13b2
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bf0b40
- (id)init;	// IMP=0x0000000000bf0ae4

@end
