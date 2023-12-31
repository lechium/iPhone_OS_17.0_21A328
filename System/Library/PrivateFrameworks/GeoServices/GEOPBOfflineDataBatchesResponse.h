//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataBatchesResponse : PBCodable
{
    NSMutableArray *_layerBatchs;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00100000014cd2b5
+ (Class)layerBatchType;	// IMP=0x00100000014cc485
- (void).cxx_destruct;	// IMP=0x00000000014ce017
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014cdeab
- (unsigned long long)hash;	// IMP=0x00000000014cde70
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014cddb7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014cdbf3
- (void)copyTo:(id)arg1;	// IMP=0x00000000014cdb1d
- (void)writeTo:(id)arg1;	// IMP=0x00000000014cd9e7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014cd7fc
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014cd076
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014cd064
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014cc7e3
- (id)jsonRepresentation;	// IMP=0x00000000014cc7d4
- (id)dictionaryRepresentation;	// IMP=0x00000000014cc545
- (id)description;	// IMP=0x00000000014cc496
- (id)layerBatchAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014cc468
- (unsigned long long)layerBatchsCount;	// IMP=0x00000000014cc44b
- (void)addLayerBatch:(id)arg1;	// IMP=0x00000000014cc3e1
- (void)clearLayerBatchs;	// IMP=0x00000000014cc3c4
@property(retain, nonatomic) NSMutableArray *layerBatchs;

@end

