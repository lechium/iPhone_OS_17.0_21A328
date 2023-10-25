//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, PLPhotoLibraryBundle;
@protocol OS_xpc_object;

@interface PLLibraryRepairSupport : NSObject
{
    NSObject<OS_xpc_object> *_xpcActivity;	// 8 = 0x8
    MISSING_TYPE *_transaction;	// 16 = 0x10
    NSString *_description;	// 24 = 0x18
    PLPhotoLibraryBundle *_bundle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000078af
@property(retain) PLPhotoLibraryBundle *bundle; // @synthesize bundle=_bundle;
- (void)runPeriodicMaintenanceActivityOnAllLibrariesWithExecutionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007163
- (void)_maintainLibrary:(id)arg1 executionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006b80
- (_Bool)_updateDeferredCriticalMaintenanceTaskMarker:(id)arg1;	// IMP=0x0010000000006afa
- (_Bool)_updateDeferredMaintenanceTaskMarker:(id)arg1 value:(id)arg2;	// IMP=0x0010000000006ade
- (_Bool)_updateMaintenanceTaskMarker:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x00100000000069b9
- (_Bool)_isValidProcessingURL:(id)arg1 interruptedPaths:(id)arg2;	// IMP=0x001000000000691e
- (id)_interruptedProcessingURLs;	// IMP=0x0010000000006866
- (void)_saveInterruptedProcessingURLs:(id)arg1;	// IMP=0x00100000000067c5
- (id)_buildIncompleteMaintenanceTaskPathsKey;	// IMP=0x00100000000066f8
- (void)runPeriodicMaintenance;	// IMP=0x00100000000061a9
- (void)runSearchIndexingOpportunity;	// IMP=0x0010000000005ff3
- (void)runCuratedLibraryPeriodicMaintenanceTasks;	// IMP=0x0010000000005f09
- (_Bool)_runCriticalPeriodicMaintenanceTasksDeferActivityIfRequired:(id)arg1;	// IMP=0x0010000000005d90
- (_Bool)_deferActivityIfRequiredForClassName:(id)arg1;	// IMP=0x0010000000005bcf
- (unsigned long long)_indexOfRegisteredMaintenanceTaskForMarker:(id)arg1;	// IMP=0x0010000000005ae2
- (id)_registeredMaintenanceTaskClasses;	// IMP=0x001000000000589d
- (id)_registeredCriticalMaintenaceTaskClasses;	// IMP=0x001000000000580c
- (id)initWithActivity:(id)arg1 description:(id)arg2;	// IMP=0x0010000000005731

@end
