//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLStairClimbingModel : PBCodable
{
    float _machineFrequency;	// 8 = 0x8
}

@property(nonatomic) float machineFrequency; // @synthesize machineFrequency=_machineFrequency;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000056eb3d
- (unsigned long long)hash;	// IMP=0x001000000056ea5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000056ea11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000056e9bb
- (void)copyTo:(id)arg1;	// IMP=0x001000000056e9a4
- (void)writeTo:(id)arg1;	// IMP=0x001000000056e986
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000056e979
- (id)dictionaryRepresentation;	// IMP=0x001000000056e7a9
- (id)description;	// IMP=0x001000000056e732

@end

