//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSString;

@interface APPBAdDataUpdate : PBCodable
{
    double _expirationDate;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    int _impressionCountAdjustment;	// 24 = 0x18
    NSString *_uniqueIdentifier;	// 32 = 0x20
    struct {
        unsigned int expirationDate:1;
        unsigned int priority:1;
        unsigned int impressionCountAdjustment:1;
    } _has;	// 40 = 0x28
}

+ (id)options;	// IMP=0x002000000004b790
- (void).cxx_destruct;	// IMP=0x002000000004c34f
@property(nonatomic) int impressionCountAdjustment; // @synthesize impressionCountAdjustment=_impressionCountAdjustment;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004c257
- (MISSING_TYPE *)hash;	// IMP=0x001000000004c0ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004bfe7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004bf12
- (void)copyTo:(id)arg1;	// IMP=0x001000000004be77
- (void)writeTo:(id)arg1;	// IMP=0x001000000004bdb1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004bda4
- (id)dictionaryRepresentation;	// IMP=0x001000000004b96b
- (id)description;	// IMP=0x001000000004b8bc
@property(nonatomic) _Bool hasImpressionCountAdjustment;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) _Bool hasExpirationDate;

@end

