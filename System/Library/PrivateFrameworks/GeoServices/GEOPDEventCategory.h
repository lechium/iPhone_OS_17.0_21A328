//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEventCategory : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_localizedCategorys;	// 16 = 0x10
    int _eventLookupCategory;	// 24 = 0x18
    struct {
        unsigned int has_eventLookupCategory:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000cab3eb
- (unsigned long long)hash;	// IMP=0x0000000000cab39e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cab2e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cab103
- (void)writeTo:(id)arg1;	// IMP=0x0000000000caaf7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000caaf70
- (id)jsonRepresentation;	// IMP=0x0000000000caab50
- (id)dictionaryRepresentation;	// IMP=0x0000000000caa724
- (id)description;	// IMP=0x0000000000caa675

@end

