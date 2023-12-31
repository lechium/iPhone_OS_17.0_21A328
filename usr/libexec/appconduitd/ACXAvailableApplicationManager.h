//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ACXAvailableApplicationManager : NSObject
{
    _Bool _trustChangeEvaluationPending;	// 8 = 0x8
    NSDictionary *_possibleCompanionDeletableSystemAppToWatchCounterpartsMap;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NSUUID *_lastLSUUID;	// 32 = 0x20
    NSUUID *_ourDBUUID;	// 40 = 0x28
    unsigned long long _lastSequenceNumber;	// 48 = 0x30
    NSMutableDictionary *_companionToWatchAppsBundleIDMap;	// 56 = 0x38
    NSMutableDictionary *_appList;	// 64 = 0x40
}

+ (id)sharedApplicationManager;	// IMP=0x0020000000009773
- (void).cxx_destruct;	// IMP=0x0020000000010de4
@property(nonatomic) _Bool trustChangeEvaluationPending; // @synthesize trustChangeEvaluationPending=_trustChangeEvaluationPending;
@property(retain, nonatomic) NSMutableDictionary *appList; // @synthesize appList=_appList;
@property(retain, nonatomic) NSMutableDictionary *companionToWatchAppsBundleIDMap; // @synthesize companionToWatchAppsBundleIDMap=_companionToWatchAppsBundleIDMap;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *ourDBUUID; // @synthesize ourDBUUID=_ourDBUUID;
@property(retain, nonatomic) NSUUID *lastLSUUID; // @synthesize lastLSUUID=_lastLSUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x001000000001094a
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000001075b
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00100000000104eb
@property(readonly, nonatomic) NSDictionary *possibleCompanionDeletableSystemAppToWatchCounterpartsMap; // @synthesize possibleCompanionDeletableSystemAppToWatchCounterpartsMap=_possibleCompanionDeletableSystemAppToWatchCounterpartsMap;
- (id)locallyAvailableSystemAppBundleIDToCompanionBundleIDMappingForPreWatchOSSix;	// IMP=0x001000000000fdce
- (id)locallyAvailableSystemAppBundleIDToCompanionBundleIDMapping;	// IMP=0x001000000000fb21
- (id)bundleIDsOfLocallyAvailableSystemAppsForPreWatchOSSix;	// IMP=0x001000000000f95d
- (id)bundleIDsOfLocallyAvailableSystemApps;	// IMP=0x001000000000f8b1
- (id)_bundleIDsOfLocallyAvailableSystemApps;	// IMP=0x001000000000f74e
- (id)companionBundleIDForLocallyAvailableSystemApp:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f4d3
- (_Bool)systemAppIsAvailableWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f29d
- (id)availableSystemAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000ef9a
- (id)_supplementalSystemAppBundleIDMappingForPreWatchOSSix;	// IMP=0x001000000000ef8d
- (id)_systemAppBundleIDMappingForPreWatchOSSix;	// IMP=0x001000000000ef80
- (id)_supplementalSystemAppBundleIDMappingForWatchOSSixAndLater;	// IMP=0x001000000000ef67
- (id)_alwaysIgnoredSystemAppBundleIDs;	// IMP=0x001000000000ef47
- (id)gizmoAppForCompanionAppBundleID:(id)arg1;	// IMP=0x001000000000ed0c
- (id)gizmoAppBundleIDsForCompanionAppBundleIDs:(id)arg1;	// IMP=0x001000000000e9d3
- (id)gizmoAppBundleIDForCompanionAppBundleID:(id)arg1;	// IMP=0x001000000000e805
- (id)allAvailablePlaceholders;	// IMP=0x001000000000e4af
- (id)bundleIDsOfAvailableAppsExcludingSystemApps;	// IMP=0x001000000000e2b9
- (id)allAvailableApps;	// IMP=0x001000000000e159
- (_Bool)gizmoAppIsLocallyAvailableWithBundleID:(id)arg1;	// IMP=0x001000000000dfe1
- (id)gizmoAppWithBundleID:(id)arg1;	// IMP=0x001000000000ddf6
- (id)infoForGizmoAppsWithBundleIDs:(id)arg1;	// IMP=0x001000000000daed
- (void)profileTrustChanged;	// IMP=0x001000000000d551
- (void)applicationsUninstalledWithAppRecords:(id)arg1;	// IMP=0x001000000000cec9
- (void)processApplication:(id)arg1 withNewApps:(id)arg2 updatedApps:(id)arg3 transitioningAppBundleIDs:(id)arg4;	// IMP=0x001000000000cb77
- (void)processApplicationRemovalWithCompanionBundleID:(id)arg1 removedApps:(id)arg2;	// IMP=0x001000000000c819
- (void)applicationsInstalledWithCompanionIdentifiers:(id)arg1;	// IMP=0x001000000000c27d
- (void)applicationsInstalledWithAppRecords:(id)arg1;	// IMP=0x001000000000c14a
- (void)addGizmoBundleId:(id)arg1 forCompanionBundleID:(id)arg2 toMap:(id)arg3;	// IMP=0x001000000000c039
- (void)_onQueue_reSyncWithLS;	// IMP=0x001000000000b031
- (void)_onQueue_noteTrustObtainedForApps:(id)arg1 trustRemovedForApps:(id)arg2;	// IMP=0x001000000000afa2
- (void)_onQueue_noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 transitioningAppBundleIDs:(id)arg4;	// IMP=0x001000000000aeda
- (void)_onQueue_noteDatabaseRebuild;	// IMP=0x001000000000ae96
- (_Bool)_onQueue_infoMatchesCurrentLSDatabaseWithUUID:(id *)arg1;	// IMP=0x001000000000ac7c
- (void)_onQueue_writeAppListToDisk;	// IMP=0x001000000000a76b
- (_Bool)_verifyInternalDataStructures;	// IMP=0x001000000000a59b
- (id)init;	// IMP=0x00100000000097c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

