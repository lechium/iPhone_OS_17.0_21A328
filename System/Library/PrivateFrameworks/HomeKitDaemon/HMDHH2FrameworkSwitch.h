//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudDatabase, HMDHomeManager, NAFuture, NSObject, NSString;
@protocol HMDHH2FrameworkSwitchDataSource, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDHH2FrameworkSwitch : HMFObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _autoFrameworkSwitch;	// 16 = 0x10
    _Bool _isTapToSetupOngoing;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NAFuture *_fetchSentinelZoneDidFinishFuture;	// 32 = 0x20
    HMBCloudDatabase *_cloudDatabaseToDetectHH2Zone;	// 40 = 0x28
    CDUnknownBlockType _blockToBeCalledBeforeSwitchingFramework;	// 48 = 0x30
    HMDHomeManager *_homeManager;	// 56 = 0x38
    id <HMDHH2FrameworkSwitchDataSource> _dataSource;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000008cc5f4
+ (id)errorFromHMDCKAccountStatus:(long long)arg1;	// IMP=0x00100000008cc5ae
+ (void)switchToHH2AndRelaunchHomed;	// IMP=0x00100000008cc4c8
+ (void)switchBackToHH1AndRelaunch;	// IMP=0x00100000008cc484
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;	// IMP=0x00100000008cc3ab
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;	// IMP=0x00100000008cc2b5
+ (void)relaunchHomedAfterSettingEnvironmentTo:(_Bool)arg1 blockToExecuteBeforeReLaunch:(CDUnknownBlockType)arg2;	// IMP=0x00100000008cbf8f
+ (void)setHH2SettingsMigrationKey:(_Bool)arg1;	// IMP=0x00100000008cbe5c
+ (void)setHH2EnablementPreferenceKey:(_Bool)arg1;	// IMP=0x00100000008cbd2f
- (void).cxx_destruct;	// IMP=0x00000000008ca9a0
@property(retain, nonatomic) id <HMDHH2FrameworkSwitchDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType blockToBeCalledBeforeSwitchingFramework; // @synthesize blockToBeCalledBeforeSwitchingFramework=_blockToBeCalledBeforeSwitchingFramework;
@property(retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone; // @synthesize cloudDatabaseToDetectHH2Zone=_cloudDatabaseToDetectHH2Zone;
@property(nonatomic) _Bool isTapToSetupOngoing; // @synthesize isTapToSetupOngoing=_isTapToSetupOngoing;
@property(nonatomic) _Bool autoFrameworkSwitch; // @synthesize autoFrameworkSwitch=_autoFrameworkSwitch;
@property(readonly, nonatomic) NAFuture *fetchSentinelZoneDidFinishFuture; // @synthesize fetchSentinelZoneDidFinishFuture=_fetchSentinelZoneDidFinishFuture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleTapToSetupFinished:(id)arg1;	// IMP=0x00000000008ca7d9
- (void)waitForCloudKitAccountToBeAvailable;	// IMP=0x00000000008ca768
- (long long)areCloudKitServersReachableWithError:(id *)arg1;	// IMP=0x00000000008c9de7
- (_Bool)switchToSetupMode:(unsigned long long)arg1;	// IMP=0x00000000008c9b87
- (void)switchToHH2AfterPerformingHH2PreRebootTask;	// IMP=0x00000000008c9b2b
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;	// IMP=0x00000000008c9a54
- (void)_clearSetupModeIfNeeded;	// IMP=0x00000000008c9a1f
- (void)removeHH2SentinelZoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c9581
- (void)waitForHH2SentinelZoneToBeRemoved;	// IMP=0x00000000008c94da
- (_Bool)_areWeRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x00000000008c9218
- (void)_makeSureWeAreRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x00000000008c8f9a
- (void)makeSureWeAreRunningInRightEnvironment:(_Bool)arg1;	// IMP=0x00000000008c8f20
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;	// IMP=0x00000000008c8d8e
- (_Bool)checkExistenceOfHH2SentinelZone;	// IMP=0x00000000008c8b7d
- (_Bool)waitForHH2SentinelZoneToBeCreated:(double)arg1;	// IMP=0x00000000008c8792
- (void)createHH2SentinelZoneWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c846d
- (void)performInitialSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c819a
- (_Bool)waitForHH2SentinelZoneToBeFetchedFromCloud;	// IMP=0x00000000008c7f4a
- (void)forceFetchSentinelZone;	// IMP=0x00000000008c7d0e
- (void)performInitialSyncAndSwitchFrameworkIfRequired;	// IMP=0x00000000008c7cc2
- (void)createHH2CloudDatabaseAndStartSyncing;	// IMP=0x00000000008c7a3b
- (id)initWithAutoSwitch:(_Bool)arg1 callBeforeFrameworkSwitch:(CDUnknownBlockType)arg2 homeManager:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000000008c780c
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000008c77f0
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1;	// IMP=0x00000000008c77d4
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008c77b7
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 dataSource:(id)arg2 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c7794

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

