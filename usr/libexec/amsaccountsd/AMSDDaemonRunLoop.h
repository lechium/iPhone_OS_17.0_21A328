//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface AMSDDaemonRunLoop : NSObject
{
    struct os_unfair_lock_s _connectionsLock;	// 8 = 0x8
    NSMutableSet *_connections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000159f6
@property(readonly, nonatomic) struct os_unfair_lock_s connectionsLock; // @synthesize connectionsLock=_connectionsLock;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
- (void)_startXPC;	// IMP=0x001000000001593c
- (void)_setupAccountDataSync;	// IMP=0x00100000000158dc
- (void)_setupPollJobs;	// IMP=0x0010000000015882
- (void)_setupNotifications;	// IMP=0x00100000000153f6
- (void)_setupMultiUser;	// IMP=0x00100000000153f0
- (id)_previousBuildVersion;	// IMP=0x001000000001539b
- (void)_handleNFCAccessoryNotification:(id)arg1;	// IMP=0x001000000001517c
- (void)_handleBiometricsProvisioningNotification;	// IMP=0x0010000000014f2d
- (_Bool)_performStartup;	// IMP=0x0010000000014a31
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000143af
- (void)runUntilIdleExit;	// IMP=0x00100000000141fd
- (id)init;	// IMP=0x00100000000141a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

