//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeartHealthDaemon/NSObject-Protocol.h>

@class HKQuantity, NSDate;

@protocol HKHRCardioFitnessStoreServer <NSObject>
- (void)remote_saveCardioFitnessAlertWithValue:(HKQuantity *)arg1 threshold:(HKQuantity *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 options:(unsigned long long)arg5 completion:(void (^)(_Bool, NSError *))arg6;
@end
