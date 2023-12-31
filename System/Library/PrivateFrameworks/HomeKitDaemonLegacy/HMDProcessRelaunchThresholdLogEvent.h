//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDProcessRelaunchThresholdLogEvent : HMMLogEvent
{
    NSNumber *_timeIntervalSincePreviousProcessLaunch;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005b630a
@property(readonly, nonatomic) NSNumber *timeIntervalSincePreviousProcessLaunch; // @synthesize timeIntervalSincePreviousProcessLaunch=_timeIntervalSincePreviousProcessLaunch;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithTimeSincePreviousLaunch:(id)arg1;	// IMP=0x00000000005b616f

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

