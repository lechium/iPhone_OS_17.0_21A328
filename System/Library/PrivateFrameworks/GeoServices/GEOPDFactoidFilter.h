//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoidFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _canSupportStructuredData;	// 16 = 0x10
    struct {
        unsigned int has_canSupportStructuredData:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000cb626b
- (unsigned long long)hash;	// IMP=0x0000000000cb6240
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb619e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb611e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb60b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb60ac
- (id)jsonRepresentation;	// IMP=0x0000000000cb5f9c
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb5dc7
- (id)description;	// IMP=0x0000000000cb5d18

@end

