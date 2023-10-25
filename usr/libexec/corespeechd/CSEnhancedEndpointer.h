//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MLModel, NSArray, NSDictionary;

@interface CSEnhancedEndpointer : NSObject
{
    _Bool _delayedTrigger;	// 8 = 0x8
    _Bool _hasHadDelayedDefaultResult;	// 9 = 0x9
    float _defaultThresholdPartial;	// 12 = 0xc
    float _defaultThresholdRC;	// 16 = 0x10
    MISSING_TYPE *_relaxedThresholdPartial;	// 20 = 0x14
    float _relaxedThresholdRC;	// 24 = 0x18
    int _extraDelayMs;	// 28 = 0x1c
    MLModel *_endpointerModel;	// 32 = 0x20
    NSDictionary *_inputSpecs;	// 40 = 0x28
    NSArray *_outputNodes;	// 48 = 0x30
    double _targetTimeDefault;	// 56 = 0x38
    double _targetTimeRelaxed;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000138cad
@property(readonly, nonatomic) _Bool hasHadDelayedDefaultResult; // @synthesize hasHadDelayedDefaultResult=_hasHadDelayedDefaultResult;
@property(readonly, nonatomic) double targetTimeRelaxed; // @synthesize targetTimeRelaxed=_targetTimeRelaxed;
@property(readonly, nonatomic) double targetTimeDefault; // @synthesize targetTimeDefault=_targetTimeDefault;
@property(readonly, nonatomic) _Bool delayedTrigger; // @synthesize delayedTrigger=_delayedTrigger;
@property(readonly, nonatomic) int extraDelayMs; // @synthesize extraDelayMs=_extraDelayMs;
@property(readonly, nonatomic) float relaxedThresholdRC; // @synthesize relaxedThresholdRC=_relaxedThresholdRC;
@property(readonly, nonatomic) float relaxedThresholdPartial; // @synthesize relaxedThresholdPartial=_relaxedThresholdPartial;
@property(readonly, nonatomic) float defaultThresholdRC; // @synthesize defaultThresholdRC=_defaultThresholdRC;
@property(readonly, nonatomic) float defaultThresholdPartial; // @synthesize defaultThresholdPartial=_defaultThresholdPartial;
@property(retain, nonatomic) NSArray *outputNodes; // @synthesize outputNodes=_outputNodes;
@property(retain, nonatomic) NSDictionary *inputSpecs; // @synthesize inputSpecs=_inputSpecs;
@property(retain, nonatomic) MLModel *endpointerModel; // @synthesize endpointerModel=_endpointerModel;
- (void)updateDefaultThresholdPartial:(float)arg1 defaultThresholdRC:(float)arg2 relaxedThresholdPartial:(float)arg3 relaxedThresholdRC:(float)arg4;	// IMP=0x0010000000138bf9
- (void)updateDelayedTriggerSwitch:(_Bool)arg1;	// IMP=0x0010000000138bf3
- (void)didEndpointWithFeatures:(id)arg1 audioTimestampMs:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000138bdd
- (id)initWithModelFile:(id)arg1 defaultThresholdPartial:(float)arg2 defaultThresholdRC:(float)arg3 relaxedThresholdPartial:(float)arg4 relaxedThresholdRC:(float)arg5 extraDelayMs:(int)arg6;	// IMP=0x0010000000138bcf

@end
