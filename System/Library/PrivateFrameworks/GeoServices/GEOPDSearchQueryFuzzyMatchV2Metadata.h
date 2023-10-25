//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryFuzzyMatchV2Metadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _fuzzyV2Scores;	// 16 = 0x10
    CDStruct_95bda58d _rewriteTypes;	// 40 = 0x28
    NSMutableArray *_rewrittenQueries;	// 64 = 0x40
    GEOPDSearchTokenSet *_rewrittenQueryTokens;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    _Bool _pruneFuzzyV2Results;	// 92 = 0x5c
    _Bool _useFuzzyV1;	// 93 = 0x5d
    struct {
        unsigned int has_pruneFuzzyV2Results:1;
        unsigned int has_useFuzzyV1:1;
        unsigned int read_fuzzyV2Scores:1;
        unsigned int read_rewriteTypes:1;
        unsigned int read_rewrittenQueries:1;
        unsigned int read_rewrittenQueryTokens:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000b2c063
- (unsigned long long)hash;	// IMP=0x0000000000b2bf93
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b2be18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b2babd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b2b72b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b2b71c
- (id)jsonRepresentation;	// IMP=0x0000000000b2b49e
- (id)dictionaryRepresentation;	// IMP=0x0000000000b2b0b9
- (id)description;	// IMP=0x0000000000b2b00a
- (void)dealloc;	// IMP=0x0000000000b2a411
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b2a3b5
- (id)init;	// IMP=0x0000000000b2a359

@end
