//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager, NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDLogEventErrorEventsAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0010000000bab680
+ (id)eventCounterNameForError:(id)arg1;	// IMP=0x0010000000bab59d
+ (id)errorEventsRequestGroupKeys;	// IMP=0x0010000000bab56d
- (void).cxx_destruct;	// IMP=0x0000000000bab53c
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)runDailyTask;	// IMP=0x0000000000bab508
- (void)resetEventCountersForAllErrorEventRequestGroups;	// IMP=0x0000000000bab2d8
- (void)submitErrorAggregationLogEventsForErrorEventGroup:(id)arg1;	// IMP=0x0000000000bab03d
- (void)submitAllFormattedErrorAggregationLogEvents;	// IMP=0x0000000000baac8e
- (id)currentErrorEventsAnalyzedSummary;	// IMP=0x0000000000baa925
- (void)_handleAdditionalErrorsForCloudShareTrustManagerFailureLogEvent:(id)arg1 logEventUnderlyingErrorGroupName:(id)arg2;	// IMP=0x0000000000baa7dd
- (void)_handleAdditionalErrorsForAccessoryPairingLogEvent:(id)arg1 logEventUnderlyingErrorGroupName:(id)arg2;	// IMP=0x0000000000baa692
- (id)eventCounterRequestGroupNameForLogEvent:(id)arg1;	// IMP=0x0000000000baa183
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000ba9d35
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;	// IMP=0x0000000000ba9c6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

