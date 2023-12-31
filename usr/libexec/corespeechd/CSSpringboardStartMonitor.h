//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSString;

@interface CSSpringboardStartMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSpringBoardStarted;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00200000000b28a2
- (_Bool)_checkSpringBoardStarted;	// IMP=0x00200000000b271b
- (_Bool)isSpringboardStarted;	// IMP=0x00100000000b270b
- (_Bool)isSystemShellStarted;	// IMP=0x00100000000b26f9
- (void)_notifyObserver:(id)arg1 withStarted:(_Bool)arg2;	// IMP=0x00100000000b268f
- (void)_didReceiveSpringboardStarted:(_Bool)arg1;	// IMP=0x00100000000b263d
- (void)_didReceiveSpringboardStartedInQueue:(_Bool)arg1;	// IMP=0x00100000000b25eb
- (void)_stopMonitoring;	// IMP=0x00100000000b2548
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000b23fd
- (id)init;	// IMP=0x00100000000b23b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

