//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, PBUnknownFields;
@protocol GEOSurchargeType;

__attribute__((visibility("hidden")))
@interface GEORequestOptions : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_requestOptions;	// 16 = 0x10
    int _optionUsed;	// 24 = 0x18
    struct {
        unsigned int has_optionUsed:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000095b948
- (unsigned long long)hash;	// IMP=0x000000000095b624
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000095b56a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000095b38f
- (void)writeTo:(id)arg1;	// IMP=0x000000000095b20b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000095b1fc
- (id)jsonRepresentation;	// IMP=0x000000000095a8d7
- (id)dictionaryRepresentation;	// IMP=0x000000000095a4cb
- (id)description;	// IMP=0x000000000095a41c
@property(readonly, nonatomic) id <GEOSurchargeType> selectedSurchargeType;
@property(readonly, nonatomic) unsigned long long selectedSurchargeTypeIndex;
@property(readonly, nonatomic) NSArray *surchargeTypes;

@end

