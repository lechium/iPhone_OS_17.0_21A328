//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsSearchHomeResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_mapsSearchHomeSections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005a0976
- (unsigned long long)hash;	// IMP=0x00000000005a0959
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a08c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a070c
- (void)writeTo:(id)arg1;	// IMP=0x00000000005a0166
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005a0157
- (id)jsonRepresentation;	// IMP=0x000000000059fc53
- (id)dictionaryRepresentation;	// IMP=0x000000000059f8b7
- (id)description;	// IMP=0x000000000059f808

@end

