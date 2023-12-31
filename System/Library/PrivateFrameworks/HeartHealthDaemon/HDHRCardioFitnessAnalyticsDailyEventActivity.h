//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDAssertion, HDHRCardioFitnessAnalyticsDailyEventDataSource, HDPeriodicActivity, HDProfile, HKHRCardioFitnessAnalyticsManager, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDHRCardioFitnessAnalyticsDailyEventActivity : NSObject
{
    HDAssertion *_preparedDatabaseAccessibilityAssertion;	// 8 = 0x8
    HDProfile *_profile;	// 16 = 0x10
    double _calculationPeriod;	// 24 = 0x18
    double _retryPeriod;	// 32 = 0x20
    HDPeriodicActivity *_periodicActivity;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    HKHRCardioFitnessAnalyticsManager *_analyticsManager;	// 56 = 0x38
    HDHRCardioFitnessAnalyticsDailyEventDataSource *_dataSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003cc83
@property(readonly, nonatomic) HDHRCardioFitnessAnalyticsDailyEventDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) HKHRCardioFitnessAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HDPeriodicActivity *periodicActivity; // @synthesize periodicActivity=_periodicActivity;
@property(readonly, nonatomic) double retryPeriod; // @synthesize retryPeriod=_retryPeriod;
@property(readonly, nonatomic) double calculationPeriod; // @synthesize calculationPeriod=_calculationPeriod;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)_queue_submitAnalyticsWithActivityCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c763
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c082
- (_Bool)periodicActivityRequiresProtectedData:(id)arg1;	// IMP=0x000000000003c07a
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;	// IMP=0x000000000003c00d
- (void)daemonReady:(id)arg1;	// IMP=0x000000000003bf7f
- (void)dealloc;	// IMP=0x000000000003bf3d
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000003bdaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

