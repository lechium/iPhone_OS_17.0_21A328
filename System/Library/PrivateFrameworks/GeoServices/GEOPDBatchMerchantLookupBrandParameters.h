//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchMerchantLookupBrandParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_merchantLookupBrandParameters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000054c8a9
- (unsigned long long)hash;	// IMP=0x000000000054c88c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000054c7fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000054c63f
- (void)writeTo:(id)arg1;	// IMP=0x000000000054c4e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000054c4d1
- (id)jsonRepresentation;	// IMP=0x000000000054bfcd
- (id)dictionaryRepresentation;	// IMP=0x000000000054bc31
- (id)description;	// IMP=0x000000000054bb82

@end

