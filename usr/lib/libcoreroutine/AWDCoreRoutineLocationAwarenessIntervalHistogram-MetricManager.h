//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AWDSupportFramework/AWDCoreRoutineLocationAwarenessIntervalHistogram.h>

@class NSString;

@interface AWDCoreRoutineLocationAwarenessIntervalHistogram (MetricManager)
+ (_Bool)checkIntervalHistogramDimensions:(id)arg1;	// IMP=0x0010000000102365
+ (id)_defaultIntervalHistogram;	// IMP=0x00100000001022b9
- (_Bool)valid:(id *)arg1;	// IMP=0x0010000000101fd6
- (long long)metricId;	// IMP=0x0010000000101fcb
- (id)_init;	// IMP=0x0010000000101e84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

