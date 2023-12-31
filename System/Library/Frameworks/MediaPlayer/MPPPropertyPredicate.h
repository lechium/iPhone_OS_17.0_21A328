//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MPPMediaPredicateValue, NSString;

__attribute__((visibility("hidden")))
@interface MPPPropertyPredicate : PBCodable
{
    int _comparisonType;	// 8 = 0x8
    NSString *_property;	// 16 = 0x10
    MPPMediaPredicateValue *_value;	// 24 = 0x18
    struct {
        unsigned int comparisonType:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000291397
@property(nonatomic) int comparisonType; // @synthesize comparisonType=_comparisonType;
@property(retain, nonatomic) MPPMediaPredicateValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
- (unsigned long long)hash;	// IMP=0x00000000002912c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002911f7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000291139
- (void)copyTo:(id)arg1;	// IMP=0x000000000029103f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000290f43
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000290f36
- (id)dictionaryRepresentation;	// IMP=0x0000000000290e2a
- (id)description;	// IMP=0x0000000000290d7b
@property(nonatomic) _Bool hasComparisonType;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasProperty;
- (void)dealloc;	// IMP=0x0000000000290cb5

@end

