//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOShortTrafficSummary : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOFormattedString *_detail;	// 24 = 0x18
    NSMutableArray *_titles;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_detail:1;
        unsigned int read_titles:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000001530b5a
- (unsigned long long)hash;	// IMP=0x0000000001530b03
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001530a31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000153073f
- (void)writeTo:(id)arg1;	// IMP=0x0000000001530493
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001530484
- (id)jsonRepresentation;	// IMP=0x0000000001530374
- (id)dictionaryRepresentation;	// IMP=0x000000000152febb
- (id)description;	// IMP=0x000000000152fe0c
- (id)initWithData:(id)arg1;	// IMP=0x000000000152f417
- (id)init;	// IMP=0x000000000152f3bb

@end

