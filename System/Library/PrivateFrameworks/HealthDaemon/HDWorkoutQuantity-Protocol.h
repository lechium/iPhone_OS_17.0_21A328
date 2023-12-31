//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantity, HKQuantitySample, HKQuantityType, NSDateInterval;

@protocol HDWorkoutQuantity
@property(readonly, nonatomic) HKQuantitySample *hdw_sample;
@property(readonly, nonatomic) double hdw_endTimestamp;
@property(readonly, nonatomic) double hdw_startTimestamp;
@property(readonly, nonatomic) NSDateInterval *hdw_dateInterval;
@property(readonly, nonatomic) HKQuantityType *hdw_type;
@property(readonly, nonatomic) HKQuantity *hdw_quantity;
@end

