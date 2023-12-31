//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoBounds : PBCodable
{
    double _height;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _x0;	// 24 = 0x18
    double _y0;	// 32 = 0x20
}

+ (id)boundsWithCGRect:(struct CGRect)arg1;	// IMP=0x001000000008549e
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double y0; // @synthesize y0=_y0;
@property(nonatomic) double x0; // @synthesize x0=_x0;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000eae0c
- (unsigned long long)hash;	// IMP=0x00000000000eaa7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ea9b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea92f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ea8e5
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ea849
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ea83c
- (id)dictionaryRepresentation;	// IMP=0x00000000000ea467
- (id)description;	// IMP=0x00000000000ea3b8
- (struct CGRect)rectValue;	// IMP=0x000000000008550f

@end

