//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlaybackEngineEnvironmentConsumer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _reachability;	// 16 = 0x10
    MPCPlaybackEngine *_playbackEngine;	// 24 = 0x18
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 32 = 0x20
}

+ (id)identifier;	// IMP=0x00100000002147fc
- (void).cxx_destruct;	// IMP=0x0000000000214572
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_snapshotNetworkTypeAtTime:(CDStruct_aee2c4da)arg1;	// IMP=0x000000000021427d
- (void)_snapshotNetworkTypeWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x00000000002141a8
- (void)_snapshotNetworkReachabilityAtTime:(CDStruct_aee2c4da)arg1 force:(_Bool)arg2;	// IMP=0x0000000000213f83
- (void)_snapshotNetworkReachabilityWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x0000000000213ea9
- (void)_snapshotDeviceAtTime:(CDStruct_aee2c4da)arg1;	// IMP=0x0000000000213508
- (void)_snapshotDeviceWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x0000000000213433
- (void)_snapshotAccount:(id)arg1 eventType:(id)arg2 atTime:(CDStruct_aee2c4da)arg3;	// IMP=0x0000000000212d73
- (void)_snapshotAccount:(id)arg1 eventType:(id)arg2 event:(id)arg3 nudge:(int)arg4;	// IMP=0x0000000000212c5f
- (void)_addEventForAccountIdentifier:(id)arg1 cursor:(id)arg2 event:(id)arg3 nudge:(int)arg4;	// IMP=0x0000000000212a95
- (void)_allowsExplicitContentDidChange:(id)arg1;	// IMP=0x0000000000212890
- (void)_devicePrivateListeningDidChange:(id)arg1;	// IMP=0x00000000002127ba
- (void)_applicationWillTerminate:(id)arg1;	// IMP=0x0000000000212715
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x00000000002126a2
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000021262f
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x0000000000212559
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x0000000000212481
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x00000000002123e0
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000002120a1
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;	// IMP=0x0000000000211e49
- (void)dealloc;	// IMP=0x0000000000211dd4
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x0000000000211d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

