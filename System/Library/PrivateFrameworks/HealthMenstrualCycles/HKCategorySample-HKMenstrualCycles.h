//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCategorySample.h>

@interface HKCategorySample (HKMenstrualCycles)
+ (id)hkmc_categorySampleWithCycleFactor:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x006000000001776c
+ (id)hkmc_intermenstrualBleedingCategorySampleWithDate:(id)arg1;	// IMP=0x00600000000176b3
+ (id)hkmc_categorySampleWithMenstrualSymptom:(unsigned long long)arg1 date:(id)arg2;	// IMP=0x00600000000175e3
+ (id)hkmc_categorySampleWithSexualActivity:(long long)arg1 date:(id)arg2;	// IMP=0x0060000000017442
+ (id)hkmc_categorySampleWithProgesteroneTestResult:(long long)arg1 date:(id)arg2;	// IMP=0x0060000000017369
+ (id)hkmc_categorySampleWithPregnancyTestResult:(long long)arg1 date:(id)arg2;	// IMP=0x0060000000017290
+ (id)hkmc_categorySampleWithOvulationTestResult:(long long)arg1 date:(id)arg2;	// IMP=0x00600000000171b7
+ (id)hkmc_categorySampleWithCervicalMucusQuality:(long long)arg1 date:(id)arg2;	// IMP=0x00600000000170de
+ (id)hkmc_categorySampleWithMenstrualFlow:(long long)arg1 date:(id)arg2 startOfCycle:(_Bool)arg3;	// IMP=0x0060000000016f3a
- (long long)hkmc_deviationType;	// IMP=0x0010000000018191
- (long long)hkmc_cycleFactor;	// IMP=0x0010000000018027
- (unsigned long long)hkmc_daySummarySymptom;	// IMP=0x0010000000017fc0
- (long long)hkmc_daySummarySexualActivity;	// IMP=0x0010000000017e2f
- (long long)hkmc_daySummaryProgesteroneTestResult;	// IMP=0x0010000000017d05
- (long long)hkmc_daySummaryPregnancyTestResult;	// IMP=0x0010000000017bdb
- (long long)hkmc_daySummaryOvulationTestResult;	// IMP=0x0010000000017ab4
- (long long)hkmc_daySummaryCervicalMucusQuality;	// IMP=0x001000000001798d
- (long long)hkmc_daySummaryMenstrualFlow;	// IMP=0x0010000000017866
@end

