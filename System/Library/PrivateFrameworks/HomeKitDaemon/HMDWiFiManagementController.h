//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, HMDService, HMDWiFiReconfigurationLogEvent, HMFTimer, NSNotificationCenter, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDWiFiManagementController : HMFObject
{
    unsigned short _reconfigurationCookie;	// 8 = 0x8
    HMDHAPAccessory *_accessory;	// 16 = 0x10
    HMDService *_service;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    long long _reconfigurationState;	// 40 = 0x28
    HMFTimer *_reconfigurationTimeoutTimer;	// 48 = 0x30
    CDUnknownBlockType _reconfigurationVerificationCallback;	// 56 = 0x38
    CDUnknownBlockType _reconfigurationCompletion;	// 64 = 0x40
    HMDWiFiReconfigurationLogEvent *_reconfigurationLogEvent;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000004d05a7
+ (id)sharedPSKForNetworkWithSSID:(id)arg1;	// IMP=0x00100000004d0334
- (void).cxx_destruct;	// IMP=0x00000000004ce380
@property(retain, nonatomic) HMDWiFiReconfigurationLogEvent *reconfigurationLogEvent; // @synthesize reconfigurationLogEvent=_reconfigurationLogEvent;
@property(copy, nonatomic) CDUnknownBlockType reconfigurationCompletion; // @synthesize reconfigurationCompletion=_reconfigurationCompletion;
@property(copy, nonatomic) CDUnknownBlockType reconfigurationVerificationCallback; // @synthesize reconfigurationVerificationCallback=_reconfigurationVerificationCallback;
@property(retain, nonatomic) HMFTimer *reconfigurationTimeoutTimer; // @synthesize reconfigurationTimeoutTimer=_reconfigurationTimeoutTimer;
@property(nonatomic) unsigned short reconfigurationCookie; // @synthesize reconfigurationCookie=_reconfigurationCookie;
@property(nonatomic) long long reconfigurationState; // @synthesize reconfigurationState=_reconfigurationState;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDService *service; // @synthesize service=_service;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
- (id)logIdentifier;	// IMP=0x00000000004ce219
- (void)_performWiFiConfigurationControlRequest:(id)arg1 withDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004cdb62
- (void)_reconfigurationCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000004cd935
- (void)_commitConfigurationUpdate;	// IMP=0x00000000004cd7fc
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004cd65b
- (void)_accessoryDidBecomeReachable:(id)arg1;	// IMP=0x00000000004cd5ea
- (void)safelyReconfigureWithSSID:(id)arg1 PSK:(id)arg2 verificationCallback:(CDUnknownBlockType)arg3 logEvent:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000004cd47e
- (void)reconfigureWithSSID:(id)arg1 PSK:(id)arg2 logEvent:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004cd340
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly) _Bool supportsStationConfiguration;
@property(readonly) long long capabilities;
- (id)initWithAccessory:(id)arg1 wiFiTransportService:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000004cd1db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

