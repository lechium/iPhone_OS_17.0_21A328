//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStyleAttributes, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMiniBrowseCategory : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOStyleAttributes *_styleAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000cea88a
- (unsigned long long)hash;	// IMP=0x0000000000cea86d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cea7dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cea752
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cea6f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cea6e8
- (id)jsonRepresentation;	// IMP=0x0000000000cea5d8
- (id)dictionaryRepresentation;	// IMP=0x0000000000cea3e5
- (id)description;	// IMP=0x0000000000cea336

@end

