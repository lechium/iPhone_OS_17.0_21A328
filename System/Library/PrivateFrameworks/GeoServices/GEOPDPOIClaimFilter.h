//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPOIClaimFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cfb86c
- (unsigned long long)hash;	// IMP=0x0000000000cfb864
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cfb821
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cfb7c4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cfb7a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cfb79a
- (id)jsonRepresentation;	// IMP=0x0000000000cfb68a
- (id)dictionaryRepresentation;	// IMP=0x0000000000cfb520
- (id)description;	// IMP=0x0000000000cfb471

@end

