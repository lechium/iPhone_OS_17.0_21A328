//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKValueRange;

@protocol HKGraphSeriesAxisScalingRule <NSObject>
- (HKValueRange *)noDataStartingRange;
- (HKValueRange *)yValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(long long)arg2;

@optional
- (HKValueRange *)yAxisBounds;
@end

