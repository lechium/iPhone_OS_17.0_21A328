//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CPLRemappedBy : PBCodable
{
    NSMutableArray *_remappedBys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c707a
- (unsigned long long)hash;	// IMP=0x00100000000c7044
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c6fb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c6e16
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c6ce0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c6cd3
- (id)dictionaryRepresentation;	// IMP=0x00100000000c6900
- (id)description;	// IMP=0x00100000000c6851

@end

