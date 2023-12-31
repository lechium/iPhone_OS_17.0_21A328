//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKHealthStore.h>

@interface HKHealthStore (HAExtensions)
- (void)calculateBMIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x007000000000d9df
- (void)averageQuantityForType:(id)arg1 unit:(id)arg2 predicate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x007000000000d7e9
- (void)mostRecentCategorySampleOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x007000000000d739
- (void)mostRecentQuantitySampleOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x007000000000d689
- (void)mostRecentSampleOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x007000000000d5dc
@end

