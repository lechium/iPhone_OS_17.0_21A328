//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class FCCKPQuery, FCCKPRecordZoneIdentifier, FCCKPRequestedFields, NSData;

__attribute__((visibility("hidden")))
@interface FCCKPQueryRetrieveRequest : PBRequest
{
    NSData *_continuationMarker;	// 8 = 0x8
    unsigned int _limit;	// 16 = 0x10
    FCCKPQuery *_query;	// 24 = 0x18
    FCCKPRequestedFields *_requestedFields;	// 32 = 0x20
    FCCKPRecordZoneIdentifier *_zoneIdentifier;	// 40 = 0x28
    struct {
        unsigned int limit:1;
    } _has;	// 48 = 0x30
}

+ (id)options;	// IMP=0x00100000001d16d4
- (void).cxx_destruct;	// IMP=0x00000000001d20d5
- (unsigned long long)hash;	// IMP=0x00000000001d1fd3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d1e98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d1d82
- (Class)responseClass;	// IMP=0x00000000001d1d71
- (unsigned int)requestTypeCode;	// IMP=0x00000000001d1d66
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d1ca9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d1c9c
- (id)dictionaryRepresentation;	// IMP=0x00000000001d17d3
- (id)description;	// IMP=0x00000000001d1724

@end

