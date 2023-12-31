//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPPairingIdentity, HMDBackgroundOperationGraph, HMDHomeManager, HMFTimer, NSMutableArray, NSOperationQueue, NSString;
@protocol HMDBackgroundOperationManagerCurrentDeviceStateDataSource;

__attribute__((visibility("hidden")))
@interface HMDBackgroundOperationManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMFTimer *_expirationTimer;	// 16 = 0x10
    HMFTimer *_deferralTimer;	// 24 = 0x18
    HMFTimer *_dataSourceCoalescingTimer;	// 32 = 0x20
    id <HMDBackgroundOperationManagerCurrentDeviceStateDataSource> _currentDeviceStateDataSource;	// 40 = 0x28
    HMDHomeManager *_homeManager;	// 48 = 0x30
    NSMutableArray *_operationList;	// 56 = 0x38
    NSMutableArray *_dataSourceList;	// 64 = 0x40
    NSString *_backgroundOperationsDataStorePath;	// 72 = 0x48
    HMDBackgroundOperationGraph *_opGraph;	// 80 = 0x50
    HAPPairingIdentity *_hh1Key;	// 88 = 0x58
    HAPPairingIdentity *_hh2Key;	// 96 = 0x60
    NSOperationQueue *_queue;	// 104 = 0x68
}

+ (id)findHomeUsingIdentifier:(id)arg1 homeManager:(id)arg2;	// IMP=0x00100000006fd06c
+ (id)findAccessoryUsing:(id)arg1 fromHome:(id)arg2;	// IMP=0x00100000006fcf9c
+ (id)findAccessoryUsing:(id)arg1 homeManager:(id)arg2;	// IMP=0x00100000006fcec6
+ (id)findHomeWhereThisDeviceIsConfirmedPrimaryResident:(id)arg1;	// IMP=0x00100000006fce6c
+ (id)getAllReachableAccessories:(id)arg1;	// IMP=0x00100000006fcd83
+ (id)getAllPairedAccessoriesOfAllHomes:(id)arg1;	// IMP=0x00100000006fcd6e
+ (id)logCategory;	// IMP=0x00100000006fcd3e
+ (id)allowedClasses;	// IMP=0x00100000006fcc23
+ (id)sharedManager;	// IMP=0x00100000006fcbf3
- (void).cxx_destruct;	// IMP=0x00000000006fb963
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HAPPairingIdentity *hh2Key; // @synthesize hh2Key=_hh2Key;
@property(retain, nonatomic) HAPPairingIdentity *hh1Key; // @synthesize hh1Key=_hh1Key;
@property(readonly, nonatomic) HMDBackgroundOperationGraph *opGraph; // @synthesize opGraph=_opGraph;
@property(retain, nonatomic) NSString *backgroundOperationsDataStorePath; // @synthesize backgroundOperationsDataStorePath=_backgroundOperationsDataStorePath;
@property(retain, nonatomic) NSMutableArray *dataSourceList; // @synthesize dataSourceList=_dataSourceList;
@property(retain, nonatomic) NSMutableArray *operationList; // @synthesize operationList=_operationList;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) id <HMDBackgroundOperationManagerCurrentDeviceStateDataSource> currentDeviceStateDataSource; // @synthesize currentDeviceStateDataSource=_currentDeviceStateDataSource;
- (id)dumpState;	// IMP=0x00000000006fb750
- (void)__archiveToDiskForUnitTesting:(id)arg1;	// IMP=0x00000000006fb743
- (id)__unarchiveFromDiskForUnitTesting;	// IMP=0x00000000006fb731
- (id)__initForUnitTesting:(id)arg1;	// IMP=0x00000000006fb690
- (void)__clearLocalStoreForUnitTesting;	// IMP=0x00000000006fb55d
- (void)__resetAndRebuildOperationGraphForUnitTesting;	// IMP=0x00000000006fb4e4
- (void)__removeAllOperationsForUnitTesting;	// IMP=0x00000000006fb48f
- (void)__removeAllDataSourcesForUnitTesting;	// IMP=0x00000000006fb43a
- (id)__getReadyToExecuteOperations;	// IMP=0x00000000006fb2c4
- (void)removeOperationsForAccessoryIdentifier:(id)arg1 operationKind:(id)arg2;	// IMP=0x00000000006fb10d
- (void)removeAllOperationForAccessoryIdentifier:(id)arg1;	// IMP=0x00000000006fb046
- (void)removeAllOperationsBeforeStartingHH2Migration;	// IMP=0x00000000006faed1
- (id)unarchiveFromDisk;	// IMP=0x00000000006fa9dd
- (void)evaluateOperations;	// IMP=0x00000000006fa9c9
- (void)completeProcessingForOperation:(id)arg1;	// IMP=0x00000000006fa72e
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006fa5ec
- (void)scheduleTimerToRetryDeferredOperations;	// IMP=0x00000000006fa329
- (void)scheduleTimerToCheckAndRemoveExpiredOperation;	// IMP=0x00000000006fa067
- (void)checkAndRemoveExpiredOperations;	// IMP=0x00000000006f9f2e
- (void)_runOperation:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000000006f9de1
- (void)_runOperationsAfterEvaluatingPredicate:(id)arg1;	// IMP=0x00000000006f9cf5
- (void)_dataSourceHasUpdate:(id)arg1;	// IMP=0x00000000006f9af3
- (void)dataSourceHasUpdate:(id)arg1;	// IMP=0x00000000006f9ab6
- (void)addDefaultDataSources;	// IMP=0x00000000006f9a55
- (void)addDataSource:(id)arg1;	// IMP=0x00000000006f9848
- (void)removeOperation:(id)arg1;	// IMP=0x00000000006f9675
- (_Bool)addOperationDependency:(id)arg1 dependsOn:(id)arg2;	// IMP=0x00000000006f9083
- (void)addOperation:(id)arg1;	// IMP=0x00000000006f8dd6
@property(readonly, nonatomic) HMFTimer *deferralTimer; // @synthesize deferralTimer=_deferralTimer;
@property(readonly, nonatomic) HMFTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer; // @synthesize dataSourceCoalescingTimer=_dataSourceCoalescingTimer;
- (id)initWithLocalStorePath:(id)arg1 currentDeviceStateDataSource:(id)arg2;	// IMP=0x00000000006f8a32
- (void)registerForNotifications;	// IMP=0x0000000000687384
- (_Bool)shouldWeScheduleKeyRollOperationsOnThisDevice;	// IMP=0x00000000006872c3
- (id)getHH2ControllerKey;	// IMP=0x000000000068726c
- (id)getHH1ControllerKey;	// IMP=0x000000000068709f
- (_Bool)scheduleHH2KeyRollForAirPlayAccessory:(id)arg1 previousIdentity:(id)arg2 newIdentity:(id)arg3;	// IMP=0x000000000068699a
- (_Bool)scheduleHH2KeyRollForAccessory:(id)arg1 previousIdentity:(id)arg2 newIdentity:(id)arg3;	// IMP=0x0000000000685fd4
- (void)auditOwnerPairingForAirPlayAccessory:(id)arg1 isRunningOnResident:(_Bool)arg2;	// IMP=0x0000000000685d4e
- (void)auditKeyChainEntryForAccessory:(id)arg1 isRunningOnResident:(_Bool)arg2;	// IMP=0x00000000006858bc
- (void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)arg1 isRunningOnResident:(_Bool)arg2;	// IMP=0x0000000000685806
- (void)scheduleHH2KeyRollOperationForHome:(id)arg1 isRunningOnResident:(_Bool)arg2;	// IMP=0x0000000000685574
- (void)makeSureToLoadPairingIdentities;	// IMP=0x0000000000685245
- (void)startSchedulingKeyRollOperations:(_Bool)arg1 forAccessory:(id)arg2;	// IMP=0x000000000068509a
- (void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)arg1;	// IMP=0x000000000068501c
- (void)_scheduleHH2KeyRollIfNecessary:(id)arg1;	// IMP=0x0000000000684c47
- (void)_scheduleHH2AirPlayKeyRollIfNecessary:(id)arg1;	// IMP=0x0000000000684942
- (_Bool)_scheduleKeyRollForAccessory:(id)arg1;	// IMP=0x000000000068490b
- (void)scheduleHH2KeyRollForAirPlayAccessory:(id)arg1;	// IMP=0x00000000006848c4
- (void)scheduleHH2KeyRollForAccessory:(id)arg1;	// IMP=0x000000000068487d
- (void)scheduleHH2KeyRollIfNecessary;	// IMP=0x0000000000684869

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

