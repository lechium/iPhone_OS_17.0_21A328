//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyDoubleValue64Pair : PBCodable
{
    double _key;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x0000000000412f48
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000412e8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000412e0b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000412d96
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000412d89
- (id)jsonRepresentation;	// IMP=0x0000000000412b28
- (id)dictionaryRepresentation;	// IMP=0x0000000000412a18
- (id)description;	// IMP=0x0000000000412969

@end

