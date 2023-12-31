//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOHours : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _days;	// 24 = 0x18
    NSMutableArray *_timeRanges;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000001020064
- (unsigned long long)hash;	// IMP=0x000000000102001e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000101ff5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000101fc82
- (void)writeTo:(id)arg1;	// IMP=0x000000000101f9be
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000101f9af
- (id)jsonRepresentation;	// IMP=0x000000000101f595
- (id)dictionaryRepresentation;	// IMP=0x000000000101f0f6
- (id)description;	// IMP=0x000000000101f047
- (void)dealloc;	// IMP=0x000000000101e69c
- (id)initWithData:(id)arg1;	// IMP=0x000000000101e640
- (id)init;	// IMP=0x000000000101e5e4
- (id)initWithPlaceDataHours:(id)arg1;	// IMP=0x0000000000a92e6e

@end

