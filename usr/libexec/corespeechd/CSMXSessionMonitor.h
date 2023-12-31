//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMXSessionMonitor : CSEventMonitor
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000001384f8
- (void).cxx_destruct;	// IMP=0x00200000001384e5
- (void)_querySomeClientIsActive;	// IMP=0x00100000001384df
- (void)_handleSomeClientIsActiveDidChangeNotification:(id)arg1;	// IMP=0x00100000001384d9
- (void)_systemControllerDied:(id)arg1;	// IMP=0x00100000001384d3
- (void)_startObservingSomeClientIsActive;	// IMP=0x00100000001384cd
- (void)_startObservingAVSystemControllerLifecycle;	// IMP=0x00100000001384c7
- (void)_stopMonitoring;	// IMP=0x00100000001384c1
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000001384bb
- (id)init;	// IMP=0x001000000013845c

@end

