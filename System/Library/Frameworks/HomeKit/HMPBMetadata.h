//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMPBMetadata : PBCodable
{
    NSMutableArray *_hapCategories;	// 8 = 0x8
    NSMutableArray *_hapCharacteristics;	// 16 = 0x10
    NSMutableArray *_hapServices;	// 24 = 0x18
    int _version;	// 32 = 0x20
    struct {
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

+ (Class)hapCategoriesType;	// IMP=0x0010000000271e74
+ (Class)hapServicesType;	// IMP=0x0010000000271e63
+ (Class)hapCharacteristicsType;	// IMP=0x0010000000271e52
- (void).cxx_destruct;	// IMP=0x0000000000271e10
@property(retain, nonatomic) NSMutableArray *hapCategories; // @synthesize hapCategories=_hapCategories;
@property(retain, nonatomic) NSMutableArray *hapServices; // @synthesize hapServices=_hapServices;
@property(retain, nonatomic) NSMutableArray *hapCharacteristics; // @synthesize hapCharacteristics=_hapCharacteristics;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000271a40
- (unsigned long long)hash;	// IMP=0x00000000002719a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000271893
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000271430
- (void)copyTo:(id)arg1;	// IMP=0x0000000000271232
- (void)writeTo:(id)arg1;	// IMP=0x0000000000270f1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000270c0f
- (id)dictionaryRepresentation;	// IMP=0x0000000000270609
- (id)description;	// IMP=0x000000000027055a
- (id)hapCategoriesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000027053d
- (unsigned long long)hapCategoriesCount;	// IMP=0x0000000000270520
- (void)addHapCategories:(id)arg1;	// IMP=0x00000000002704b6
- (void)clearHapCategories;	// IMP=0x0000000000270499
- (id)hapServicesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000027047c
- (unsigned long long)hapServicesCount;	// IMP=0x000000000027045f
- (void)addHapServices:(id)arg1;	// IMP=0x00000000002703f5
- (void)clearHapServices;	// IMP=0x00000000002703d8
- (id)hapCharacteristicsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002703bb
- (unsigned long long)hapCharacteristicsCount;	// IMP=0x000000000027039e
- (void)addHapCharacteristics:(id)arg1;	// IMP=0x0000000000270334
- (void)clearHapCharacteristics;	// IMP=0x0000000000270317
@property(nonatomic) _Bool hasVersion;

@end

