//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionFlyover : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bed50d
- (unsigned long long)hash;	// IMP=0x0000000000bed505
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bed4c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bed465
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bed448
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bed43b
- (id)jsonRepresentation;	// IMP=0x0000000000bed32b
- (id)dictionaryRepresentation;	// IMP=0x0000000000bed1c1
- (id)description;	// IMP=0x0000000000bed112

@end

