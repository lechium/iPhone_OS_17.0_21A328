//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCounterGroup, HMDEventCountersManager, NSObject, NSString, NSUserDefaults;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLogEventMessageEventsAnalyzer
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isPrimaryResident;	// 12 = 0xc
    double _lastRemoteMessageEventsPeriodicSubmissionTime;	// 16 = 0x10
    double _lastXPCMessageEventsPeriodicSubmissionTime;	// 24 = 0x18
    HMDEventCountersManager *_eventCountersManager;	// 32 = 0x20
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 40 = 0x28
    NSUserDefaults *_userDefaults;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    unsigned long long _periodicLoggingInterval;	// 64 = 0x40
    HMDEventCounterGroup *_residentSyncGroup;	// 72 = 0x48
    HMDEventCounterGroup *_homeManagerMessagesGroup;	// 80 = 0x50
    CDUnknownBlockType _dateFactory;	// 88 = 0x58
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x00100000002281c3
- (void).cxx_destruct;	// IMP=0x0000000000227c55
@property(copy) CDUnknownBlockType dateFactory; // @synthesize dateFactory=_dateFactory;
@property _Bool isPrimaryResident; // @synthesize isPrimaryResident=_isPrimaryResident;
@property(readonly, nonatomic) HMDEventCounterGroup *homeManagerMessagesGroup; // @synthesize homeManagerMessagesGroup=_homeManagerMessagesGroup;
@property(readonly, nonatomic) HMDEventCounterGroup *residentSyncGroup; // @synthesize residentSyncGroup=_residentSyncGroup;
@property(readonly) unsigned long long periodicLoggingInterval; // @synthesize periodicLoggingInterval=_periodicLoggingInterval;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)runDailyTask;	// IMP=0x0000000000227b43
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000002279d3
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x0000000000227467
@property double lastRemoteMessageEventsPeriodicSubmissionTime; // @synthesize lastRemoteMessageEventsPeriodicSubmissionTime=_lastRemoteMessageEventsPeriodicSubmissionTime;
@property double lastXPCMessageEventsPeriodicSubmissionTime; // @synthesize lastXPCMessageEventsPeriodicSubmissionTime=_lastXPCMessageEventsPeriodicSubmissionTime;
- (void)handlePrimaryResidentChangedNotification:(id)arg1;	// IMP=0x00000000002272b1
- (void)_handleXPCMessageCounterLogEvent:(id)arg1;	// IMP=0x000000000022700a
- (void)_updateResidentSyncCountersWithRemoteMessageLogEvent:(id)arg1;	// IMP=0x0000000000227004
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)arg1 peerInformation:(id)arg2 transportType:(int)arg3 messageDirectionSending:(_Bool)arg4 identifier:(id)arg5;	// IMP=0x0000000000226d67
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)arg1 messageDirectionSending:(_Bool)arg2;	// IMP=0x0000000000226cc2
- (void)_handleRemoteMessageLogEvent:(id)arg1;	// IMP=0x00000000002268ef
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)arg1 peerInformation:(id)arg2;	// IMP=0x000000000022687e
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000002267ea
- (void)submitPeriodicRemoteMessageCountersNow:(double)arg1;	// IMP=0x0000000000226631
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;	// IMP=0x00000000002264f2
- (void)submitPeriodicXPCMessageCountersLogEventsNow:(double)arg1;	// IMP=0x00000000002263a9
- (void)submitPeriodicXPCMessageCountersLogEventsIfNeeded;	// IMP=0x000000000022626a
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x0000000000225e18
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x0000000000225cdb
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x0000000000225b85
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)arg1;	// IMP=0x000000000022574c
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000225476

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

