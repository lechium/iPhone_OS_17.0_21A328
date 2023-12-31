//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _containerType;	// 16 = 0x10
    int _rebuildStatus;	// 20 = 0x14
    int _zoneType;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int containerType:1;
        unsigned int rebuildStatus:1;
        unsigned int zoneType:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b1a884
- (unsigned long long)hash;	// IMP=0x0000000000b1a800
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b1a70a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b1a659
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b1a5cb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b1a518
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b1a1aa
- (id)dictionaryRepresentation;	// IMP=0x0000000000b19fb4
- (id)description;	// IMP=0x0000000000b19f05
- (int)StringAsZoneType:(id)arg1;	// IMP=0x0000000000b19e13
- (id)zoneTypeAsString:(int)arg1;	// IMP=0x0000000000b19dcb
@property(nonatomic) _Bool hasZoneType;
@property(nonatomic) int zoneType; // @synthesize zoneType=_zoneType;
- (int)StringAsContainerType:(id)arg1;	// IMP=0x0000000000b19cad
- (id)containerTypeAsString:(int)arg1;	// IMP=0x0000000000b19c65
@property(nonatomic) _Bool hasContainerType;
@property(nonatomic) int containerType; // @synthesize containerType=_containerType;
- (int)StringAsRebuildStatus:(id)arg1;	// IMP=0x0000000000b19ac2
- (id)rebuildStatusAsString:(int)arg1;	// IMP=0x0000000000b19a7a
@property(nonatomic) _Bool hasRebuildStatus;
@property(nonatomic) int rebuildStatus; // @synthesize rebuildStatus=_rebuildStatus;
@property(nonatomic) _Bool hasTimestamp;

@end

