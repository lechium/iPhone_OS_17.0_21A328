//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryGeoMetadata : PBCodable
{
    NSMutableArray *_namedFeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b2c9cd
- (unsigned long long)hash;	// IMP=0x0000000000b2c9b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b2c920
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b2c782
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b2c64c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b2c63d
- (id)jsonRepresentation;	// IMP=0x0000000000b2c448
- (id)dictionaryRepresentation;	// IMP=0x0000000000b2c1c8
- (id)description;	// IMP=0x0000000000b2c119

@end

