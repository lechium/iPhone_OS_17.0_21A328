//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/HKSPPersistentStateMachineDelegate-Protocol.h>

@class NSDate;

@protocol HDSPTimeAsleepTrackerStateMachineDelegate <HKSPPersistentStateMachineDelegate>
- (void)notifyForActivityDetectedOnDate:(NSDate *)arg1;
- (void)stopAppLaunchDetection;
- (void)startAppLaunchDetection;
- (void)stopActivityDetection;
- (void)startActivityDetection;
- (void)endSleepTrackingSessionWithReason:(unsigned long long)arg1;
- (void)startSleepTrackingSessionWithReason:(unsigned long long)arg1;
@end

