//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface NEKPBValidationWrapper : PBCodable
{
    double _endDate;	// 8 = 0x8
    unsigned long long _masterCount;	// 16 = 0x10
    unsigned long long _occurrenceCount;	// 24 = 0x18
    double _startDate;	// 32 = 0x20
    _Bool _showAlert;	// 40 = 0x28
    struct {
        unsigned int endDate:1;
        unsigned int masterCount:1;
        unsigned int occurrenceCount:1;
        unsigned int startDate:1;
        unsigned int showAlert:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic) unsigned long long occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;
@property(nonatomic) unsigned long long masterCount; // @synthesize masterCount=_masterCount;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002819f
- (unsigned long long)hash;	// IMP=0x0010000000027f4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000027e16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000027d40
- (void)copyTo:(id)arg1;	// IMP=0x0010000000027c8d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000027bb5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000027ba8
- (id)dictionaryRepresentation;	// IMP=0x0010000000027600
- (id)description;	// IMP=0x0010000000027551
@property(nonatomic) _Bool hasShowAlert;
@property(nonatomic) _Bool hasOccurrenceCount;
@property(nonatomic) _Bool hasMasterCount;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;

@end

