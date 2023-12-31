//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValueBytesPair : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSData *_value;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    CDStruct_d2d52b7f _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000004185a5
- (unsigned long long)hash;	// IMP=0x000000000041854e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041847c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004182ef
- (void)writeTo:(id)arg1;	// IMP=0x000000000041815f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000418152
- (id)jsonRepresentation;	// IMP=0x0000000000417ee6
- (id)dictionaryRepresentation;	// IMP=0x0000000000417c6d
- (id)description;	// IMP=0x0000000000417bbe
- (id)initWithData:(id)arg1;	// IMP=0x0000000000417779
- (id)init;	// IMP=0x000000000041771d

@end

