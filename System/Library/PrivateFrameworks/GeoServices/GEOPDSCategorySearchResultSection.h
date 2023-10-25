//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSCategorySearchResultSection : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_sectionHeaderDisplayName;	// 24 = 0x18
    NSString *_sectionSubHeaderDisplayNameWithEnrichment;	// 32 = 0x20
    NSString *_sectionSubHeaderDisplayName;	// 40 = 0x28
    GEOStyleAttributes *_styleAttributes;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _categorySearchResultSectionCellType;	// 68 = 0x44
    struct {
        unsigned int has_categorySearchResultSectionCellType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_sectionHeaderDisplayName:1;
        unsigned int read_sectionSubHeaderDisplayNameWithEnrichment:1;
        unsigned int read_sectionSubHeaderDisplayName:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000006ccfbc
- (unsigned long long)hash;	// IMP=0x00000000006ccda5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006ccc50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006cca02
- (void)writeTo:(id)arg1;	// IMP=0x00000000006cc7f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006cc7e8
- (id)jsonRepresentation;	// IMP=0x00000000006cbe8c
- (id)dictionaryRepresentation;	// IMP=0x00000000006cba6a
- (id)description;	// IMP=0x00000000006cb9bb
- (id)initWithData:(id)arg1;	// IMP=0x00000000006cac87
- (id)init;	// IMP=0x00000000006cac2b

@end
