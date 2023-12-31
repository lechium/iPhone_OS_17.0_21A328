//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable;

@interface MapsBaseLightMonitor : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    _Bool _monitoring;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000008de3ef
@property(nonatomic, getter=_isMonitoring, setter=_setMonitoring:) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void)_notifyDidChange;	// IMP=0x00100000008de33e
- (void)stopMonitoringWithObserver:(id)arg1;	// IMP=0x00100000008de22a
- (void)startMonitoringWithObserver:(id)arg1;	// IMP=0x00100000008de1f3
- (void)dealloc;	// IMP=0x00100000008de1b3
- (id)init;	// IMP=0x00100000008de13f

@end

