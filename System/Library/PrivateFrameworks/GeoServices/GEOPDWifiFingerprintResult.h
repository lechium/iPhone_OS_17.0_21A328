//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprintResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000068acd7
- (unsigned long long)hash;	// IMP=0x000000000068accf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068ac8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000068ac2f
- (void)writeTo:(id)arg1;	// IMP=0x000000000068ac12
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000068ac05
- (id)jsonRepresentation;	// IMP=0x000000000068aaf5
- (id)dictionaryRepresentation;	// IMP=0x000000000068a98b
- (id)description;	// IMP=0x000000000068a8dc

@end

