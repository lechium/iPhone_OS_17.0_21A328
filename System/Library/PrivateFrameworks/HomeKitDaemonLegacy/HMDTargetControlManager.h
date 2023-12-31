//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDSiriServer, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTargetControlManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDAccessory *_targetAccessory;	// 16 = 0x10
    NSMutableArray *_configuredControllers;	// 24 = 0x18
    NSMutableArray *_activeControlServices;	// 32 = 0x20
    NSMutableArray *_eventReceivers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSString *_logID;	// 56 = 0x38
    HMDSiriServer *_siriServer;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000061136a
- (void).cxx_destruct;	// IMP=0x000000000060e7e4
@property(retain, nonatomic) HMDSiriServer *siriServer; // @synthesize siriServer=_siriServer;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDAccessory *targetAccessory; // @synthesize targetAccessory=_targetAccessory;
- (void)__activeSelectionReset:(id)arg1;	// IMP=0x000000000060e344
- (void)__activeSelectionChanged:(id)arg1;	// IMP=0x000000000060db1a
- (void)_handleTargetControlServiceDeselection:(id)arg1;	// IMP=0x000000000060d8a5
- (void)_handleTargetControlServiceSelection:(id)arg1;	// IMP=0x000000000060d6c7
- (void)_handleControllerDisconnected:(id)arg1;	// IMP=0x000000000060d34c
- (void)_targetAccessoryUnconfiguredWithController:(id)arg1;	// IMP=0x000000000060cc91
- (void)_targetAccessoryConfiguredWithController:(id)arg1;	// IMP=0x000000000060c9e0
- (void)__characteristicsEventsReceived:(id)arg1;	// IMP=0x000000000060c2ca
- (void)_handleButtonEvent:(id)arg1 fromControlService:(id)arg2;	// IMP=0x000000000060b2d1
- (id)__getOrCreateEventReceiver:(id)arg1;	// IMP=0x000000000060acbf
- (void)__serviceRemoved:(id)arg1;	// IMP=0x000000000060ac07
- (void)__accessoryRemoved:(id)arg1;	// IMP=0x000000000060ab4f
- (void)__accessoryAdded:(id)arg1;	// IMP=0x000000000060aa97
- (void)__accessoryDisconnected:(id)arg1;	// IMP=0x000000000060a9df
- (void)__accessoryUnconfigured:(id)arg1;	// IMP=0x000000000060a9cd
- (void)__accessoryConnected:(id)arg1;	// IMP=0x000000000060a915
- (void)__accessoryConfigured:(id)arg1;	// IMP=0x000000000060a903
- (void)__accessoryNameUpdated:(id)arg1;	// IMP=0x000000000060a84b
- (void)__controllerRefreshedConfiguration:(id)arg1;	// IMP=0x000000000060a793
- (void)_targetAccessoryRefreshConfigurationWithController:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000609d08
- (id)__selectButtonConfiguration:(id)arg1 receiver:(id)arg2;	// IMP=0x0000000000609418
- (void)__targetAccessoryUnconfiguredForControl:(id)arg1;	// IMP=0x0000000000609360
- (void)__targetAccessoryConfiguredForControl:(id)arg1;	// IMP=0x00000000006092a8
- (void)addTargetControllers:(id)arg1;	// IMP=0x0000000000608bc8
- (void)removeReceiver:(id)arg1;	// IMP=0x0000000000608b52
- (void)addReceiver:(id)arg1;	// IMP=0x0000000000608adc
@property(readonly, nonatomic) NSMutableArray *eventReceivers; // @synthesize eventReceivers=_eventReceivers;
- (void)removeControlService:(id)arg1;	// IMP=0x0000000000608a06
- (void)addControlService:(id)arg1;	// IMP=0x0000000000608990
@property(readonly, nonatomic) NSMutableArray *activeControlServices; // @synthesize activeControlServices=_activeControlServices;
- (void)_removeController:(id)arg1;	// IMP=0x000000000060880f
- (void)_addController:(id)arg1;	// IMP=0x000000000060868d
@property(readonly, nonatomic) NSMutableArray *configuredControllers; // @synthesize configuredControllers=_configuredControllers;
- (id)logIdentifier;	// IMP=0x000000000060861b
- (void)invalidate;	// IMP=0x000000000060829e
- (id)initWithTargetAccessory:(id)arg1 controllers:(id)arg2;	// IMP=0x000000000060783f
- (id)init;	// IMP=0x0000000000607797

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

