//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SECC2MPError;

@interface SECC2MPGenericEventMetricValue : PBCodable
{
    unsigned long long _dateValue;	// 8 = 0x8
    double _doubleValue;	// 16 = 0x10
    SECC2MPError *_errorValue;	// 24 = 0x18
    NSString *_stringValue;	// 32 = 0x20
    struct {
        unsigned int dateValue:1;
        unsigned int doubleValue:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000087d5e
@property(retain, nonatomic) SECC2MPError *errorValue; // @synthesize errorValue=_errorValue;
@property(nonatomic) unsigned long long dateValue; // @synthesize dateValue=_dateValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000087c36
- (unsigned long long)hash;	// IMP=0x0010000000087aca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000879bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000878d5
- (void)copyTo:(id)arg1;	// IMP=0x0010000000087830
- (void)writeTo:(id)arg1;	// IMP=0x0010000000087781
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000087774
- (id)dictionaryRepresentation;	// IMP=0x0010000000087606
- (id)description;	// IMP=0x0010000000087557
@property(readonly, nonatomic) _Bool hasErrorValue;
@property(nonatomic) _Bool hasDateValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(readonly, nonatomic) _Bool hasStringValue;

@end

