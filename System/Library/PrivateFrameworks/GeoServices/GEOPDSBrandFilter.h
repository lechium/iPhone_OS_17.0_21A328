//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSBrandFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _brandMuid;	// 16 = 0x10
    struct {
        unsigned int has_brandMuid:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006ca46f
- (unsigned long long)hash;	// IMP=0x00000000006ca3fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006ca367
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006ca2e6
- (void)writeTo:(id)arg1;	// IMP=0x00000000006ca282
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006ca275
- (id)jsonRepresentation;	// IMP=0x00000000006c9f14
- (id)dictionaryRepresentation;	// IMP=0x00000000006c9d40
- (id)description;	// IMP=0x00000000006c9c91

@end
