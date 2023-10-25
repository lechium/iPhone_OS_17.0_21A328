//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaDisableCameraMessage : PBCodable
{
    NSString *_zoneName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004feb8
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004fe6f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004fdc2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004fd4a
- (void)copyTo:(id)arg1;	// IMP=0x000000000004fd20
- (void)writeTo:(id)arg1;	// IMP=0x000000000004fcfc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004fbb3
- (id)dictionaryRepresentation;	// IMP=0x000000000004fb57
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasZoneName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
