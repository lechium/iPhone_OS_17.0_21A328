//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TRANSITPbLocationFingerprints : PBCodable
{
    NSMutableArray *_locationFingerprints;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000004c56eb
- (unsigned long long)hash;	// IMP=0x00100000004c56ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004c5674
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004c54d1
- (void)copyTo:(id)arg1;	// IMP=0x00100000004c5447
- (void)writeTo:(id)arg1;	// IMP=0x00100000004c5341
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000004c5334
- (id)dictionaryRepresentation;	// IMP=0x00100000004c4f93
- (id)description;	// IMP=0x00100000004c4f1c
- (id)locationFingerprintAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004c4eff
- (unsigned long long)locationFingerprintsCount;	// IMP=0x00100000004c4ee2
- (void)addLocationFingerprint:(id)arg1;	// IMP=0x00100000004c4e95
- (void)clearLocationFingerprints;	// IMP=0x00100000004c4e78
- (void)dealloc;	// IMP=0x00100000004c4e38

@end

