//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDHomeLockNotificationManagerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeLockNotificationManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    HMFMessageDispatcher *_msgDispatcher;	// 32 = 0x20
    id <HMDHomeLockNotificationManagerDataSource> _dataSource;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000565f15
- (void).cxx_destruct;	// IMP=0x0000000000564eb1
@property(readonly) id <HMDHomeLockNotificationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x0000000000564dcb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)contextResolutionResultFromNFCContextId:(id)arg1;	// IMP=0x0000000000564afa
- (id)contextResolutionResultFromHAPContextId:(id)arg1;	// IMP=0x000000000056484d
- (id)contextResolutionResultFromAccessCode:(id)arg1;	// IMP=0x00000000005644f2
- (void)_resolveKeypadContextIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005642b7
- (void)_sendResolveLockNotificationContextIdentifierMessage:(id)arg1 accessoryUUID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000563dc8
- (void)resolveKeypadContextIdentifier:(id)arg1 accessoryUUID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000563ba1
- (id)displayNameForNotificationContextResolutionResult:(id)arg1;	// IMP=0x0000000000563838
- (void)resolveEncodedCharacteristicNotificationContext:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000056333d
- (void)handleResolveNotificationContextIdentifierMessage:(id)arg1;	// IMP=0x000000000056304d
- (_Bool)shouldResolveNotificationContextForCharacteristic:(id)arg1;	// IMP=0x0000000000562f62
@property(readonly) _Bool hasReachablePrimaryResidentSupportingLockNotificationContext;
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000562adc
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000000562a04
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000056297e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
