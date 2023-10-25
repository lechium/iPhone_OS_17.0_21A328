//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHouseholdMetricsRequestContributor, NSDictionary;
@protocol HMDHouseholdMetricsDataSource, HMDHouseholdMetricsLogEventProviding, HMDHouseholdMetricsMessaging, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHouseholdMetricsServer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDHouseholdMetricsDataSource> _dataSource;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    id <HMDHouseholdMetricsLogEventProviding> _householdMetricsProvider;	// 32 = 0x20
    id <HMDHouseholdMetricsMessaging> _remoteMessageDispatcher;	// 40 = 0x28
    HMDHouseholdMetricsRequestContributor *_requestContributor;	// 48 = 0x30
    NSDictionary *_logEventFactories;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00600000000b9f24
- (void).cxx_destruct;	// IMP=0x00000000000b92d6
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSDictionary *logEventFactories; // @synthesize logEventFactories=_logEventFactories;
@property(readonly, nonatomic) HMDHouseholdMetricsRequestContributor *requestContributor; // @synthesize requestContributor=_requestContributor;
@property(readonly, nonatomic) __weak id <HMDHouseholdMetricsMessaging> remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(readonly, nonatomic) __weak id <HMDHouseholdMetricsLogEventProviding> householdMetricsProvider; // @synthesize householdMetricsProvider=_householdMetricsProvider;
@property(readonly, nonatomic) __weak id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) __weak id <HMDHouseholdMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)runHouseholdMetricsDataCollectionAssociatedToDate:(id)arg1 forceSubmit:(_Bool)arg2;	// IMP=0x00000000000b8b4a
- (void)sendHouseholdMetricsCollectionRequestToDevices:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b8513
- (_Bool)evaluateMetricResponsesForSubmission:(id)arg1;	// IMP=0x00000000000b82e3
- (_Bool)evaluateHouseholdActivityLogEventForSubmission:(id)arg1;	// IMP=0x00000000000b82c6
- (id)initWithDataSource:(id)arg1 logEventSubmitter:(id)arg2 householdMetricsProvider:(id)arg3 remoteMessageDispatcher:(id)arg4 logEventFactories:(id)arg5 workQueue:(id)arg6;	// IMP=0x00000000000b81b2

@end
