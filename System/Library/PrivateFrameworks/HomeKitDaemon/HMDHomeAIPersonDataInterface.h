//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIExternalPersonManager, HMIHomePersonManager, HMIPersonManager, NSObject, NSString;
@protocol HMDPersonDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeAIPersonDataInterface : HMFObject
{
    HMIPersonManager *_personManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <HMDPersonDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b5303
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMIPersonManager *personManager; // @synthesize personManager=_personManager;
- (void)handleUpdatedIsDataSyncInProgress:(_Bool)arg1;	// IMP=0x00000000000b509a
- (void)handleUpdatedIsCurrentDeviceAvailableResident:(_Bool)arg1;	// IMP=0x00000000000b4ea2
- (void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000000b4e0a
- (void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000000b4d72
- (void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000000b4cda
- (void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000000b4c24
- (void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000000b4b6e
- (void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000000b4ab8
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;	// IMP=0x00000000000b492a
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b47c7
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b462d
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b44ca
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b4330
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b41cd
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b4033
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3ed0
- (id)initWithPersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000000b3e2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMIHomePersonManager *homePersonManager;
@property(readonly) HMIExternalPersonManager *photosPersonManager;
@property(readonly) Class superclass;

@end

