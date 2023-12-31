//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriWellnessIntents/NSObject-Protocol.h>

@class LogBloodPressureIntent;

@protocol LogBloodPressureIntentHandling <NSObject>
- (void)handleLogBloodPressure:(LogBloodPressureIntent *)arg1 completion:(void (^)(LogBloodPressureIntentResponse *))arg2;

@optional
- (void)confirmLogBloodPressure:(LogBloodPressureIntent *)arg1 completion:(void (^)(LogBloodPressureIntentResponse *))arg2;
@end

