//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIValuePredictor : NSObject
{
    unsigned long long _capacity;	// 8 = 0x8
    unsigned long long _arrayCapacity;	// 16 = 0x10
    double *_values;	// 24 = 0x18
    double *_valueWeights;	// 32 = 0x20
    double *_predictions;	// 40 = 0x28
    double *_confidenceFactorsForVelocity;	// 48 = 0x30
    double *_confidenceFactorsForHistoricalAccuracy;	// 56 = 0x38
    double *_confidenceFactorsForDerivativeStability;	// 64 = 0x40
    double *_confidenceFactors;	// 72 = 0x48
    double **_derivatives;	// 80 = 0x50
    double _minHistoricalAccuracyThreshold;	// 88 = 0x58
    double _maxHistoricalAccuracyThreshold;	// 96 = 0x60
    double _derivativeStabilityThreshold;	// 104 = 0x68
    double _minVelocityThreshold;	// 112 = 0x70
    double _maxVelocityThreshold;	// 120 = 0x78
    double _minConstraint;	// 128 = 0x80
    double _maxConstraint;	// 136 = 0x88
    _Bool _wrapConstraint;	// 144 = 0x90
    unsigned long long _numValues;	// 152 = 0x98
    unsigned long long _numPredictions;	// 160 = 0xa0
    unsigned long long _numDerivatives;	// 168 = 0xa8
}

@property(readonly, nonatomic) unsigned long long numDerivatives; // @synthesize numDerivatives=_numDerivatives;
@property(readonly, nonatomic) unsigned long long numPredictions; // @synthesize numPredictions=_numPredictions;
@property(readonly, nonatomic) unsigned long long numValues; // @synthesize numValues=_numValues;
@property(nonatomic) _Bool wrapConstraint; // @synthesize wrapConstraint=_wrapConstraint;
@property(nonatomic) double maxConstraint; // @synthesize maxConstraint=_maxConstraint;
@property(nonatomic) double minConstraint; // @synthesize minConstraint=_minConstraint;
@property(nonatomic) double maxVelocityThreshold; // @synthesize maxVelocityThreshold=_maxVelocityThreshold;
@property(nonatomic) double minVelocityThreshold; // @synthesize minVelocityThreshold=_minVelocityThreshold;
@property(nonatomic) double derivativeStabilityThreshold; // @synthesize derivativeStabilityThreshold=_derivativeStabilityThreshold;
@property(nonatomic) double maxHistoricalAccuracyThreshold; // @synthesize maxHistoricalAccuracyThreshold=_maxHistoricalAccuracyThreshold;
@property(nonatomic) double minHistoricalAccuracyThreshold; // @synthesize minHistoricalAccuracyThreshold=_minHistoricalAccuracyThreshold;
- (id)description;	// IMP=0x00000000010bfa8e
- (id)descriptionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 includeHeader:(_Bool)arg3 includeDetailedConfidence:(_Bool)arg4;	// IMP=0x00000000010bf6df
- (double *)confidenceFactors;	// IMP=0x00000000010bf6c2
- (double *)predictions;	// IMP=0x00000000010bf6a5
- (void)addValue:(double)arg1 weight:(double)arg2;	// IMP=0x00000000010bf610
- (void)_updatePredictionsAtIndex:(long long)arg1;	// IMP=0x00000000010bf447
- (void)_updateConfidenceFactorsAtIndex:(int)arg1;	// IMP=0x00000000010bf35a
- (void)_updateConfidenceFactorsForDerivativeStabilityAtIndex:(int)arg1;	// IMP=0x00000000010bf2a8
- (void)_updateConfidenceFactorsForHistoricalAccuracyAtIndex:(int)arg1;	// IMP=0x00000000010bf033
- (void)_getPriorPredictions:(double *)arg1 forValueAtIndex:(int)arg2;	// IMP=0x00000000010bef93
- (void)_updateConfidenceFactorsForVelocityAtIndex:(long long)arg1;	// IMP=0x00000000010beec2
- (void)_propagateDerivatives:(double *)arg1 fromHigherDerivatives:(double *)arg2 atIndex:(long long)arg3;	// IMP=0x00000000010bee4f
- (void)_updateDerivatives:(double *)arg1 fromArray:(double *)arg2 weights:(double *)arg3 atIndex:(long long)arg4 wrap:(_Bool)arg5;	// IMP=0x00000000010bed5e
- (void)_slideDataWindow;	// IMP=0x00000000010beb6b
- (void)_ensureCapacity:(unsigned long long)arg1;	// IMP=0x00000000010be91f
- (void)_setupDefaults;	// IMP=0x00000000010be8e3
- (double)_constrainPrediction:(double)arg1;	// IMP=0x00000000010be7d2
- (double **)_derivatives;	// IMP=0x00000000010be7c8
- (double *)_confidenceFactorsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010be7ae
- (double *)_confidenceFactorsForDerivativeStabilityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010be794
- (double *)_confidenceFactorsForHistoricalAccuracyAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010be77a
- (double *)_confidenceFactorsForVelocityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010be760
- (double *)_predictionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010be746
- (double *)_valueWeightsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010be734
- (double *)_valuesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010be722
- (void)dealloc;	// IMP=0x00000000010be661
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010be632
- (id)initFromValuePredictor:(id)arg1;	// IMP=0x00000000010be36d
- (id)init;	// IMP=0x00000000010be351
- (id)initWithNumPredictions:(unsigned long long)arg1 numDerivatives:(unsigned long long)arg2;	// IMP=0x00000000010be2bf

@end
