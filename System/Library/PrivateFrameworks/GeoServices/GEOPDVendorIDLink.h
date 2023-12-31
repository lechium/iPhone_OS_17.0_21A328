//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorIDLink : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _reservationTypes;	// 24 = 0x18
    NSString *_externalItemId;	// 48 = 0x30
    NSString *_vendorId;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_reservationTypes:1;
        unsigned int read_externalItemId:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000da59a6
- (unsigned long long)hash;	// IMP=0x0000000000da593a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000da584b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000da568a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000da54ae
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000da549f
- (id)jsonRepresentation;	// IMP=0x0000000000da52c7
- (id)dictionaryRepresentation;	// IMP=0x0000000000da4fb3
- (id)description;	// IMP=0x0000000000da4f04
- (void)dealloc;	// IMP=0x0000000000da4432
- (id)initWithData:(id)arg1;	// IMP=0x0000000000da43d6
- (id)init;	// IMP=0x0000000000da437a

@end

