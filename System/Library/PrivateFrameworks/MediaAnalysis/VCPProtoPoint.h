//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoPoint : PBCodable
{
    double _x;	// 8 = 0x8
    double _y;	// 16 = 0x10
}

+ (id)pointWithPoint:(struct CGPoint)arg1;	// IMP=0x001000000026e38b
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000029a48f
- (unsigned long long)hash;	// IMP=0x000000000029a2bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029a225
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029a1bd
- (void)copyTo:(id)arg1;	// IMP=0x000000000029a195
- (void)writeTo:(id)arg1;	// IMP=0x000000000029a12e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029a121
- (id)dictionaryRepresentation;	// IMP=0x0000000000299e84
- (id)description;	// IMP=0x0000000000299dd5
- (struct CGPoint)pointValue;	// IMP=0x000000000026e3ea

@end

