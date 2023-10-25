//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface PDDPEESyncRequest : PBRequest
{
    NSMutableArray *_requestZones;	// 8 = 0x8
}

+ (Class)requestZonesType;	// IMP=0x00200000000de750
- (void).cxx_destruct;	// IMP=0x00200000000df1d9
@property(retain, nonatomic) NSMutableArray *requestZones; // @synthesize requestZones=_requestZones;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000df07b
- (unsigned long long)hash;	// IMP=0x00100000000df05e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000defce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000dee0a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ded45
- (Class)responseClass;	// IMP=0x00100000000ded34
- (unsigned int)requestTypeCode;	// IMP=0x00100000000ded29
- (void)writeTo:(id)arg1;	// IMP=0x00100000000debf3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000dea40
- (id)dictionaryRepresentation;	// IMP=0x00100000000de810
- (id)description;	// IMP=0x00100000000de761
- (id)requestZonesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000de733
- (unsigned long long)requestZonesCount;	// IMP=0x00100000000de716
- (void)addRequestZones:(id)arg1;	// IMP=0x00100000000de6ac
- (void)clearRequestZones;	// IMP=0x00100000000de68f

@end
