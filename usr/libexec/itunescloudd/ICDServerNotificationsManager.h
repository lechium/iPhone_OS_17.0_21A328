//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICDServerNotificationsManagerDelegate, OS_dispatch_queue;

@interface ICDServerNotificationsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcStreamHandlerQueue;	// 8 = 0x8
    id <ICDServerNotificationsManagerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000316af
@property(readonly, nonatomic) __weak id <ICDServerNotificationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMusicSettingsChangedNotification;	// IMP=0x00100000000315ec
- (void)_handlePlayActivityFlushInternalTestRequestNotification;	// IMP=0x00100000000315a0
- (void)_handleFamilyContentDeletionNotification:(id)arg1 streamEvent:(id)arg2;	// IMP=0x001000000003135c
- (void)_handleApplicationRegistration:(_Bool)arg1 notificationName:(id)arg2 streamEvent:(id)arg3;	// IMP=0x001000000003108c
- (void)_handleCloudAuthenticationDidChangeNotification;	// IMP=0x0010000000030fdf
- (void)_handleLibraryAuthServiceTokenDidChangeNotification:(id)arg1;	// IMP=0x0010000000030f1c
- (void)_handleAllowsMusicVideosChangedNotification:(id)arg1;	// IMP=0x0010000000030eb1
- (void)_handleAllowsExplicitContentChangedNotification:(id)arg1;	// IMP=0x0010000000030e46
- (void)_handleHandlerCoordinatorDidFinishInitialization:(id)arg1;	// IMP=0x0010000000030d83
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000030cc0
- (void)_handleActiveUserIdentityDidChangeNotification:(id)arg1;	// IMP=0x0010000000030bfd
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x0010000000030b3a
- (void)_handleFirstUnlockNotification:(id)arg1;	// IMP=0x0010000000030a8d
- (void)_didReceiveTelephonyCenterNotification:(id)arg1;	// IMP=0x00100000000308f1
- (void)_didReceiveDarwinNotification:(id)arg1;	// IMP=0x0010000000030740
- (void)_didReceiveDistributedNotification:(id)arg1 withStreamEvent:(id)arg2;	// IMP=0x00100000000305bc
- (void)_tearDownNotifications;	// IMP=0x0010000000030559
- (void)_setupNotifications;	// IMP=0x001000000002fff6
- (void)dealloc;	// IMP=0x001000000002ffb8
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000002fefc

@end

