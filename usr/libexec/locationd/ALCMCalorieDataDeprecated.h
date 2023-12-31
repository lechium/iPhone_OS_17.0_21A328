//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMCalorieDataDeprecated : PBCodable
{
    double _mets;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    int _activityType;	// 24 = 0x18
    float _energyMagnitude;	// 28 = 0x1c
    float _meanAngleX;	// 32 = 0x20
    int _metSource;	// 36 = 0x24
    float _metsHR;	// 40 = 0x28
    float _metsWR;	// 44 = 0x2c
    int _recordId;	// 48 = 0x30
    _Bool _isStanding;	// 52 = 0x34
    _Bool _regularEntry;	// 53 = 0x35
    struct {
        unsigned int timestamp:1;
        unsigned int metsHR:1;
        unsigned int metsWR:1;
        unsigned int recordId:1;
    } _has;	// 56 = 0x38
}

@property(nonatomic) float metsWR; // @synthesize metsWR=_metsWR;
@property(nonatomic) float metsHR; // @synthesize metsHR=_metsHR;
@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float energyMagnitude; // @synthesize energyMagnitude=_energyMagnitude;
@property(nonatomic) float meanAngleX; // @synthesize meanAngleX=_meanAngleX;
@property(nonatomic) int metSource; // @synthesize metSource=_metSource;
@property(nonatomic) double mets; // @synthesize mets=_mets;
@property(nonatomic) _Bool isStanding; // @synthesize isStanding=_isStanding;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006f8ae4
- (unsigned long long)hash;	// IMP=0x00100000006f84e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006f833f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006f821d
- (void)copyTo:(id)arg1;	// IMP=0x00100000006f8139
- (void)writeTo:(id)arg1;	// IMP=0x00100000006f7fd9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000006f7fcc
- (id)dictionaryRepresentation;	// IMP=0x00100000006f7393
- (id)description;	// IMP=0x00100000006f731c
@property(nonatomic) _Bool hasMetsWR;
@property(nonatomic) _Bool hasMetsHR;
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsMetSource:(id)arg1;	// IMP=0x00100000006f71b7
- (id)metSourceAsString:(int)arg1;	// IMP=0x00100000006f717e
- (int)StringAsActivityType:(id)arg1;	// IMP=0x00100000006f6c50
- (id)activityTypeAsString:(int)arg1;	// IMP=0x00100000006f688b
@property(nonatomic) _Bool hasRecordId;

@end

