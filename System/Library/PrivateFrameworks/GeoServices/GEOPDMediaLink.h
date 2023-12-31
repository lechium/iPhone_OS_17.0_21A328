//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMediaLinkPositionMetaData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMediaLink : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_adamId;	// 24 = 0x18
    GEOPDMediaLinkPositionMetaData *_mediaLinkPositionMetaData;	// 32 = 0x20
    NSString *_subId;	// 40 = 0x28
    NSMutableArray *_thirdPartyLinks;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _mediaSubType;	// 68 = 0x44
    int _mediaType;	// 72 = 0x48
    struct {
        unsigned int has_mediaSubType:1;
        unsigned int has_mediaType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_adamId:1;
        unsigned int read_mediaLinkPositionMetaData:1;
        unsigned int read_subId:1;
        unsigned int read_thirdPartyLinks:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000ce52c4
- (unsigned long long)hash;	// IMP=0x0000000000ce51df
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce505e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ce4cc3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ce4989
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ce497a
- (id)jsonRepresentation;	// IMP=0x0000000000ce4082
- (id)dictionaryRepresentation;	// IMP=0x0000000000ce3aa3
- (id)description;	// IMP=0x0000000000ce39f4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ce297a
- (id)init;	// IMP=0x0000000000ce291e

@end

