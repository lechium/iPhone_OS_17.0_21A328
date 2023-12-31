//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _categorys;	// 24 = 0x18
    GEOLatLng *_center;	// 48 = 0x30
    NSMutableArray *_eventDateTimes;	// 56 = 0x38
    GEOPDMapsIdentifier *_eventId;	// 64 = 0x40
    GEOPDMapsIdentifier *_poiId;	// 72 = 0x48
    GEOTimezone *_timezone;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_poiId:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000d5e067
+ (Class)eventDateTimeType;	// IMP=0x0010000000d5ca6f
- (void).cxx_destruct;	// IMP=0x0000000000d5f551
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d5f356
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d5efb2
- (unsigned long long)hash;	// IMP=0x0000000000d5eeec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d5ed6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d5e9ba
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d5e7a1
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000d5e70d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d5e3c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d5e3b8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d5de0e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d5ddfc
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d5d57d
- (id)jsonRepresentation;	// IMP=0x0000000000d5d46d
- (id)dictionaryRepresentation;	// IMP=0x0000000000d5cdad
- (id)description;	// IMP=0x0000000000d5ccfe
@property(retain, nonatomic) GEOPDMapsIdentifier *poiId;
@property(readonly, nonatomic) _Bool hasPoiId;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d5ca3e
- (unsigned long long)eventDateTimesCount;	// IMP=0x0000000000d5ca12
- (void)addEventDateTime:(id)arg1;	// IMP=0x0000000000d5c95c
- (void)clearEventDateTimes;	// IMP=0x0000000000d5c934
@property(retain, nonatomic) NSMutableArray *eventDateTimes;
- (int)StringAsCategorys:(id)arg1;	// IMP=0x0000000000d5c618
- (id)categorysAsString:(int)arg1;	// IMP=0x0000000000d5c5cf
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000d5c5ad
- (int)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d5c4d8
- (void)addCategory:(int)arg1;	// IMP=0x0000000000d5c49f
- (void)clearCategorys;	// IMP=0x0000000000d5c483
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property(readonly, nonatomic) _Bool hasEventId;
- (void)dealloc;	// IMP=0x0000000000d5b3a0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d5b344
- (id)init;	// IMP=0x0000000000d5b2e8

@end

