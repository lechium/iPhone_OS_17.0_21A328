//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface CPLPrequeliteTransientRepository
{
    NSSet *_ignoredIdentifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005d79d
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000005d691
- (id)status;	// IMP=0x001000000005d5c3
- (unsigned long long)countOfStashedRecords;	// IMP=0x001000000005d513
@property(readonly, nonatomic) unsigned long long countOfUnmingledRecords;
- (_Bool)deleteAllRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005d241
- (_Bool)hasStashedChangesForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000005d164
- (_Bool)unstashRecordsForScopeWithIdentifier:(id)arg1 maxCount:(unsigned long long)arg2 hasMore:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000005cf77
- (_Bool)stashChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ccd8
- (_Bool)hasUnmingledOrStashedRecordsWithScopeFilter:(id)arg1;	// IMP=0x001000000005cbdc
- (_Bool)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c9b2
- (_Bool)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c875
- (_Bool)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c704
- (_Bool)hasOnlyMingledRecordsWithScopeIdentifier:(id)arg1;	// IMP=0x001000000005c622
- (_Bool)hasUnmingledNonStashedRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000005c548
- (_Bool)hasMingledRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000005c46b
- (_Bool)markUnmingledChangeWithScopedIdentifierAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c277
- (id)allUnmingledChangesWithScopeIdentifier:(id)arg1;	// IMP=0x001000000005c219
- (id)allUnmingledChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;	// IMP=0x001000000005bf51
- (id)allUnmingledDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x001000000005bee6
- (id)allUnmingledNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x001000000005be7b
- (id)allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x001000000005be62
- (id)_allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x001000000005bc01
- (id)unmingledChangeWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005b985
- (_Bool)popChangeBatchOfRemappedRecords:(id *)arg1 scope:(id)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000005b5fe
- (id)nextBatchOfRemappedRecordsInScope:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x001000000005b367
- (id)_recordWithTransientType:(int)arg1 scopedIdentifier:(id)arg2;	// IMP=0x001000000005b1d2
- (_Bool)hasStashedRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005b084
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005af3c
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005adbd
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 scopeIndex:(unsigned long long)arg2 class:(Class)arg3 maximumCount:(unsigned long long)arg4;	// IMP=0x001000000005ab79
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 scopeIndex:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x001000000005a964
- (id)_enumeratorForRecordsWithScopeIndex:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x001000000005a76f
- (_Bool)_markChangesWithScopedIdentifiersAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005a399
- (_Bool)appendBatch:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000005a21f
- (_Bool)_appendChange:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000599a5
- (_Bool)hasUnmingledChangesForScope:(id)arg1;	// IMP=0x00100000000598c1
@property(readonly, nonatomic) _Bool hasUnmingledChanges;
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000595bc
- (_Bool)initializeStorage;	// IMP=0x0010000000059482
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000059347

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end
