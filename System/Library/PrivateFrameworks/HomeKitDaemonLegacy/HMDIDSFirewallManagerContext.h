//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDIDSFirewallManager, IDSFirewall, NSNotificationCenter, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDIDSFirewallManagerContext : HMFObject
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
    IDSFirewall *_firewall;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
    HMDIDSFirewallManager *_firewallManager;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x001000000052512e
- (void).cxx_destruct;	// IMP=0x0000000000524826
@property __weak HMDIDSFirewallManager *firewallManager; // @synthesize firewallManager=_firewallManager;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) IDSFirewall *firewall; // @synthesize firewall=_firewall;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)addFirewallEntries:(id)arg1;	// IMP=0x00000000005246d8
- (void)replaceFireWallEntries:(id)arg1;	// IMP=0x0000000000524612
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x000000000052455a
- (void)handleHomeUserAddedNotification:(id)arg1;	// IMP=0x00000000005244a2
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x00000000005243ea
- (void)handleHomeAddedNotification:(id)arg1;	// IMP=0x0000000000524379
- (void)registerForHomeUserNotifications;	// IMP=0x0000000000524217
- (void)configure;	// IMP=0x0000000000524077
- (id)initWithHomeManager:(id)arg1 IDSFirewall:(id)arg2 notificationCenter:(id)arg3 workQueue:(id)arg4;	// IMP=0x0000000000523f8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

