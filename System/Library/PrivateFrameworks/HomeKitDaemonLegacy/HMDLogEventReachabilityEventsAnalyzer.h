//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager;

__attribute__((visibility("hidden")))
@interface HMDLogEventReachabilityEventsAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0010000000856e05
- (void).cxx_destruct;	// IMP=0x0000000000856df2
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x0000000000856d9d
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x0000000000856c38
- (void)_handleCameraRecordingReachabilityLogEvent:(id)arg1;	// IMP=0x0000000000856b2c
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1;	// IMP=0x0000000000856ae1
- (void)_handleReachabiltiyAddRemoveEvent:(id)arg1;	// IMP=0x0000000000856a96
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000856945
- (id)initWithEventCountersManager:(id)arg1;	// IMP=0x00000000008568d7

@end

