//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDPlaceResponse, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
    GEOPDPlaceResponse *_response;	// 40 = 0x28
    NSString *_sourceURL;	// 48 = 0x30
    double _timestamp;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int has_timestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countryCode:1;
        unsigned int read_language:1;
        unsigned int read_response:1;
        unsigned int read_sourceURL:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00100000010aedf9
- (void).cxx_destruct;	// IMP=0x00000000010afc73
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010afc02
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010afa27
- (unsigned long long)hash;	// IMP=0x00000000010af89c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010af72b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010af4d9
- (void)copyTo:(id)arg1;	// IMP=0x00000000010af3a9
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000010af37a
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000010af282
- (void)writeTo:(id)arg1;	// IMP=0x00000000010af045
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010af038
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010aebb2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010aeba0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010ae8be
- (id)jsonRepresentation;	// IMP=0x00000000010ae7ae
- (id)dictionaryRepresentation;	// IMP=0x00000000010ae4a3
- (id)description;	// IMP=0x00000000010ae3f4
@property(retain, nonatomic) NSString *language;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(retain, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
@property(retain, nonatomic) GEOPDPlaceResponse *response;
@property(readonly, nonatomic) _Bool hasResponse;
- (id)initWithData:(id)arg1;	// IMP=0x00000000010ad644
- (id)init;	// IMP=0x00000000010ad5e8

@end

