//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQueryUnderstandingTaxonomySearchParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categoryBranchs;	// 24 = 0x18
    NSString *_searchString;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _taxonomyType;	// 52 = 0x34
    struct {
        unsigned int has_taxonomyType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categoryBranchs:1;
        unsigned int read_searchString:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000650358
- (unsigned long long)hash;	// IMP=0x00000000006502ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006501cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000064feb4
- (void)writeTo:(id)arg1;	// IMP=0x000000000064fbe3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000064fbd4
- (id)jsonRepresentation;	// IMP=0x000000000064fac4
- (id)dictionaryRepresentation;	// IMP=0x000000000064f771
- (id)description;	// IMP=0x000000000064f6c2
- (id)initWithData:(id)arg1;	// IMP=0x000000000064ee47
- (id)init;	// IMP=0x000000000064edeb

@end

