//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface PDDPEESearchRequest : PBRequest
{
    NSMutableArray *_searchRequestZones;	// 8 = 0x8
}

+ (Class)searchRequestZonesType;	// IMP=0x00200000001988a7
- (void).cxx_destruct;	// IMP=0x0020000000199330
@property(retain, nonatomic) NSMutableArray *searchRequestZones; // @synthesize searchRequestZones=_searchRequestZones;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001991d2
- (unsigned long long)hash;	// IMP=0x00100000001991b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000199125
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000198f61
- (void)copyTo:(id)arg1;	// IMP=0x0010000000198e9c
- (Class)responseClass;	// IMP=0x0010000000198e8b
- (unsigned int)requestTypeCode;	// IMP=0x0010000000198e80
- (void)writeTo:(id)arg1;	// IMP=0x0010000000198d4a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000198b97
- (id)dictionaryRepresentation;	// IMP=0x0010000000198967
- (id)description;	// IMP=0x00100000001988b8
- (id)searchRequestZonesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000019888a
- (unsigned long long)searchRequestZonesCount;	// IMP=0x001000000019886d
- (void)addSearchRequestZones:(id)arg1;	// IMP=0x0010000000198803
- (void)clearSearchRequestZones;	// IMP=0x00100000001987e6

@end

