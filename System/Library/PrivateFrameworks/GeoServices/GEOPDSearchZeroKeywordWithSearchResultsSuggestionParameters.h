//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _blurredHourOfDay;	// 16 = 0x10
    unsigned int _dayOfWeek;	// 20 = 0x14
    unsigned int _maxCategories;	// 24 = 0x18
    unsigned int _maxResultsPerCategory;	// 28 = 0x1c
    struct {
        unsigned int has_blurredHourOfDay:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_maxCategories:1;
        unsigned int has_maxResultsPerCategory:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000067573c
- (unsigned long long)hash;	// IMP=0x00000000006756bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006755c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006754f3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000675425
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000675418
- (id)jsonRepresentation;	// IMP=0x0000000000675308
- (id)dictionaryRepresentation;	// IMP=0x0000000000674ff2
- (id)description;	// IMP=0x0000000000674f43

@end

