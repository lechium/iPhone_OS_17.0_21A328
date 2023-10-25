//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTokenSet : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    NSMutableArray *_tokens;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_languageCode:1;
        unsigned int read_tokens:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000011d51a9
- (unsigned long long)hash;	// IMP=0x00000000011d5152
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011d5080
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011d4da4
- (void)writeTo:(id)arg1;	// IMP=0x00000000011d4b0b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011d4afc
- (id)jsonRepresentation;	// IMP=0x00000000011d3675
- (id)dictionaryRepresentation;	// IMP=0x00000000011d32f3
- (id)description;	// IMP=0x00000000011d3244
- (id)initWithData:(id)arg1;	// IMP=0x00000000011d2a67
- (id)init;	// IMP=0x00000000011d2a0b

@end
