//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoidRibbonItem : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _factoidItemIndex;	// 16 = 0x10
    struct {
        unsigned int has_factoidItemIndex:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000cb7fac
- (unsigned long long)hash;	// IMP=0x0000000000cb7f82
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb7ef0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb7e70
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb7e0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb7dff
- (id)jsonRepresentation;	// IMP=0x0000000000cb7a9f
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb78cb
- (id)description;	// IMP=0x0000000000cb781c

@end
