//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyDoubleValueDoublePair : PBCodable
{
    double _key;	// 8 = 0x8
    double _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x0000000000413f30
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000413e71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000413dec
- (void)writeTo:(id)arg1;	// IMP=0x0000000000413d75
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000413d68
- (id)jsonRepresentation;	// IMP=0x0000000000413b44
- (id)dictionaryRepresentation;	// IMP=0x0000000000413a32
- (id)description;	// IMP=0x0000000000413983

@end

