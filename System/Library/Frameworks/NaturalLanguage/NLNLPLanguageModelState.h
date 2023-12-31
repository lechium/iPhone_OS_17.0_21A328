//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLLanguageModelState.h"

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelState : NLLanguageModelState
{
    struct CoreLanguageModelWithState *_modelState;	// 32 = 0x20
}

- (void)enumeratePredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023aa6
- (id)conditionalProbabilitiesForStrings:(id)arg1;	// IMP=0x0000000000023a79
- (id)conditionalProbabilityForString:(id)arg1;	// IMP=0x00000000000237f0
- (id)conditionalProbabilityForToken:(id)arg1;	// IMP=0x00000000000236cc
- (void)resetContext;	// IMP=0x0000000000023686
- (void)addContext:(id)arg1;	// IMP=0x00000000000235fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002351c
- (id)description;	// IMP=0x0000000000023471
- (void)dealloc;	// IMP=0x000000000002342b
- (id)initWithSession:(id)arg1 options:(id)arg2 context:(id)arg3 modelState:(void *)arg4;	// IMP=0x00000000000233e7

@end

