//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementBar : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_resultRefinements;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e75fb6
- (unsigned long long)hash;	// IMP=0x0000000000e75f99
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e75f09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e75d4c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e75bed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e75bde
- (id)jsonRepresentation;	// IMP=0x0000000000e75881
- (id)dictionaryRepresentation;	// IMP=0x0000000000e754e5
- (id)description;	// IMP=0x0000000000e75436

@end
