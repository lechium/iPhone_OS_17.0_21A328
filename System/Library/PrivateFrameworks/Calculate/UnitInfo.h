//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString, UnitTypeInfo;

__attribute__((visibility("hidden")))
@interface UnitInfo : NSObject
{
    _Bool _isInverted;	// 8 = 0x8
    _Bool _isBaseUnit;	// 9 = 0x9
    _Bool _isDisplayName;	// 10 = 0xa
    _Bool _impliesDivision;	// 11 = 0xb
    _Bool _isFahrenheit;	// 12 = 0xc
    _Bool _isCelsius;	// 13 = 0xd
    _Bool _isKelvin;	// 14 = 0xe
    _Bool _doNotSuggest;	// 15 = 0xf
    _Bool _formatNextSmallest;	// 16 = 0x10
    int _unitID;	// 20 = 0x14
    int _unitType;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    UnitTypeInfo *_typeInfo;	// 40 = 0x28
    UnitInfo *_bestEquivalent;	// 48 = 0x30
    unsigned long long _measurementSystem;	// 56 = 0x38
    UnitInfo *_nextSmallest;	// 64 = 0x40
    NSArray *_subunitIDs;	// 72 = 0x48
    NSSet *_allSubunitIDs;	// 80 = 0x50
    NSMutableDictionary *_localizationToCompactName;	// 88 = 0x58
    CDStruct_bc361aee _baseNumerator;	// 96 = 0x60
    CDStruct_bc361aee _baseDenominator;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000016f22
@property(retain, nonatomic) NSMutableDictionary *localizationToCompactName; // @synthesize localizationToCompactName=_localizationToCompactName;
@property(retain, nonatomic) NSSet *allSubunitIDs; // @synthesize allSubunitIDs=_allSubunitIDs;
@property(retain, nonatomic) NSArray *subunitIDs; // @synthesize subunitIDs=_subunitIDs;
@property(nonatomic) _Bool formatNextSmallest; // @synthesize formatNextSmallest=_formatNextSmallest;
@property(nonatomic) __weak UnitInfo *nextSmallest; // @synthesize nextSmallest=_nextSmallest;
@property(nonatomic) _Bool doNotSuggest; // @synthesize doNotSuggest=_doNotSuggest;
@property(nonatomic) unsigned long long measurementSystem; // @synthesize measurementSystem=_measurementSystem;
@property(nonatomic) __weak UnitInfo *bestEquivalent; // @synthesize bestEquivalent=_bestEquivalent;
@property(nonatomic) __weak UnitTypeInfo *typeInfo; // @synthesize typeInfo=_typeInfo;
@property(nonatomic) _Bool isKelvin; // @synthesize isKelvin=_isKelvin;
@property(nonatomic) _Bool isCelsius; // @synthesize isCelsius=_isCelsius;
@property(nonatomic) _Bool isFahrenheit; // @synthesize isFahrenheit=_isFahrenheit;
@property(nonatomic) _Bool impliesDivision; // @synthesize impliesDivision=_impliesDivision;
@property(nonatomic) _Bool isDisplayName; // @synthesize isDisplayName=_isDisplayName;
@property(nonatomic) _Bool isBaseUnit; // @synthesize isBaseUnit=_isBaseUnit;
@property(nonatomic) _Bool isInverted; // @synthesize isInverted=_isInverted;
@property(nonatomic) CDStruct_bc361aee baseDenominator; // @synthesize baseDenominator=_baseDenominator;
@property(nonatomic) CDStruct_bc361aee baseNumerator; // @synthesize baseNumerator=_baseNumerator;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int unitType; // @synthesize unitType=_unitType;
@property(nonatomic) int unitID; // @synthesize unitID=_unitID;
- (id)compactNameForLocalization:(id)arg1;	// IMP=0x0000000000016955
- (unsigned long long)hash;	// IMP=0x0000000000016908
- (long long)compare:(id)arg1;	// IMP=0x0000000000016879
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000167f1
- (id)init;	// IMP=0x000000000001673b

@end

