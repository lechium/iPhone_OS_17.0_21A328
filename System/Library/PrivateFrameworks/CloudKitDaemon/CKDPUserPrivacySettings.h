//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPUserPrivacySettings : PBCodable
{
    _Bool _discoverable;	// 8 = 0x8
    struct {
        unsigned int discoverable:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool discoverable; // @synthesize discoverable=_discoverable;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000353a1a
- (unsigned long long)hash;	// IMP=0x00000000003539ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000035394d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003538e9
- (void)copyTo:(id)arg1;	// IMP=0x00000000003538c3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000353897
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000035388a
- (id)dictionaryRepresentation;	// IMP=0x0000000000353637
- (id)description;	// IMP=0x0000000000353588
@property(nonatomic) _Bool hasDiscoverable;

@end
