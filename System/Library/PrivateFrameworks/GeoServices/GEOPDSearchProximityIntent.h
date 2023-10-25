//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchProximityIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    GEOPDSearchTokenSet *_tokenSet;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_name:1;
        unsigned int read_tokenSet:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000b21780
- (unsigned long long)hash;	// IMP=0x0000000000b21729
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b21657
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b214c8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b2133a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b2132b
- (id)jsonRepresentation;	// IMP=0x0000000000b2131c
- (id)dictionaryRepresentation;	// IMP=0x0000000000b210a7
- (id)description;	// IMP=0x0000000000b20ff8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b20b07
- (id)init;	// IMP=0x0000000000b20aab

@end
