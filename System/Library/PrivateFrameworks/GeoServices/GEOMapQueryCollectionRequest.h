//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOMapQueryCollectionRequest : PBRequest
{
    NSMutableArray *_requestElements;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000e147b7
+ (Class)requestElementsType;	// IMP=0x0010000000e137dd
- (void).cxx_destruct;	// IMP=0x0000000000e15b2a
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e159be
- (unsigned long long)hash;	// IMP=0x0000000000e15983
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e158ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e15706
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e15630
- (Class)responseClass;	// IMP=0x0000000000e1561f
- (unsigned int)requestTypeCode;	// IMP=0x0000000000e15614
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e15424
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000e1529d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e15167
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e14f7c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e147b1
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e1479f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e13b29
- (id)jsonRepresentation;	// IMP=0x0000000000e13b1a
- (id)dictionaryRepresentation;	// IMP=0x0000000000e1389d
- (id)description;	// IMP=0x0000000000e137ee
- (id)requestElementsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e137c0
- (unsigned long long)requestElementsCount;	// IMP=0x0000000000e137a3
- (void)addRequestElements:(id)arg1;	// IMP=0x0000000000e13739
- (void)clearRequestElements;	// IMP=0x0000000000e1371c
@property(retain, nonatomic) NSMutableArray *requestElements;

@end

