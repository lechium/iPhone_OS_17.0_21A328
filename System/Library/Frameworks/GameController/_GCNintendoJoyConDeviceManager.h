//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, _GCNintendoJoyConDevice;
@protocol NSObject><NSCopying><NSSecureCoding, OS_dispatch_queue, _GCPhysicalDeviceRegistry, _GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry;

__attribute__((visibility("hidden")))
@interface _GCNintendoJoyConDeviceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> _deviceRegistry;	// 16 = 0x10
    NSMutableSet *_claimedServices;	// 24 = 0x18
    NSMutableDictionary *_pendingDevices;	// 32 = 0x20
    NSMutableDictionary *_physicalDevices;	// 40 = 0x28
    _GCNintendoJoyConDevice *_pendingJoyCon;	// 48 = 0x30
    NSMutableSet *_fusionGestureDevices;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002f5ec
- (_Bool)acceptFilterConnection:(id)arg1 forHIDService:(id)arg2;	// IMP=0x000000000002f192
- (_Bool)acceptDriverConnection:(id)arg1 forHIDService:(id)arg2;	// IMP=0x000000000002eedb
- (void)relinquishHIDService:(id)arg1;	// IMP=0x000000000002eceb
- (void)_onqueue_relinquishHIDService:(id)arg1;	// IMP=0x000000000002eae5
- (void)claimHIDService:(id)arg1;	// IMP=0x000000000002e31d
- (id)matchHIDService:(id)arg1;	// IMP=0x000000000002e1f6
- (void)_onqueue_registerDefaultConfigurationsForDevice:(id)arg1;	// IMP=0x000000000002e186
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1;	// IMP=0x000000000002df67
- (void)_onqueue_registerDefaultConfigurationForJoyConDevice:(id)arg1;	// IMP=0x000000000002dd33
- (void)_onqueue_tryRegisteringFusionConfigurationWithDevice:(id)arg1;	// IMP=0x000000000002db44
- (void)_onqueue_registerFusionConfigurationWithLeftDevice:(id)arg1 rightDevice:(id)arg2;	// IMP=0x000000000002d8a1
- (void)deactivateLogicalDevice:(id)arg1;	// IMP=0x000000000002d81f
- (void)activateLogicalDevice:(id)arg1;	// IMP=0x000000000002d79c
- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;	// IMP=0x000000000002cf74
@property __weak id <_GCPhysicalDeviceRegistry> deviceRegistry;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier;
- (void)device:(id)arg1 fusionGestureActive:(_Bool)arg2;	// IMP=0x000000000002c6a8
- (id)init;	// IMP=0x000000000002c5ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

