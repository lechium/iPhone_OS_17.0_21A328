//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCSonyDualSenseControllerProfile : NSObject
{
}

+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;	// IMP=0x0010000000059b53
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;	// IMP=0x0010000000059997
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x001000000005993a
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x0010000000059855
+ (void)physicalDevice:(id)arg1 getAdaptiveTriggersStatusesWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000059570
+ (void)physicalDevice:(id)arg1 setAdaptiveTriggersPayload:(id)arg2 forIndex:(int)arg3;	// IMP=0x0010000000058e54
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058bf7
+ (void)physicalDevice:(id)arg1 setSensorsActive:(_Bool)arg2;	// IMP=0x0010000000058baa
+ (void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005897a
+ (_Bool)physicalDeviceSupportsMotion:(id)arg1;	// IMP=0x0010000000058972
+ (void)physicalDevice:(id)arg1 setLight:(id)arg2;	// IMP=0x001000000005886a
+ (void)physicalDevice:(id)arg1 getLightWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000585c7
+ (id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2;	// IMP=0x001000000005854c
+ (id)logicalDevice:(id)arg1 makeControllerInputDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;	// IMP=0x0010000000056935
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x00100000000567d8
+ (id)logicalDeviceControllerDetailedProductCategory:(id)arg1;	// IMP=0x0010000000056702
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x00100000000566ee
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;	// IMP=0x00100000000566d6
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;	// IMP=0x00100000000566be
+ (id)deviceManager;	// IMP=0x0010000000056590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
