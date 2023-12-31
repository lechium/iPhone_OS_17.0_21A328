//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSpan, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchToken : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_alternateForms;	// 16 = 0x10
    NSString *_processedValue;	// 24 = 0x18
    NSString *_rawValue;	// 32 = 0x20
    GEOPDSearchTokenSpan *_tokenSpan;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _position;	// 60 = 0x3c
    struct {
        unsigned int has_position:1;
        unsigned int read_alternateForms:1;
        unsigned int read_processedValue:1;
        unsigned int read_rawValue:1;
        unsigned int read_tokenSpan:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000011d262f
- (unsigned long long)hash;	// IMP=0x00000000011d256b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011d2416
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011d20b2
- (void)writeTo:(id)arg1;	// IMP=0x00000000011d1db6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011d1da7
- (id)jsonRepresentation;	// IMP=0x00000000011d16ab
- (id)dictionaryRepresentation;	// IMP=0x00000000011d10aa
- (id)description;	// IMP=0x00000000011d0ffb
- (id)initWithData:(id)arg1;	// IMP=0x00000000011d060c
- (id)init;	// IMP=0x00000000011d05b0

@end

