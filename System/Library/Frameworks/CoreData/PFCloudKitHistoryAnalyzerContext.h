//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSSQLCore, NSSet;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzerContext
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSSet *_configuredEntityNames;	// 16 = 0x10
    NSMutableSet *_resetChangedObjectIDs;	// 24 = 0x18
    NSMutableDictionary *_entityIDToChangedPrimaryKeySet;	// 32 = 0x20
    NSSQLCore *_store;	// 40 = 0x28
}

- (id)newAnalyzerStateForChange:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e93d3
- (id)fetchSortedStates:(id *)arg1;	// IMP=0x00000000002e92dc
- (_Bool)finishProcessing:(id *)arg1;	// IMP=0x00000000002e909c
- (_Bool)reset:(id *)arg1;	// IMP=0x00000000002e8e85
- (_Bool)resetStateForObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e8d47
- (_Bool)processChange:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e7bc0
- (void)dealloc;	// IMP=0x00000000002e7b3e
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 store:(id)arg3;	// IMP=0x00000000002e7825

@end

