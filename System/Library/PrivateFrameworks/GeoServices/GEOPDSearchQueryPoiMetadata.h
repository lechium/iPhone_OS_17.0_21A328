//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryPoiMetadata : PBCodable
{
    NSMutableArray *_namedFeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b52f50
- (unsigned long long)hash;	// IMP=0x0000000000b52f33
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b52ea3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b52d05
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b52bcf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b52bc0
- (id)jsonRepresentation;	// IMP=0x0000000000b52bb1
- (id)dictionaryRepresentation;	// IMP=0x0000000000b52931
- (id)description;	// IMP=0x0000000000b52882

@end

