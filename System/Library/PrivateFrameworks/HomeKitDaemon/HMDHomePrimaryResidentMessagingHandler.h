//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFFuture, HMFMessageDispatcher, NSError, NSMapTable, NSNotificationCenter, NSString, NSUUID;
@protocol HMDResidentDeviceManager, HMFTimerManager;

__attribute__((visibility("hidden")))
@interface HMDHomePrimaryResidentMessagingHandler : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    id <HMDResidentDeviceManager> _residentDeviceManager;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
    id <HMFTimerManager> _timerManager;	// 56 = 0x38
    NSMapTable *_pendingMessages;	// 64 = 0x40
    NSError *_cancelError;	// 72 = 0x48
    HMFFuture *_discoveryFuture;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x0010000000054452
- (void).cxx_destruct;	// IMP=0x0000000000053c77
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
- (void)timerManager:(id)arg1 didFireForTimerContext:(id)arg2;	// IMP=0x0000000000053885
- (void)handleResidentUpdated:(id)arg1;	// IMP=0x00000000000534ba
- (void)handlePrimaryResidentUpdated:(id)arg1;	// IMP=0x0000000000053242
- (void)_processPendingMessagesWithPrimaryResidentDevice:(id)arg1;	// IMP=0x0000000000052492
- (void)residentDeviceManager:(id)arg1 didCompleteDiscoveryWithPrimaryResidentDevice:(id)arg2 error:(id)arg3;	// IMP=0x0000000000052268
- (void)_discoverPrimaryResident;	// IMP=0x0000000000052246
- (CDUnknownBlockType)_responseHandlerForRequestMessage:(id)arg1;	// IMP=0x0000000000052151
- (void)_sendMessage:(id)arg1 toPrimaryResidentDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000051e06
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000051586
- (id)initWithMessageDispatcher:(id)arg1 homeUUID:(id)arg2 residentDeviceManager:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000051374
- (id)initWithMessageDispatcher:(id)arg1 homeUUID:(id)arg2 residentDeviceManager:(id)arg3;	// IMP=0x00000000000512d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

