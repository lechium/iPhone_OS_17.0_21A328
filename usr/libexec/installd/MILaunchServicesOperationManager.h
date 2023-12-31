//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface MILaunchServicesOperationManager : NSObject
{
    unsigned int _targetUID;	// 8 = 0x8
    unsigned long long _serialNumber;	// 16 = 0x10
    NSUUID *_instanceID;	// 24 = 0x18
    NSMutableDictionary *_pendingOperations;	// 32 = 0x20
    NSObject<OS_os_transaction> *_pendingOperationTransaction;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_internalQueue;	// 48 = 0x30
}

+ (void)_reconcileOperations:(id)arg1 unregisterMountPoints:(id *)arg2 registerMountPoints:(id *)arg3 restartUniqueOperations:(id *)arg4;	// IMP=0x002000000001dd36
+ (id)_discoverOrderedJournalEntriesInInstanceDir:(id)arg1;	// IMP=0x001000000001d968
+ (id)_operationFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001d6e8
+ (_Bool)_shouldContinueAfterCheckingAttemptCountInDir:(id)arg1;	// IMP=0x001000000001d28c
+ (id)_mostRecentInstanceDirURLWithinURL:(id)arg1;	// IMP=0x001000000001c2bf
+ (_Bool)_writeLaunchServicesOperation:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001b9d0
+ (_Bool)appReferencesEnabled;	// IMP=0x001000000001b6d3
+ (id)instanceForCurrentUser;	// IMP=0x001000000001b5eb
+ (id)_instanceForUID:(unsigned int)arg1;	// IMP=0x001000000001b4f6
+ (id)registerUsingDiscoveredInfoForAppIdentity:(id)arg1 inDomain:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000001b289
+ (id)registerInstalledInfo:(id)arg1 forIdentity:(id)arg2 inDomain:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000001aef6
+ (id)registerInstalledInfo:(id)arg1 forAppBundleID:(id)arg2 personas:(id)arg3 inDomain:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x001000000001ae4a
+ (id)_registerInstalledInfo:(id)arg1 forAppBundleID:(id)arg2 personas:(id)arg3 inDomain:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x001000000001ad3e
+ (id)_appReferenceManagerInstance;	// IMP=0x001000000001ad25
- (void).cxx_destruct;	// IMP=0x002000000002203b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSObject<OS_os_transaction> *pendingOperationTransaction; // @synthesize pendingOperationTransaction=_pendingOperationTransaction;
@property(readonly, nonatomic) NSMutableDictionary *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(readonly, nonatomic) unsigned int targetUID; // @synthesize targetUID=_targetUID;
@property(readonly, nonatomic) NSUUID *instanceID; // @synthesize instanceID=_instanceID;
- (void)operationWithUUID:(id)arg1 didFailToSaveWithError:(id)arg2;	// IMP=0x0010000000021ec7
- (void)operationWithUUIDWasSaved:(id)arg1;	// IMP=0x0010000000021de6
- (_Bool)unregisterAppsAtMountPoint:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000021bb3
- (_Bool)_onQueue_unregisterApplicationsAtMountPoint:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002188e
- (_Bool)unregisterAppForBundleID:(id)arg1 inDomain:(unsigned long long)arg2 operationType:(unsigned int)arg3 precondition:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000212c7
- (_Bool)_onQueue_unregisterAppForBundleID:(id)arg1 domain:(unsigned long long)arg2 operationType:(unsigned int)arg3 precondition:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000020ea8
- (_Bool)setPersonaUniqueStrings:(id)arg1 forAppBundleID:(id)arg2 inDomain:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0010000000020b57
- (_Bool)_onQueue_setPersonaUniqueStrings:(id)arg1 forAppBundleID:(id)arg2 inDomain:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0010000000020699
- (_Bool)registerUsingDiscoveredInformationForAppBundleID:(id)arg1 inDomain:(unsigned long long)arg2 resultingRecordPromise:(id *)arg3 error:(id *)arg4;	// IMP=0x0010000000020166
- (id)registerInstalledInfo:(id)arg1 onMountPoint:(id)arg2 forAppBundleID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000001fff4
- (id)registerInstalledInfo:(id)arg1 forAppBundleID:(id)arg2 personas:(id)arg3 inDomain:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x001000000001ffd1
- (id)_registerApplicationInfo:(id)arg1 onMountPoint:(id)arg2 forAppBundleID:(id)arg3 domain:(unsigned long long)arg4 personas:(id)arg5 error:(id *)arg6;	// IMP=0x001000000001fbfa
- (id)_onQueue_registerApplicationInfo:(id)arg1 onMountPoint:(id)arg2 forAppBundleID:(id)arg3 domain:(unsigned long long)arg4 personas:(id)arg5 error:(id *)arg6;	// IMP=0x001000000001f1e8
- (void)purge;	// IMP=0x001000000001efbb
- (void)reconcile;	// IMP=0x001000000001ee33
- (void)_reconcileOperations:(id)arg1;	// IMP=0x001000000001e648
- (id)_setUpLookAsideAtDirAndFindMostRecentInstance:(id)arg1;	// IMP=0x001000000001ca7f
- (unsigned long long)_onQueue_nextSerialNumber;	// IMP=0x001000000001c269
@property(readonly, nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)_onQueue_handleLaunchServicesOperationFailureForUUID:(id)arg1 error:(id)arg2;	// IMP=0x001000000001c14f
- (void)_onQueue_removePendingLaunchServicesOperationForUUID:(id)arg1;	// IMP=0x001000000001c13b
- (void)_onQueue_removePendingLaunchServicesOperationForUUID:(id)arg1 dueToLSSave:(_Bool)arg2;	// IMP=0x001000000001bf7f
- (_Bool)_onQueue_addPendingLaunchServicesOperation:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001bdec
- (_Bool)_onQueue_deleteLaunchServicesOperationForSerialNumber:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000001bcbf
- (_Bool)_onQueue_journalLaunchServicesOperation:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001bb4e
- (id)_storageURLForOperationSerialNumber:(unsigned long long)arg1;	// IMP=0x001000000001b93e
- (_Bool)_createStorageBaseDirectoryWithError:(id *)arg1;	// IMP=0x001000000001b846
@property(readonly, nonatomic) NSURL *lookAsideStorageBaseURL;
// Error: Property attributes should begin with the type ('T') attribute, property name: instanceStorageBaseURL
// Property attributes: (null)

@property(readonly, nonatomic) NSURL *storageBaseURL;
- (id)initWithUID:(unsigned int)arg1;	// IMP=0x001000000001b611
- (id)_lsApplicationWorkspaceInstance;	// IMP=0x001000000001ad0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

