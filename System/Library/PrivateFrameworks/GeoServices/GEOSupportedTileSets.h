//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSupportedTileSets : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_tileSets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000143d4e3
- (unsigned long long)hash;	// IMP=0x000000000143d4c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000143d436
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000143d279
- (void)writeTo:(id)arg1;	// IMP=0x000000000143d11a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000143ced4
- (id)jsonRepresentation;	// IMP=0x000000000143c2bb
- (id)dictionaryRepresentation;	// IMP=0x000000000143bf31
- (id)description;	// IMP=0x000000000143be82

@end
