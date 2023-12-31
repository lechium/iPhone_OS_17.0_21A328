//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKFeatureSettings.h>

@interface HKFeatureSettings (HKMenstrualCycles)
@property(readonly, nonatomic) _Bool deviationDetectionEnabledSetExplicitlyForAnyType;
@property(readonly, nonatomic) _Bool deviationDetectionEnabledForAllTypes;
@property(readonly, nonatomic) _Bool deviationDetectionEnabledForAnyType;
- (_Bool)deviationDetectionEnabledForType:(long long)arg1;	// IMP=0x00300000000257af
- (id)initWithMenstruationProjectionsEnabled:(_Bool)arg1 fertileWindowProjectionsEnabled:(_Bool)arg2 areFertilityTrackingDisplayTypesVisible:(_Bool)arg3 isSexualActivityDisplayTypeVisible:(_Bool)arg4;	// IMP=0x0030000000025496
- (_Bool)projectionsEnabledSettingsHaveChangedFromFeatureSettings:(id)arg1;	// IMP=0x0030000000025411
- (_Bool)isLoggingVisibleForDisplayTypeIdentifier:(id)arg1;	// IMP=0x0030000000025387
@property(readonly, nonatomic) _Bool fertileWindowProjectionsEnabled;
@property(readonly, nonatomic) _Bool menstruationProjectionsEnabled;
@end

