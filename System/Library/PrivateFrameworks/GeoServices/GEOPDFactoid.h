//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDColor, GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoid : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDColor *_color;	// 24 = 0x18
    NSString *_icon;	// 32 = 0x20
    double _number;	// 40 = 0x28
    GEOPDMapsIdentifier *_placeId;	// 48 = 0x30
    NSMutableArray *_placeNames;	// 56 = 0x38
    NSString *_symbolColor;	// 64 = 0x40
    NSString *_text;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    int _entryType;	// 100 = 0x64
    int _unit;	// 104 = 0x68
    _Bool _canBeDisplayedInPlaceSummary;	// 108 = 0x6c
    struct {
        unsigned int has_number:1;
        unsigned int has_entryType:1;
        unsigned int has_unit:1;
        unsigned int has_canBeDisplayedInPlaceSummary:1;
        unsigned int read_unknownFields:1;
        unsigned int read_color:1;
        unsigned int read_icon:1;
        unsigned int read_placeId:1;
        unsigned int read_placeNames:1;
        unsigned int read_symbolColor:1;
        unsigned int read_text:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

+ (id)factoidsForPlaceData:(id)arg1;	// IMP=0x0010000000a9ca54
+ (_Bool)factoidPairAvailableForPlaceData:(id)arg1;	// IMP=0x0010000000a9c958
- (void).cxx_destruct;	// IMP=0x0000000000cb56cc
- (unsigned long long)hash;	// IMP=0x0000000000cb5467
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb51e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb4d6d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb498f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb4980
- (id)jsonRepresentation;	// IMP=0x0000000000cb3ae5
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb32bc
- (id)description;	// IMP=0x0000000000cb320d
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cb1b2a
- (id)init;	// IMP=0x0000000000cb1ace
- (id)bestLocalizedPlaceName;	// IMP=0x0000000000a9cbaa

@end
