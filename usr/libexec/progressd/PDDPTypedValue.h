//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPTypedValue : PBCodable
{
    double _doubleValue;	// 8 = 0x8
    long long _int64Value;	// 16 = 0x10
    PDDPDate *_dateValue;	// 24 = 0x18
    int _encryptionScheme;	// 32 = 0x20
    NSMutableArray *_stringListValues;	// 40 = 0x28
    NSString *_stringValue;	// 48 = 0x30
    int _type;	// 56 = 0x38
    _Bool _boolValue;	// 60 = 0x3c
    struct {
        unsigned int doubleValue:1;
        unsigned int int64Value:1;
        unsigned int encryptionScheme:1;
        unsigned int type:1;
        unsigned int boolValue:1;
    } _has;	// 64 = 0x40
}

+ (Class)stringListValueType;	// IMP=0x0020000000179bca
- (void).cxx_destruct;	// IMP=0x002000000017b2a9
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property(retain, nonatomic) PDDPDate *dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) NSMutableArray *stringListValues; // @synthesize stringListValues=_stringListValues;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) int encryptionScheme; // @synthesize encryptionScheme=_encryptionScheme;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000017af84
- (unsigned long long)hash;	// IMP=0x001000000017ad8a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000017abc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000017a8e2
- (void)copyTo:(id)arg1;	// IMP=0x001000000017a746
- (void)writeTo:(id)arg1;	// IMP=0x001000000017a519
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000017a50c
- (id)dictionaryRepresentation;	// IMP=0x0010000000179d7b
- (id)description;	// IMP=0x0010000000179ccc
@property(nonatomic) _Bool hasBoolValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasInt64Value;
@property(readonly, nonatomic) _Bool hasDateValue;
- (id)stringListValueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000179bad
- (unsigned long long)stringListValuesCount;	// IMP=0x0010000000179b90
- (void)addStringListValue:(id)arg1;	// IMP=0x0010000000179b26
- (void)clearStringListValues;	// IMP=0x0010000000179b09
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasEncryptionScheme;
- (int)StringAsType:(id)arg1;	// IMP=0x001000000017990b
- (id)typeAsString:(int)arg1;	// IMP=0x00100000001798c2
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end
