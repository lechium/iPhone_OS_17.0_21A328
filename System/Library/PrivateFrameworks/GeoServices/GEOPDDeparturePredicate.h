//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDeparturePredicate : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDTimeRange _timeRange;	// 16 = 0x10
    unsigned int _numAdditionalDepartures;	// 28 = 0x1c
    struct {
        unsigned int has_timeRange:1;
        unsigned int has_numAdditionalDepartures:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c7c940
- (unsigned long long)hash;	// IMP=0x0000000000c7c8e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c7c80b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c7c764
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c7c668
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c7c65b
- (id)jsonRepresentation;	// IMP=0x0000000000c7bc30
- (id)dictionaryRepresentation;	// IMP=0x0000000000c7b9fa
- (id)description;	// IMP=0x0000000000c7b94b
- (id)initWithTraitsTransitModeFilter:(id)arg1;	// IMP=0x0000000001427caa

@end
