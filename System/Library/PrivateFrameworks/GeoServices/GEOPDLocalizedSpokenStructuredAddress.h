//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStructuredAddress, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    GEOStructuredAddress *_spokenStructuredAddress;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_language:1;
        unsigned int read_spokenStructuredAddress:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000cda914
- (unsigned long long)hash;	// IMP=0x0000000000cda8bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cda7eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cda63d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cda496
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cda487
- (id)jsonRepresentation;	// IMP=0x0000000000cda377
- (id)dictionaryRepresentation;	// IMP=0x0000000000cda08a
- (id)description;	// IMP=0x0000000000cd9fdb
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cd9880
- (id)init;	// IMP=0x0000000000cd9824

@end

