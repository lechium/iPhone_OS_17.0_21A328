//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface OTSupportOctagonMessage : PBCodable
{
    int _supported;	// 8 = 0x8
    CDStruct_495da94c _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000f8b1
- (unsigned long long)hash;	// IMP=0x000000000000f886
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f7f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f792
- (void)copyTo:(id)arg1;	// IMP=0x000000000000f76e
- (void)writeTo:(id)arg1;	// IMP=0x000000000000f743
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000f736
- (id)dictionaryRepresentation;	// IMP=0x000000000000f68a
- (id)description;	// IMP=0x000000000000f5db
- (int)StringAsSupported:(id)arg1;	// IMP=0x000000000000f544
- (id)supportedAsString:(int)arg1;	// IMP=0x000000000000f4fc
@property(nonatomic) _Bool hasSupported;
@property(nonatomic) int supported; // @synthesize supported=_supported;

@end

