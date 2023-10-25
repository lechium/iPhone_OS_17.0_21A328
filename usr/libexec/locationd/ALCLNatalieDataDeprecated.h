//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLNatalieDataDeprecated : PBCodable
{
    long long _basalNatalies;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _mets;	// 24 = 0x18
    long long _natalies;	// 32 = 0x20
    double _timestamp;	// 40 = 0x28
    int _activityType;	// 48 = 0x30
    float _basalMETs;	// 52 = 0x34
    int _recordId;	// 56 = 0x38
    _Bool _isStanding;	// 60 = 0x3c
    _Bool _regularEntry;	// 61 = 0x3d
    struct {
        unsigned int basalNatalies:1;
        unsigned int duration:1;
        unsigned int mets:1;
        unsigned int timestamp:1;
        unsigned int basalMETs:1;
        unsigned int recordId:1;
    } _has;	// 64 = 0x40
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long basalNatalies; // @synthesize basalNatalies=_basalNatalies;
@property(nonatomic) long long natalies; // @synthesize natalies=_natalies;
@property(nonatomic) float basalMETs; // @synthesize basalMETs=_basalMETs;
@property(nonatomic) double mets; // @synthesize mets=_mets;
@property(nonatomic) _Bool isStanding; // @synthesize isStanding=_isStanding;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000b4eee1
- (unsigned long long)hash;	// IMP=0x0010000000b4ea6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000b4e8c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000b4e79e
- (void)copyTo:(id)arg1;	// IMP=0x0010000000b4e6b3
- (void)writeTo:(id)arg1;	// IMP=0x0010000000b4e569
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000b4e55c
- (id)dictionaryRepresentation;	// IMP=0x0010000000b4d94d
- (id)description;	// IMP=0x0010000000b4d8d6
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasBasalNatalies;
@property(nonatomic) _Bool hasBasalMETs;
@property(nonatomic) _Bool hasMets;
- (int)StringAsActivityType:(id)arg1;	// IMP=0x0010000000b4d230
- (id)activityTypeAsString:(int)arg1;	// IMP=0x0010000000b4ce6b
@property(nonatomic) _Bool hasRecordId;

@end
