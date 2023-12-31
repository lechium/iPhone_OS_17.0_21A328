//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, GKApplicationStateMonitor, GKReachability, NSCountedSet, NSData, NSDate, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol GKViceroyNATObserver;

@interface GKDataRequestManager : NSObject
{
    NSXPCListener *_publicListener;	// 8 = 0x8
    long long _currentEnvironment;	// 16 = 0x10
    id <GKViceroyNATObserver> _natObserver;	// 24 = 0x18
    NSData *_pushToken;	// 32 = 0x20
    _Bool _receivesMemoryWarnings;	// 40 = 0x28
    _Bool _pushUpdatesBusy;	// 41 = 0x29
    long long _activePushEnvironment;	// 48 = 0x30
    NSDate *_nearbyQueryLastCheckDate;	// 56 = 0x38
    double _nearbyQueryAllowance;	// 64 = 0x40
    APSConnection *_apsConnection;	// 72 = 0x48
    APSConnection *_pushConnectionProd;	// 80 = 0x50
    APSConnection *_pushConnectionDev;	// 88 = 0x58
    NSMutableDictionary *_transactionBag;	// 96 = 0x60
    NSCountedSet *_transactionCounts;	// 104 = 0x68
    GKApplicationStateMonitor *_applicationStateMonitor;	// 112 = 0x70
    NSString *_authenticatingWithSettingsBundleID;	// 120 = 0x78
    GKReachability *_reachability;	// 128 = 0x80
}

+ (id)ratingsQueue;	// IMP=0x002000000017e17d
+ (id)statsQueue;	// IMP=0x001000000017e126
+ (_Bool)allowSelfSignedCertForEnvironment:(long long)arg1;	// IMP=0x0010000000178466
+ (id)syncQueue;	// IMP=0x00100000001753cf
+ (id)pushQueue;	// IMP=0x0010000000175378
+ (id)clientQueue;	// IMP=0x0010000000175367
+ (id)sharedManager;	// IMP=0x0010000000175356
- (void).cxx_destruct;	// IMP=0x001000000017e33e
@property(nonatomic) _Bool pushUpdatesBusy; // @synthesize pushUpdatesBusy=_pushUpdatesBusy;
@property(retain, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSString *authenticatingWithSettingsBundleID; // @synthesize authenticatingWithSettingsBundleID=_authenticatingWithSettingsBundleID;
@property(retain, nonatomic) GKApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(retain, nonatomic) NSCountedSet *transactionCounts; // @synthesize transactionCounts=_transactionCounts;
@property(retain, nonatomic) NSMutableDictionary *transactionBag; // @synthesize transactionBag=_transactionBag;
@property(retain, nonatomic) APSConnection *pushConnectionDev; // @synthesize pushConnectionDev=_pushConnectionDev;
@property(retain, nonatomic) APSConnection *pushConnectionProd; // @synthesize pushConnectionProd=_pushConnectionProd;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property(retain) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property(nonatomic) _Bool receivesMemoryWarnings; // @synthesize receivesMemoryWarnings=_receivesMemoryWarnings;
@property(readonly) long long currentEnvironment; // @synthesize currentEnvironment=_currentEnvironment;
- (id)storeBag;	// IMP=0x001000000017e1d4
- (void)terminate;	// IMP=0x001000000017de9d
- (void)beginTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000017db55
- (void)beginTransaction:(id)arg1;	// IMP=0x001000000017db41
- (void)endTransaction:(id)arg1;	// IMP=0x001000000017d89c
- (void)processIncomingMessage:(id)arg1;	// IMP=0x001000000017d635
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000017cc72
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000017c7cb
- (void)processIncomingTTR:(id)arg1;	// IMP=0x001000000017c7b9
- (void)processIncomingiMessageInvite:(id)arg1;	// IMP=0x001000000017be88
- (void)didReceiveIncomingIDSMessage:(id)arg1;	// IMP=0x001000000017be76
- (void)gameCenterDidBecomeRestricted;	// IMP=0x001000000017bd10
- (void)loadLocalizedGameNameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000017b9aa
- (void)appStateChanged:(id)arg1;	// IMP=0x001000000017b3e0
- (void)terminateClient:(id)arg1;	// IMP=0x001000000017b294
- (void)synchronizeBagWithPreferences;	// IMP=0x001000000017b055
- (id)ampController;	// IMP=0x001000000017b03c
- (void)sendPushTokenWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000017b031
- (void)sendPushTokenWithReplyQueue:(id)arg1;	// IMP=0x001000000017b012
- (void)loadConnectivitySettingsAndStartNATObserver;	// IMP=0x001000000017ab91
- (void)_resetNATObserverWithSettings:(id)arg1;	// IMP=0x001000000017aa09
- (void)updateActivePushEnvironment;	// IMP=0x001000000017a5ad
- (void)_updatePushEnvironmentWithStoreBag:(id)arg1;	// IMP=0x001000000017a269
@property(retain) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)_setPushToken:(id)arg1;	// IMP=0x0010000000179ddd
@property long long activePushEnvironment; // @synthesize activePushEnvironment=_activePushEnvironment;
- (void)_setActivePushEnvironment:(long long)arg1;	// IMP=0x001000000017987c
- (void)getValidNATTypeWithForceRelay:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001797a6
@property(readonly) unsigned long long natType;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000017867d
- (void)resetEnvironment;	// IMP=0x0010000000178480
@property(readonly, nonatomic) long long preferredEnvironment;
- (void)dealloc;	// IMP=0x001000000017835e
- (void)clearPushEnvironment;	// IMP=0x0010000000178285
- (void)_clearPushConnections;	// IMP=0x0010000000177fd9
- (void)updateNotificationTopicsForceFully:(_Bool)arg1;	// IMP=0x0010000000177f6a
- (void)credentialsDidChange:(id)arg1;	// IMP=0x0010000000177f53
- (void)setUpCloudKitNotificationTopics;	// IMP=0x0010000000177f4d
- (void)_updateNotificationTopicsForcefully:(_Bool)arg1;	// IMP=0x001000000017726d
@property(readonly, nonatomic) APSConnection *activePushConnection; // @dynamic activePushConnection;
- (id)pushConnectionForEnvironment:(long long)arg1;	// IMP=0x0010000000177224
- (void)storeBagChanged:(id)arg1;	// IMP=0x0010000000176e89
- (void)finishStartup;	// IMP=0x001000000017596e
- (void)clientProxy:(id)arg1 didRefreshContentsForDataType:(unsigned int)arg2 userInfo:(id)arg3;	// IMP=0x0010000000175968
- (void)reachabilityDidChange:(id)arg1;	// IMP=0x0010000000175922
- (void)iCloudAccountAvailabilityChanged:(id)arg1;	// IMP=0x0010000000175907
- (id)init;	// IMP=0x0010000000175662
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001755fc
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000175426
- (id)updateRequestWithPushToken:(id)arg1;	// IMP=0x00100000000a7075
- (void)clearAllNearbyInvites;	// IMP=0x0010000000174da1
- (void)handleNearbyInviteResponse:(id)arg1;	// IMP=0x001000000017474a
- (void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x00100000001743d1
- (void)presentNearbyInvite:(id)arg1;	// IMP=0x0010000000173782
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000017e763
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x001000000017e3fe
@property(retain, nonatomic) NSMutableSet *removedApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

