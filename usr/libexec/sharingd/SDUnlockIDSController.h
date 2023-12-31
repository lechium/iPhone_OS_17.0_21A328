//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSService, MISSING_TYPE, NSHashTable, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface SDUnlockIDSController
{
    IDSService *_autoUnlockService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serviceQueue;	// 16 = 0x10
    IDSService *_idsService;	// 24 = 0x18
    IDSService *_idsServiceClassA;	// 32 = 0x20
    NSMutableDictionary *_errorHandlers;	// 40 = 0x28
    MISSING_TYPE *_delegates;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x002000000001e04d
- (void).cxx_destruct;	// IMP=0x00200000000202f7
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain) NSMutableDictionary *errorHandlers; // @synthesize errorHandlers=_errorHandlers;
@property(retain) IDSService *idsServiceClassA; // @synthesize idsServiceClassA=_idsServiceClassA;
@property(retain) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
- (id)autoUnlockService;	// IMP=0x001000000002024f
- (id)dataClassStringForDataClass:(long long)arg1;	// IMP=0x0010000000020224
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002015e
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000001fd04
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000001fb1d
- (void)serviceSpaceDidBecomeAvailable:(id)arg1;	// IMP=0x001000000001f96a
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x001000000001f750
- (id)autoUnlockDeviceForIDSDevice:(id)arg1;	// IMP=0x001000000001f1e1
@property(readonly, copy, nonatomic) NSSet *autoUnlockEligibleDevices;
- (void)updateSendOptions:(id)arg1;	// IMP=0x001000000001ed6b
- (void)removeDelegate:(id)arg1;	// IMP=0x001000000001ec62
- (void)addDelegate:(id)arg1;	// IMP=0x001000000001eb59
- (void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 dataClass:(long long)arg5 queueOneID:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000001e59a
- (void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 queueOneID:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000001e56e
- (void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001e552
- (id)activeIDSDevice;	// IMP=0x001000000001e3f4
- (_Bool)isDefaultPairedDeviceNearby;	// IMP=0x001000000001e1fa
- (_Bool)hasDefaultDevice;	// IMP=0x001000000001e0a2
- (id)init;	// IMP=0x001000000001de67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

