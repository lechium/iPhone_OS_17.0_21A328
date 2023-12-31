//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SpringBoardUtility : NSObject
{
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDictionary *_enabledRemoteNotificationTypes;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    long long _observeAllIdentifiersCount;	// 40 = 0x28
    NSCountedSet *_observedApplicationIdentifiers;	// 48 = 0x30
    NSMutableArray *_pendingAlerts;	// 56 = 0x38
    SSXPCConnection *_pluginConnection;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_pluginConnectionTimeout;	// 72 = 0x48
    NSMutableArray *_pluginDeferredBlocks;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_springBoardQueue;	// 88 = 0x58
    NSMutableDictionary *_stateCache;	// 96 = 0x60
}

+ (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0040000000157775
+ (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x0010000000156e44
+ (void)testPluginAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000156169
+ (void)testLockscreenAccountSheetWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000156101
+ (void)testBadgingWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000155e80
+ (void)registerPluginConnectionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000155e17
+ (void)restartApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000155cd8
+ (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000155bfd
+ (void)dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000155b44
+ (id)sharedInstance;	// IMP=0x00100000001526e9
- (void).cxx_destruct;	// IMP=0x002000000015805e
- (void)_timeoutPluginConnection;	// IMP=0x0010000000157e8a
- (void)_setApplicationStatesWithDictionary:(id)arg1;	// IMP=0x0010000000157c02
- (void)_setApplicationState:(unsigned int)arg1 forClientID:(id)arg2;	// IMP=0x00100000001579d2
- (void)_requestPluginConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001572d6
- (void)_registerPluginConnectionWithMessage:(id)arg1;	// IMP=0x0010000000156e5b
- (_Bool)_getProcessID:(int *)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x0010000000156dc7
- (id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2;	// IMP=0x0010000000156bb2
- (void)_fireDeferredPluginBlocksWithConnection:(id)arg1;	// IMP=0x00100000001569ad
- (void)_disconnectPluginConnection:(id)arg1;	// IMP=0x0010000000156718
- (id)_applicationStateMonitor;	// IMP=0x0010000000156560
- (void)sendPluginMessage:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001563c2
- (void)sendPluginMessage:(id)arg1;	// IMP=0x0010000000156318
- (void)_dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001557b2
- (void)wakeAppUsingRequest:(id)arg1;	// IMP=0x0010000000154aa5
- (void)suspendFrontApplication;	// IMP=0x0010000000154a9b
- (void)setBadgeValue:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x001000000015477e
- (void)resetEnabledRemoteNotificationTypes;	// IMP=0x0010000000154718
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)arg1;	// IMP=0x00100000001543a0
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;	// IMP=0x00100000001542b1
- (_Bool)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000154077
@property(readonly, getter=isScreenLocked) _Bool screenLocked;
@property(readonly) NSString *frontmostClientIdentifier;
- (void)endGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x0010000000153a06
- (void)endGeneratingStateChangeNotifications;	// IMP=0x0010000000153878
- (id)copyBundleInfoValueForKey:(id)arg1 PID:(int)arg2;	// IMP=0x00100000001536b4
- (void)beginGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x0010000000153342
- (void)beginGeneratingStateChangeNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000152fc5
- (unsigned int)applicationStateForIdentifier:(id)arg1;	// IMP=0x0010000000152d83
- (void)activateAlertWithDescription:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000152776
- (void)dealloc;	// IMP=0x001000000015266e
- (id)init;	// IMP=0x00100000001525ab

@end

