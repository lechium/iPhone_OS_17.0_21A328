//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDeviceBattery, GCHapticCapabilityGraph, NSMapTable, NSSet, NSString, _GCDeviceConfiguration, _GCNintendoJoyConDevice;
@protocol GCSSettingsStoreService, NSObject><NSCopying><NSSecureCoding, _GCDeviceManager, _GCDriverClientHapticInterface, _GCGamepadEventSourceDescription;

__attribute__((visibility("hidden")))
@interface _GCNintendoFusedJoyConDevice : NSObject
{
    NSMapTable *_clients;	// 8 = 0x8
    long long _indicatedPlayerIndex;	// 16 = 0x10
    NSMapTable *_clientPlayerIndicatorEndpoints;	// 24 = 0x18
    GCDeviceBattery *_battery;	// 32 = 0x20
    NSMapTable *_clientBatteryEndpoints;	// 40 = 0x28
    id <GCSSettingsStoreService> _settingsStore;	// 48 = 0x30
    NSMapTable *_clientSettingsEndpoints;	// 56 = 0x38
    GCHapticCapabilityGraph *_hapticCapabilityGraph;	// 64 = 0x40
    id <_GCDeviceManager> _manager;	// 72 = 0x48
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 80 = 0x50
    _GCDeviceConfiguration *_configuration;	// 88 = 0x58
    _GCNintendoJoyConDevice *_leftDevice;	// 96 = 0x60
    _GCNintendoJoyConDevice *_rightDevice;	// 104 = 0x68
    id <_GCDriverClientHapticInterface> _hapticDriver;	// 112 = 0x70
}

+ (id)identifierForFusedJoyConDeviceWithLeftDevice:(id)arg1 rightDevice:(id)arg2;	// IMP=0x001000000005cb9b
- (void).cxx_destruct;	// IMP=0x000000000005ccc7
@property(readonly, nonatomic) id <_GCDriverClientHapticInterface> hapticDriver; // @synthesize hapticDriver=_hapticDriver;
@property(readonly, nonatomic) _GCNintendoJoyConDevice *rightDevice; // @synthesize rightDevice=_rightDevice;
@property(readonly, nonatomic) _GCNintendoJoyConDevice *leftDevice; // @synthesize leftDevice=_leftDevice;
@property(retain, nonatomic) _GCDeviceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property(readonly) __weak id <_GCDeviceManager> manager; // @synthesize manager=_manager;
- (void)deactivate;	// IMP=0x000000000005cb95
- (void)activateLogical;	// IMP=0x000000000005cb50
@property(readonly) NSSet *underlyingDevices;
- (id)propertyForKey:(id)arg1;	// IMP=0x000000000005caa0
@property(readonly) NSSet *components;
- (void)playerIndicatorXPCProxyServerEndpoint:(id)arg1 didReceivePlayerIndexChange:(long long)arg2;	// IMP=0x000000000005c92e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005c86e
- (void)dealloc;	// IMP=0x000000000005c7a9
- (id)init;	// IMP=0x000000000005c77e
- (id)initWithLeft:(id)arg1 right:(id)arg2 manager:(id)arg3;	// IMP=0x000000000005c2bf
- (id)makeControllerForClient:(id)arg1;	// IMP=0x000000000005d0d0
- (void)_removeClient:(id)arg1;	// IMP=0x000000000005cfa9
- (void)_addClient:(id)arg1;	// IMP=0x000000000005cd66
@property(readonly, nonatomic) GCDeviceBattery *battery;
- (void)_propagateBattery;	// IMP=0x000000000005faca
- (void)_refreshBattery;	// IMP=0x000000000005f9d2
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryServiceConnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryComponentBatteryUpdatedHandler;
@property long long indicatedPlayerIndex;
@property(readonly) id <_GCGamepadEventSourceDescription> gamepadEventSource;
- (id)persistentIdentifierForSettings;	// IMP=0x000000000005ff71
- (void)settingsDidChange;	// IMP=0x000000000005fc36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

