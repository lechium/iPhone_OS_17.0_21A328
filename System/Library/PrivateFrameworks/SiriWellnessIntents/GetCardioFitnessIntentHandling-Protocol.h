//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriWellnessIntents/NSObject-Protocol.h>

@class GetCardioFitnessIntent;

@protocol GetCardioFitnessIntentHandling <NSObject>
- (void)handleGetCardioFitness:(GetCardioFitnessIntent *)arg1 completion:(void (^)(GetCardioFitnessIntentResponse *))arg2;

@optional
- (void)confirmGetCardioFitness:(GetCardioFitnessIntent *)arg1 completion:(void (^)(GetCardioFitnessIntentResponse *))arg2;
@end
