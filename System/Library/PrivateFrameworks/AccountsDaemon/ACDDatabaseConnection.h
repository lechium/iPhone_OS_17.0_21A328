//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator;
@protocol ACDDatabaseConnectionDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface ACDDatabaseConnection : NSObject
{
    id <NSObject> _managedObjectContextDidSaveObserver;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 24 = 0x18
    NSManagedObjectContext *_managedObjectContext;	// 32 = 0x20
    id <ACDDatabaseConnectionDelegate> _delegate;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0060000000058681
- (void).cxx_destruct;	// IMP=0x000000000005b17f
@property(nonatomic) __weak id <ACDDatabaseConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;	// IMP=0x000000000005b050
- (void)_endObservingManagedObjectContextDidSaveNotifications;	// IMP=0x000000000005af8d
- (void)_managedObjectContextDidSave:(id)arg1;	// IMP=0x000000000005ac0c
- (void)_beginObservingManagedObjectContextDidSaveNotifications;	// IMP=0x000000000005aa4c
- (id)_managedObjectModificationDescription:(id)arg1;	// IMP=0x000000000005a8a9
- (id)_managedObjectContextModificationDescription;	// IMP=0x000000000005a48b
- (void)_traceDatabaseEvents;	// IMP=0x000000000005a122
- (void)_handleManagedObjectContextError:(id)arg1;	// IMP=0x000000000005a07a
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;	// IMP=0x0000000000059eef
- (void)rollback;	// IMP=0x0000000000059e96
- (_Bool)saveWithError:(id *)arg1 rollbackOnFailure:(_Bool)arg2;	// IMP=0x0000000000059c56
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x0000000000059c42
- (id)managedObjectIDForURI:(id)arg1;	// IMP=0x0000000000059ba1
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;	// IMP=0x0000000000059a63
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;	// IMP=0x00000000000599dc
- (void)deleteObject:(id)arg1;	// IMP=0x000000000005995c
- (id)insertNewObjectForEntityForName:(id)arg1;	// IMP=0x00000000000598be
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;	// IMP=0x00000000000596a3
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000000005952f
- (id)existingObjectWithURI:(id)arg1;	// IMP=0x000000000005926a
- (id)objectForObjectURI:(id)arg1;	// IMP=0x0000000000059171
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 prefetchKeypaths:(id)arg4;	// IMP=0x0000000000058c7a
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;	// IMP=0x0000000000058c65
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x0000000000058c4d
- (id)fetchObjectsForEntityNamed:(id)arg1;	// IMP=0x0000000000058c33
@property(retain, nonatomic) NSNumber *keychainVersion;
@property(retain, nonatomic) NSNumber *version;
- (id)_persistentStore;	// IMP=0x00000000000588d8
- (id)_managedObjectModel;	// IMP=0x00000000000588c2
- (void)dealloc;	// IMP=0x0000000000058782
- (id)initWithPersistentStoreCoordinator:(id)arg1;	// IMP=0x00000000000586c4
- (id)init;	// IMP=0x0000000000058699

@end

