//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMCalorieData : PBCodable
{
    double _truthMets;	// 8 = 0x8
    double _userMets;	// 16 = 0x10
    int _activityType;	// 24 = 0x18
    float _metsFM;	// 28 = 0x1c
    float _metsHR;	// 32 = 0x20
    float _metsWR;	// 36 = 0x24
    int _truthMetsSource;	// 40 = 0x28
    int _userMetsSource;	// 44 = 0x2c
    _Bool _isStanding;	// 48 = 0x30
    struct {
        unsigned int metsFM:1;
        unsigned int metsHR:1;
        unsigned int metsWR:1;
        unsigned int truthMetsSource:1;
        unsigned int userMetsSource:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) float metsFM; // @synthesize metsFM=_metsFM;
@property(nonatomic) float metsWR; // @synthesize metsWR=_metsWR;
@property(nonatomic) float metsHR; // @synthesize metsHR=_metsHR;
@property(nonatomic) double truthMets; // @synthesize truthMets=_truthMets;
@property(nonatomic) double userMets; // @synthesize userMets=_userMets;
@property(nonatomic) _Bool isStanding; // @synthesize isStanding=_isStanding;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000004281f8
- (unsigned long long)hash;	// IMP=0x0010000000427ce4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000427b69
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000427a59
- (void)copyTo:(id)arg1;	// IMP=0x0010000000427987
- (void)writeTo:(id)arg1;	// IMP=0x0010000000427851
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000427844
- (id)dictionaryRepresentation;	// IMP=0x0010000000426d16
- (id)description;	// IMP=0x0010000000426c9f
@property(nonatomic) _Bool hasMetsFM;
@property(nonatomic) _Bool hasMetsWR;
@property(nonatomic) _Bool hasMetsHR;
- (int)StringAsTruthMetsSource:(id)arg1;	// IMP=0x0010000000426b1c
- (id)truthMetsSourceAsString:(int)arg1;	// IMP=0x0010000000426ae3
@property(nonatomic) _Bool hasTruthMetsSource;
@property(nonatomic) int truthMetsSource; // @synthesize truthMetsSource=_truthMetsSource;
- (int)StringAsUserMetsSource:(id)arg1;	// IMP=0x00100000004269d5
- (id)userMetsSourceAsString:(int)arg1;	// IMP=0x001000000042699c
@property(nonatomic) _Bool hasUserMetsSource;
@property(nonatomic) int userMetsSource; // @synthesize userMetsSource=_userMetsSource;
- (int)StringAsActivityType:(id)arg1;	// IMP=0x0010000000426404
- (id)activityTypeAsString:(int)arg1;	// IMP=0x001000000042603c

@end

