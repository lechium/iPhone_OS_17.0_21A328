//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SearchResult;

@interface PersistentDirections : PBCodable
{
    SearchResult *_addressEndSearch;	// 8 = 0x8
    SearchResult *_addressStartSearch;	// 16 = 0x10
    NSString *_endAddress;	// 24 = 0x18
    SearchResult *_routeEndSearch;	// 32 = 0x20
    SearchResult *_routeStartSearch;	// 40 = 0x28
    NSString *_startAddress;	// 48 = 0x30
    SearchResult *_userEndSearch;	// 56 = 0x38
    SearchResult *_userStartSearch;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000b004a3
@property(retain, nonatomic) SearchResult *routeEndSearch; // @synthesize routeEndSearch=_routeEndSearch;
@property(retain, nonatomic) SearchResult *routeStartSearch; // @synthesize routeStartSearch=_routeStartSearch;
@property(retain, nonatomic) SearchResult *addressEndSearch; // @synthesize addressEndSearch=_addressEndSearch;
@property(retain, nonatomic) SearchResult *addressStartSearch; // @synthesize addressStartSearch=_addressStartSearch;
@property(retain, nonatomic) SearchResult *userEndSearch; // @synthesize userEndSearch=_userEndSearch;
@property(retain, nonatomic) SearchResult *userStartSearch; // @synthesize userStartSearch=_userStartSearch;
@property(retain, nonatomic) NSString *endAddress; // @synthesize endAddress=_endAddress;
@property(retain, nonatomic) NSString *startAddress; // @synthesize startAddress=_startAddress;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000b001d4
- (unsigned long long)hash;	// IMP=0x0010000000b000e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000afff26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000affd92
- (void)copyTo:(id)arg1;	// IMP=0x0010000000affc6f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000affb64
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000aff8a2
- (id)dictionaryRepresentation;	// IMP=0x0010000000aff64f
- (id)description;	// IMP=0x0010000000aff5a0
@property(readonly, nonatomic) _Bool hasRouteEndSearch;
@property(readonly, nonatomic) _Bool hasRouteStartSearch;
@property(readonly, nonatomic) _Bool hasAddressEndSearch;
@property(readonly, nonatomic) _Bool hasAddressStartSearch;
@property(readonly, nonatomic) _Bool hasUserEndSearch;
@property(readonly, nonatomic) _Bool hasUserStartSearch;
@property(readonly, nonatomic) _Bool hasEndAddress;
@property(readonly, nonatomic) _Bool hasStartAddress;

@end
