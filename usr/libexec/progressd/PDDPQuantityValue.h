//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PDDPQuantityValue : PBCodable
{
    double _value;	// 8 = 0x8
    struct {
        unsigned int value:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) double value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d5d0d
- (unsigned long long)hash;	// IMP=0x00100000000d5c0f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d5b77
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d5b11
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d5ae9
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d5abc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d5aaf
- (id)dictionaryRepresentation;	// IMP=0x00100000000d588d
- (id)description;	// IMP=0x00100000000d57de
@property(nonatomic) _Bool hasValue;

@end

