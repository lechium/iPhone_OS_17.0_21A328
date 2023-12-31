//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface PersonalizationManager
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    _Bool _collectingMetrics;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000181d0c
- (void)_handleAnalyticsUsageSwitchChange:(id)arg1;	// IMP=0x0010000000181a42
- (void)decorateMetricsEvent:(id)arg1 context:(id)arg2;	// IMP=0x0010000000181720
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x00100000001816ae
- (id)init;	// IMP=0x001000000017fddb

@end

