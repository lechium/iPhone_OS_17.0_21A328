//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEONamedField : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSMutableArray *_values;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_name:1;
        unsigned int read_values:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000102b4ef
- (unsigned long long)hash;	// IMP=0x000000000102b2d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000102b207
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000102af26
- (void)writeTo:(id)arg1;	// IMP=0x000000000102ac7b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000102ac6c
- (id)jsonRepresentation;	// IMP=0x0000000001029b60
- (id)dictionaryRepresentation;	// IMP=0x00000000010296da
- (id)description;	// IMP=0x000000000102962b
- (id)initWithData:(id)arg1;	// IMP=0x0000000001028cf4
- (id)init;	// IMP=0x0000000001028c98

@end
