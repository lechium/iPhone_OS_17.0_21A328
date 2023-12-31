//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CMPedometerTable : NSObject
{
    NSString *_tableName;	// 8 = 0x8
    NSString *_valueInName;	// 16 = 0x10
    NSString *_valueOutName;	// 24 = 0x18
    double _defaultValue;	// 32 = 0x20
    vector_0e047154 _binBoundariesWalk;	// 40 = 0x28
    vector_0e047154 _binBoundariesRun;	// 64 = 0x40
    vector_0e047154 _binBoundaries;	// 88 = 0x58
    _Bool _testMode;	// 112 = 0x70
    void *_persistentStore;	// 120 = 0x78
    NSMutableArray *_bins;	// 128 = 0x80
}

+ (id)convertToCMStrideCalibrationData:(id)arg1;	// IMP=0x00400000007cabae
+ (id)convertToCMPedometerBins:(id)arg1;	// IMP=0x00100000007caa60
- (id).cxx_construct;	// IMP=0x00200000007cad48
- (void).cxx_destruct;	// IMP=0x00100000007cacfc
- (void)updateBinsWithValueOut:(double)arg1 valueIn:(double)arg2 alpha:(double)arg3;	// IMP=0x00100000007ca3e0
- (id)description;	// IMP=0x00100000007ca1db
- (unsigned long long)walkBinCount;	// IMP=0x00100000007ca1c9
- (_Bool)testMode;	// IMP=0x00100000007ca1c0
- (void)binsDidChange;	// IMP=0x00100000007ca1ba
- (void)logBins;	// IMP=0x00100000007ca1b4
- (void)setBins:(id)arg1;	// IMP=0x00100000007ca101
- (CDStruct_2c43369c)binIntervalForValueIn:(double)arg1;	// IMP=0x00100000007ca0a0
- (_Bool)isValueInValid:(double)arg1;	// IMP=0x00100000007ca07d
- (unsigned long long)binIndexForValueIn:(double)arg1;	// IMP=0x00100000007c9fe6
- (_Bool)isValueInRun:(double)arg1;	// IMP=0x00100000007c9fd4
- (_Bool)isBin:(unsigned long long)arg1 sameActivityAsBin:(unsigned long long)arg2;	// IMP=0x00100000007c9f66
- (void)updateAdjacentBin:(unsigned long long)arg1 withAlpha:(double)arg2 valueOut:(double)arg3 nativeBin:(unsigned long long)arg4;	// IMP=0x00100000007c9e1d
- (void)updateNativeBin:(unsigned long long)arg1 withAlpha:(double)arg2 valueOut:(double)arg3;	// IMP=0x00100000007c9d12
- (_Bool)isRunNativeValueOutAvailable;	// IMP=0x00100000007c9ccd
- (_Bool)isWalkNativeValueOutAvailable;	// IMP=0x00100000007c9c88
- (_Bool)isNativeValueOutAvailableInBinsFromIndex:(unsigned long long)arg1 withLength:(unsigned long long)arg2;	// IMP=0x00100000007c9b08
- (double)valueOutForValueIn:(double)arg1;	// IMP=0x00100000007c96d9
- (id)copyBins;	// IMP=0x00100000007c9681
- (void)dealloc;	// IMP=0x00100000007c9626
- (id)defaultBins;	// IMP=0x00100000007c9551
- (id)binArrayToArchivedData:(id)arg1;	// IMP=0x00100000007c94de
- (id)initWithTableName:(id)arg1 valueInName:(id)arg2 valueOutName:(id)arg3 defaultValue:(double)arg4 binBoundariesWalk:(vector_0e047154)arg5 binBoundariesRun:(vector_0e047154)arg6 testMode:(_Bool)arg7;	// IMP=0x00100000007c9040

@end

