//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocalizedString, GEOPDPhoto, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTooltip : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOLocalizedString *_actionLink;	// 24 = 0x18
    GEOPDPhoto *_photo;	// 32 = 0x20
    GEOLocalizedString *_subtitle;	// 40 = 0x28
    GEOLocalizedString *_title;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_actionLink:1;
        unsigned int read_photo:1;
        unsigned int read_subtitle:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (id)tooltipFromPlaceData:(id)arg1;	// IMP=0x0010000000aa072e
- (void).cxx_destruct;	// IMP=0x0000000000d7ac59
- (unsigned long long)hash;	// IMP=0x0000000000d7abcb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d7aaa5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d7a898
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d7a61e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d7a60f
- (id)jsonRepresentation;	// IMP=0x0000000000d7a437
- (id)dictionaryRepresentation;	// IMP=0x0000000000d7a0e3
- (id)description;	// IMP=0x0000000000d7a034
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d7930e
- (id)init;	// IMP=0x0000000000d792b2

@end
