//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValueBoolPairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000410a6a
- (unsigned long long)hash;	// IMP=0x0000000000410a4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004109bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041081f
- (void)writeTo:(id)arg1;	// IMP=0x00000000004106e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041050e
- (id)jsonRepresentation;	// IMP=0x00000000004104ff
- (id)dictionaryRepresentation;	// IMP=0x0000000000410291
- (id)description;	// IMP=0x00000000004101e2

@end
