//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitScheduleLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000682ef2
- (unsigned long long)hash;	// IMP=0x0000000000682eea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000682ea7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000682e4a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000682e2d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000682e20
- (id)jsonRepresentation;	// IMP=0x0000000000682d10
- (id)dictionaryRepresentation;	// IMP=0x0000000000682ba6
- (id)description;	// IMP=0x0000000000682af7

@end

