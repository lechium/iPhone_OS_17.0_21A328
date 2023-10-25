//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class MISSING_TYPE;

@interface CSAVCallConnectedMonitor : CSEventMonitor
{
    _Bool _hasConnectedAVCall;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000013bb0a
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x002000000013bb04
- (void)_systemControllerDied:(id)arg1;	// IMP=0x001000000013ba2a
- (void)_startObservingAVCallActiveChange;	// IMP=0x001000000013ba24
- (MISSING_TYPE *)hasConnectedAVCall;	// IMP=0x001000000013ba14
- (void)_stopMonitoring;	// IMP=0x001000000013ba0e
- (void)_handleCallActiveDidChangeNotification:(id)arg1;	// IMP=0x001000000013b9fd
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000013b9c0
- (id)init;	// IMP=0x001000000013b981

@end
