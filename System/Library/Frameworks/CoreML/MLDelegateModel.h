//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MLModel.h"

@class MLOutputBackingsVerifier, NSMutableArray, NSObject;
@protocol MLModeling, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MLDelegateModel : MLModel
{
    NSObject<OS_dispatch_queue> *_asyncPredictionQueue;	// 8 = 0x8
    id <MLModeling> _internalEngine;	// 16 = 0x10
    MLOutputBackingsVerifier *_outputBackingsVerifier;	// 24 = 0x18
    struct os_unfair_lock_s _asyncPredictionSchedulingLock;	// 32 = 0x20
    unsigned long long _currentAsyncPredictionsInFlight;	// 40 = 0x28
    struct atomic<bool> _prepared;	// 48 = 0x30
    unsigned long long _maxAsyncPredictionsInFlight;	// 56 = 0x38
    NSMutableArray *_pendingPredictionQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000110ae7
@property(readonly, nonatomic) NSMutableArray *pendingPredictionQueue; // @synthesize pendingPredictionQueue=_pendingPredictionQueue;
@property(readonly, nonatomic) unsigned long long maxAsyncPredictionsInFlight; // @synthesize maxAsyncPredictionsInFlight=_maxAsyncPredictionsInFlight;
- (void)cancelPredictionRequest:(id)arg1;	// IMP=0x00000000001108ee
- (void)_finishPredictionAndDispatchPendingPredictions;	// IMP=0x00000000001106d6
- (void)_schedulePredictionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011053a
- (id)executionSchedule;	// IMP=0x00000000001104d6
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000110438
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011027a
- (void)_submitPredictionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001101bc
- (void)submitPredictionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000110131
- (id)newRequestWithInputFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010fedb
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010fc43
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010f92c
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000010f898
- (id)pipeline;	// IMP=0x000000000010f80a
- (id)regressor;	// IMP=0x000000000010f77c
- (id)classifier;	// IMP=0x000000000010f6ee
- (id)updatable;	// IMP=0x000000000010f660
- (id)writable;	// IMP=0x000000000010f5d2
- (id)neuralNetwork;	// IMP=0x000000000010f544
- (id)program;	// IMP=0x000000000010f4ee
- (id)internalEngine;	// IMP=0x000000000010f4d9
- (unsigned long long)predictionTypeForKTrace;	// IMP=0x000000000010f481
- (void)enableInstrumentsTracing;	// IMP=0x000000000010f430
- (unsigned long long)signpostID;	// IMP=0x000000000010f3d8
@property(readonly, nonatomic) int engine;
- (id)initWithEngine:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010efae

@end

