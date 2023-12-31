//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;
@protocol MTSXPCConnection;

__attribute__((visibility("hidden")))
@interface MTSXPCServerProxy : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSUUID *_UUID;	// 16 = 0x10
    CDUnknownBlockType _connectionFactory;	// 24 = 0x18
    id <MTSXPCConnection> _connection;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000031da4
- (void).cxx_destruct;	// IMP=0x0000000000031103
@property(retain, nonatomic) id <MTSXPCConnection> connection; // @synthesize connection=_connection;
@property(readonly) CDUnknownBlockType connectionFactory; // @synthesize connectionFactory=_connectionFactory;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)logIdentifier;	// IMP=0x0000000000031073
- (void)showRestrictedCharacteristicsAccessWarningAlert;	// IMP=0x0000000000030fcf
- (void)checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030ef0
- (void)removeSystemCommissionerPairingWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030df9
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030d1a
- (void)performDeviceSetupUsingRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030c23
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030b2c
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(id)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030a2b
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030934
- (void)removeDevicePairingWithUUID:(id)arg1 forSystemCommissionerPairingUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030819
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030722
- (void)invalidate;	// IMP=0x0000000000030493
- (void)dealloc;	// IMP=0x0000000000030417
- (id)initWithConnectionFactory:(CDUnknownBlockType)arg1;	// IMP=0x000000000003034b
- (id)init;	// IMP=0x0000000000030332

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

