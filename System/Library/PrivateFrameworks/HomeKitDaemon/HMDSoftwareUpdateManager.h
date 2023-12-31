//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleMediaAccessory, NSHashTable, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateManager : HMFObject
{
    HMDAppleMediaAccessory *_accessory;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    NSHashTable *_activeClients;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x0010000000c39168
- (void).cxx_destruct;	// IMP=0x0000000000c38acd
@property(readonly, nonatomic) NSHashTable *activeClients; // @synthesize activeClients=_activeClients;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x0000000000c389f2
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)startUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c38902
- (void)_handleStop:(id)arg1;	// IMP=0x0000000000c3881d
- (void)_handleStart:(id)arg1;	// IMP=0x0000000000c38647
- (void)registerForMessages;	// IMP=0x0000000000c384f8
- (id)messageDispatcher;	// IMP=0x0000000000c384df
- (id)init;	// IMP=0x0000000000c382cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

