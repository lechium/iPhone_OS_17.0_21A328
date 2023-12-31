//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaDestinationControllerMetricsEventDispatcher, HMMediaDestinationControllerData, HMMutableMediaDestinationControllerData, NSString;
@protocol HMDMediaDestinationControllerBackingStoreHandlerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerBackingStoreHandler
{
    HMMutableMediaDestinationControllerData *_data;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> _delegate;	// 24 = 0x18
    HMDMediaDestinationControllerMetricsEventDispatcher *_metricsEventDispatcher;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000067d7f
+ (id)backingStoreObjectForData:(id)arg1;	// IMP=0x0010000000067cbb
- (void).cxx_destruct;	// IMP=0x000000000006719d
@property(retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property __weak id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000000670f9
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000066fb6
- (void)transactionObjectUpdatedSupportedOptions:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x0000000000066e17
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2;	// IMP=0x0000000000066ba9
- (void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2;	// IMP=0x0000000000066956
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000066160
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x000000000006602b
- (void)notifyDidUpdateDestinationIdentifier:(id)arg1;	// IMP=0x0000000000065ef6
- (void)updateSupportedOptions:(unsigned long long)arg1;	// IMP=0x0000000000065e92
- (void)updateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x0000000000065e1c
- (void)updateDestinationIdentifier:(id)arg1;	// IMP=0x0000000000065da6
@property(readonly, copy) HMMediaDestinationControllerData *data;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000065aa4
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000655bc
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000653de
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000065269
- (void)mergeData:(id)arg1;	// IMP=0x00000000000650ff
- (void)removeControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064f54
- (void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064d78
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064b60
- (void)updateDestinationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064984
- (id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000064824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

