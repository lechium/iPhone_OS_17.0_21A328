//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitValue : PBCodable
{
    double _doubleVal;	// 8 = 0x8
    long long _intVal;	// 16 = 0x10
    NSData *_dataVal;	// 24 = 0x18
    float _floatVal;	// 32 = 0x20
    NSString *_stringVal;	// 40 = 0x28
    _Bool _boolVal;	// 48 = 0x30
    struct {
        unsigned int doubleVal:1;
        unsigned int intVal:1;
        unsigned int floatVal:1;
        unsigned int boolVal:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000006a39ab
@property(retain, nonatomic) NSData *dataVal; // @synthesize dataVal=_dataVal;
@property(nonatomic) _Bool boolVal; // @synthesize boolVal=_boolVal;
@property(nonatomic) double doubleVal; // @synthesize doubleVal=_doubleVal;
@property(nonatomic) float floatVal; // @synthesize floatVal=_floatVal;
@property(nonatomic) long long intVal; // @synthesize intVal=_intVal;
@property(retain, nonatomic) NSString *stringVal; // @synthesize stringVal=_stringVal;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006a383d
- (unsigned long long)hash;	// IMP=0x00000000006a35c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a3463
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006a333f
- (void)copyTo:(id)arg1;	// IMP=0x00000000006a3260
- (void)writeTo:(id)arg1;	// IMP=0x00000000006a316e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006a3161
- (id)dictionaryRepresentation;	// IMP=0x00000000006a2f69
- (id)description;	// IMP=0x00000000006a2eba
@property(readonly, nonatomic) _Bool hasDataVal;
@property(nonatomic) _Bool hasBoolVal;
@property(nonatomic) _Bool hasDoubleVal;
@property(nonatomic) _Bool hasFloatVal;
@property(nonatomic) _Bool hasIntVal;
@property(readonly, nonatomic) _Bool hasStringVal;

@end

