//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SECC2MPGenericEventMetricValue;

@interface SECC2MPGenericEventMetric : PBCodable
{
    NSString *_key;	// 8 = 0x8
    SECC2MPGenericEventMetricValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000084046
@property(retain, nonatomic) SECC2MPGenericEventMetricValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000083f83
- (unsigned long long)hash;	// IMP=0x0010000000083f36
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000083e7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000083de0
- (void)copyTo:(id)arg1;	// IMP=0x0010000000083d7d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000083d20
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000083d13
- (id)dictionaryRepresentation;	// IMP=0x0010000000083c62
- (id)description;	// IMP=0x0010000000083bb3
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end
