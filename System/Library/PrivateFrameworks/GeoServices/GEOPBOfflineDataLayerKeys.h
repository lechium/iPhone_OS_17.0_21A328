//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataLayerKeys : PBCodable
{
    struct GEOPBOfflineDataLayerVersion _layerVersion;	// 8 = 0x8
    NSMutableArray *_keyValueReferences;	// 32 = 0x20
    CDStruct_4b81633f _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000014d33fd
- (unsigned long long)hash;	// IMP=0x00000000014d33aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014d32c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014d30f5
- (void)writeTo:(id)arg1;	// IMP=0x00000000014d2f77
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014d2d3e
- (id)jsonRepresentation;	// IMP=0x00000000014d2d2f
- (id)dictionaryRepresentation;	// IMP=0x00000000014d2a50
- (id)description;	// IMP=0x00000000014d29a1

@end

