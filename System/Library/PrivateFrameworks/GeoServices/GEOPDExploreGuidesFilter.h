//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExploreGuidesFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cace44
- (unsigned long long)hash;	// IMP=0x0000000000cace3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cacdf9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cacd9c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cacd7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cacd72
- (id)jsonRepresentation;	// IMP=0x0000000000cacc62
- (id)dictionaryRepresentation;	// IMP=0x0000000000cacaf8
- (id)description;	// IMP=0x0000000000caca49

@end
