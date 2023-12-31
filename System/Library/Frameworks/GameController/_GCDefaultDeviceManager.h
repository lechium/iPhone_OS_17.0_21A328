//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol NSObject><NSCopying><NSSecureCoding, OS_dispatch_queue, _GCDefaultDeviceManagerDelegate, _GCDeviceMatchingFilter, _GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry;

__attribute__((visibility("hidden")))
@interface _GCDefaultDeviceManager : NSObject
{
    NSNumber *_probeScore;	// 8 = 0x8
    id <_GCDeviceMatchingFilter> _matchingFilter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableSet *_claimedServices;	// 32 = 0x20
    NSMutableDictionary *_physicalDevices;	// 40 = 0x28
    NSMutableDictionary *_hiddenPhysicalDevices;	// 48 = 0x30
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 56 = 0x38
    id <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> _deviceRegistry;	// 64 = 0x40
    id <_GCDefaultDeviceManagerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000036124
@property(nonatomic) __weak id <_GCDefaultDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> deviceRegistry; // @synthesize deviceRegistry=_deviceRegistry;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (_Bool)acceptFilterConnection:(id)arg1 forHIDService:(id)arg2;	// IMP=0x0000000000035e96
- (_Bool)acceptDriverConnection:(id)arg1 forHIDService:(id)arg2;	// IMP=0x0000000000035c6a
- (void)relinquishHIDService:(id)arg1;	// IMP=0x0000000000035a7a
- (void)_onqueue_relinquishHIDDevice:(id)arg1;	// IMP=0x00000000000353ac
- (void)_onqueue_registerPhysicalDevice:(id)arg1 serviceInfo:(id)arg2 checkForDuplicateDevice:(_Bool)arg3;	// IMP=0x00000000000351e6
- (void)claimHIDService:(id)arg1;	// IMP=0x0000000000034e07
- (void)_onqueue_checkAndHideDuplicateDevice:(id)arg1;	// IMP=0x0000000000034aac
- (id)matchHIDService:(id)arg1;	// IMP=0x0000000000034a73
- (void)refreshPhysicalDeviceConfiguration:(id)arg1;	// IMP=0x0000000000034704
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1 replaceExisting:(_Bool)arg2;	// IMP=0x000000000003451a
- (id)configurationIdentifierForDevice:(id)arg1;	// IMP=0x000000000003448a
- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;	// IMP=0x0000000000033f1a
- (id)initWithIdentifier:(id)arg1 matchingFilter:(id)arg2 probeScore:(id)arg3;	// IMP=0x0000000000033cfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

