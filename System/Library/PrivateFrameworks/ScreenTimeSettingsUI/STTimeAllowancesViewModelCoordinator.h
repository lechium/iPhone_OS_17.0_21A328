//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSNumber, NSString, STAskForTimeClient, STGroupFetchedResultsController, STTimeAllowancesViewModel;
@protocol STPersistenceControllerProtocol;

__attribute__((visibility("hidden")))
@interface STTimeAllowancesViewModelCoordinator : NSObject
{
    STTimeAllowancesViewModel *_viewModel;	// 8 = 0x8
    NSNumber *_userDSID;	// 16 = 0x10
    id <STPersistenceControllerProtocol> _persistenceController;	// 24 = 0x18
    STAskForTimeClient *_askForTimeClient;	// 32 = 0x20
    STGroupFetchedResultsController *_groupFetchResultsController;	// 40 = 0x28
    NSManagedObjectID *_userObjectID;	// 48 = 0x30
}

+ (_Bool)saveAllowance:(id)arg1 forUser:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ac781
- (void).cxx_destruct;	// IMP=0x00000000000ae383
@property(copy, nonatomic) NSManagedObjectID *userObjectID; // @synthesize userObjectID=_userObjectID;
@property(readonly, nonatomic) STGroupFetchedResultsController *groupFetchResultsController; // @synthesize groupFetchResultsController=_groupFetchResultsController;
@property(readonly, nonatomic) STAskForTimeClient *askForTimeClient; // @synthesize askForTimeClient=_askForTimeClient;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(copy, nonatomic) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(readonly) STTimeAllowancesViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)respondToAskForTime:(id)arg1 withApproval:(_Bool)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ae10a
- (void)saveAlwaysAllowList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ad7df
- (void)saveAllAllowancesEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ad1da
- (void)deleteAllowance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000acb7d
- (void)saveAllowance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ac11d
@property(readonly, nonatomic) double timeToNextExpectedStateChange;
@property(readonly, nonatomic) long long currentDowntimeState;
@property(readonly, nonatomic) _Bool isDowntimeActive;
- (void)toggleDowntimeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab481
- (void)saveDeviceBedtime:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aad56
- (id)_iCloudAccountPredicate;	// IMP=0x00000000000aacd2
- (void)loadViewModelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a8ec8
- (void)groupResultsController:(id)arg1 didChangeResultsForRequest:(id)arg2 objectID:(id)arg3 changeType:(unsigned long long)arg4;	// IMP=0x00000000000a8ea9
- (void)_registerForPersistentStoreNotifications;	// IMP=0x00000000000a8d2c
- (void)saveDefaultAlwaysAllowListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a86e7
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2;	// IMP=0x00000000000a856a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

