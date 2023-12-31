//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHAPAccessory, HMDHome, HMDNetworkRouterController, NSMutableSet, NSNotificationCenter, NSString;
@protocol HMDNetworkRouterFirewallRuleManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _started;	// 12 = 0xc
    _Bool _managedNetworkEnabled;	// 13 = 0xd
    _Bool _staleClientIdentifiersResetNeeded;	// 14 = 0xe
    _Bool _staleClientIdentifiersResetInProgress;	// 15 = 0xf
    _Bool _startPending;	// 16 = 0x10
    HMDHAPAccessory *_networkRouterAccessory;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    id <HMDNetworkRouterFirewallRuleManager> _firewallRuleManager;	// 48 = 0x30
    NSMutableSet *_accessoriesInReconfiguration;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000097ade4
- (void).cxx_destruct;	// IMP=0x00000000009754a0
@property(readonly) NSMutableSet *accessoriesInReconfiguration; // @synthesize accessoriesInReconfiguration=_accessoriesInReconfiguration;
@property(nonatomic) _Bool startPending; // @synthesize startPending=_startPending;
@property(nonatomic) _Bool staleClientIdentifiersResetInProgress; // @synthesize staleClientIdentifiersResetInProgress=_staleClientIdentifiersResetInProgress;
@property(nonatomic) _Bool staleClientIdentifiersResetNeeded; // @synthesize staleClientIdentifiersResetNeeded=_staleClientIdentifiersResetNeeded;
@property(nonatomic) _Bool managedNetworkEnabled; // @synthesize managedNetworkEnabled=_managedNetworkEnabled;
@property(readonly) id <HMDNetworkRouterFirewallRuleManager> firewallRuleManager; // @synthesize firewallRuleManager=_firewallRuleManager;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSString *description;
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x0000000000975351
- (id)_transactionBlockForAccessoriesWithStaleClientIdentifier;	// IMP=0x0000000000974f69
- (void)_unregisterForNetworkProtectionChangesToGroup:(id)arg1;	// IMP=0x0000000000974e0b
- (void)_registerForNetworkProtectionChangesToGroup:(id)arg1;	// IMP=0x0000000000974ca6
- (void)_deregisterForChangesToManagedAccessory:(id)arg1;	// IMP=0x0000000000974bc7
- (void)_registerForChangesToManagedAccessory:(id)arg1;	// IMP=0x0000000000974ada
- (void)_fetchFirewallRulesForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009747b9
- (void)_getNetworkConfigurationForAccessory:(id)arg1 targetProtectionMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000974658
- (void)_migrateAccessory:(id)arg1 withConfiguration:(id)arg2 clientStatus:(id)arg3 fromCredentialType:(long long)arg4 toCredentialType:(long long)arg5 rotate:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000973b32
- (void)_updateClientConfiguration:(id)arg1 forAccessory:(id)arg2 protectionMode:(long long)arg3 clientStatus:(id)arg4 skipIfFingerprintMatches:(_Bool)arg5 clientReconfigurationAllowed:(_Bool)arg6;	// IMP=0x00000000009739d9
- (void)_updateExistingClientConfiguration:(id)arg1 forAccessory:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(_Bool)arg4;	// IMP=0x00000000009736ac
- (void)_updateOrCreateClientConfigurationForAccessory:(id)arg1 preferReconcile:(_Bool)arg2 clientReconfigurationAllowed:(_Bool)arg3;	// IMP=0x00000000009733d2
- (void)_updateClientConfigurationForAllAccessoriesWithClientReconfigurationAllowed:(_Bool)arg1;	// IMP=0x0000000000973214
- (void)_createClientConfigurationForAccessory:(id)arg1 credential:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(_Bool)arg4;	// IMP=0x0000000000972f94
- (void)_replaceClientConfigurationForAccessory:(id)arg1 credential:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(_Bool)arg4;	// IMP=0x0000000000972cdf
- (void)_replaceNetworkClientIdentifierForAccessory:(id)arg1 networkClientIdentifier:(id)arg2 networkRouterUUID:(id)arg3 clientStatus:(id)arg4 clientReconfigurationAllowed:(_Bool)arg5;	// IMP=0x00000000009729f0
- (void)_reconcileClientConfigurationForAccessory:(id)arg1 clientStatus:(id)arg2 networkRouterUUID:(id)arg3 clientReconfigurationAllowed:(_Bool)arg4;	// IMP=0x0000000000972362
- (void)_reconcileClientConfigurationForReachableAccessory:(id)arg1 clientReconfigurationAllowed:(_Bool)arg2;	// IMP=0x0000000000971d56
- (void)_startManagingAccessory:(id)arg1 initialHomeSetup:(_Bool)arg2;	// IMP=0x0000000000971b9d
- (void)handleFirewallRulesUpdated:(id)arg1;	// IMP=0x0000000000971ae5
- (void)handleHomeNetworkProtectionChanged:(id)arg1;	// IMP=0x0000000000971a2d
- (void)handleNetworkProtectionGroupProtectionChanged:(id)arg1;	// IMP=0x0000000000971975
- (void)handleNetworkProtectionGroupDeactivated:(id)arg1;	// IMP=0x00000000009718bd
- (void)handleNetworkProtectionGroupActivated:(id)arg1;	// IMP=0x0000000000971805
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x000000000097174d
- (void)handleAccessoryFirmwareVersionUpdated:(id)arg1;	// IMP=0x0000000000971695
- (void)handleAccessoryRemoved:(id)arg1;	// IMP=0x00000000009715dd
- (void)handleAccessoryAdded:(id)arg1;	// IMP=0x0000000000971525
- (void)_handleRouterAccessoryReachable:(id)arg1;	// IMP=0x000000000097124e
- (void)handleRouterAccessoryReachable:(id)arg1;	// IMP=0x0000000000971196
- (void)_stop;	// IMP=0x0000000000970f5a
- (void)_start;	// IMP=0x000000000097085e
- (void)_resetStaleClientIdentifiersBeforeStart;	// IMP=0x0000000000970522
- (void)_evaluateManagement;	// IMP=0x00000000009702c2
- (void)__deregisterForNetworkRouterAccessoryReachable:(id)arg1;	// IMP=0x0000000000970250
- (void)__registerForNetworkRouterAccessoryReachable:(id)arg1;	// IMP=0x00000000009701d7
@property(readonly) __weak HMDHome *home;
@property __weak HMDHAPAccessory *networkRouterAccessory; // @synthesize networkRouterAccessory=_networkRouterAccessory;
@property(nonatomic) _Bool started; // @synthesize started=_started;
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1;	// IMP=0x000000000096fe86
@property(readonly) HMDNetworkRouterController *routerController;
- (void)migrateAccessory:(id)arg1 toCredentialType:(long long)arg2 rotate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000096fd42
- (void)replaceActiveNetworkRouterAccessory:(id)arg1;	// IMP=0x000000000096fc8a
- (void)stop;	// IMP=0x000000000096fc19
- (void)evaluateManagement;	// IMP=0x000000000096fba8
- (id)initWithNetworkRouterAccessory:(id)arg1 workQueue:(id)arg2 firewallRuleManager:(id)arg3 notificationCenter:(id)arg4;	// IMP=0x000000000096f8fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

