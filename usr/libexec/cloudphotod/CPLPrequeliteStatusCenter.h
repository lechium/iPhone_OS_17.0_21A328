//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteStatusCenter
{
    CPLPrequeliteVariable *_generationVar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007aa71
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000007a965
- (id)status;	// IMP=0x001000000007a527
- (_Bool)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007a3a3
- (_Bool)acknowledgeChangedStatus:(id)arg1 hasBeenDeleted:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000007a16d
- (id)statusChangesMaximumCount:(unsigned long long)arg1;	// IMP=0x001000000007a00e
- (id)statusForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000079e52
- (_Bool)addStatus:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000079c39
- (_Bool)getNewGeneration:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0010000000079b81
@property(readonly, nonatomic) _Bool hasStatusChanges;
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0010000000079ade
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000007972b
- (_Bool)initializeStorage;	// IMP=0x0010000000079629
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000079584

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

