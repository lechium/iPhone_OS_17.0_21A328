//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPMergeableValueIdentifier : PBCodable
{
    CKDPIdentifier *_value;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000175425
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000017534c
- (unsigned long long)hash;	// IMP=0x00000000001752ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000175247
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001751a9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000175146
- (void)writeTo:(id)arg1;	// IMP=0x00000000001750e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001750dc
- (id)dictionaryRepresentation;	// IMP=0x0000000000174e1c
- (id)description;	// IMP=0x0000000000174d6d
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasValue;

@end

