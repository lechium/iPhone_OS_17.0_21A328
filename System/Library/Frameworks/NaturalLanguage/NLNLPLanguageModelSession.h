//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLLanguageModelSession.h"

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelSession : NLLanguageModelSession
{
    struct CoreLanguageModelWithState *_model;	// 16 = 0x10
}

- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021b96
- (id)predictionInitialCharacterSet;	// IMP=0x0000000000021b31
- (id)predictionOptionsForMaximumPredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2;	// IMP=0x0000000000021a10
- (id)stateWithOptions:(id)arg1;	// IMP=0x000000000002198b
- (id)conditionalProbabilitiesForStrings:(id)arg1 context:(id)arg2;	// IMP=0x000000000002188d
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021580
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;	// IMP=0x00000000000213dd
- (id)description;	// IMP=0x00000000000212c2
- (void)dealloc;	// IMP=0x000000000002127c
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;	// IMP=0x000000000002112d

@end

