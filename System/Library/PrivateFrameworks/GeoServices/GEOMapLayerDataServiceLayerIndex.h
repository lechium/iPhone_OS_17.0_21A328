//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceLayerIndex : PBCodable
{
    NSData *_index;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001220d7f
- (unsigned long long)hash;	// IMP=0x0000000001220d62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001220cd2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001220c5a
- (void)writeTo:(id)arg1;	// IMP=0x0000000001220c36
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001220c29
- (id)jsonRepresentation;	// IMP=0x0000000001220c1a
- (id)dictionaryRepresentation;	// IMP=0x0000000001220b3d
- (id)description;	// IMP=0x0000000001220a8e

@end
