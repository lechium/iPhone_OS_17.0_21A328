//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCLocalItem.h"

@class BRCAppLibrary, BRCClientZone, BRCDirectoryItem, BRCDocumentItem, BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCAliasItem : BRCLocalItem
{
}

+ (void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(unsigned long long)arg8 isFolderShare:(_Bool)arg9 beingDeadInServerTruth:(_Bool)arg10 shouldPCSChainStatus:(unsigned char)arg11;	// IMP=0x008000000012643a
+ (id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(_Bool)arg3;	// IMP=0x00800000001262d9
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;	// IMP=0x0000000000053b28
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;	// IMP=0x0000000000053ab9
- (void)markNeedsUploadOrSyncingUp;	// IMP=0x0000000000053aa5
@property(readonly, nonatomic) BRCItemID *targetItemID;
@property(readonly, nonatomic) BRCClientZone *targetClientZone;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x000000000005342a
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x0000000000052e45
@property(readonly, nonatomic) BRCAliasItem *asBRAlias;
- (_Bool)isBRAlias;	// IMP=0x0000000000052da5
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 etagIfLoser:(id)arg3 stageFileName:(id)arg4 error:(id *)arg5;	// IMP=0x000000000006863c
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000006858a
- (id)targetDocument;	// IMP=0x00000000000684e3
- (void)targetMovedToThisAppLibrary;	// IMP=0x000000000006834b
- (void)targetMovedToTrashOrDeleted;	// IMP=0x00000000000681b3
- (void)_removeAliasAndMarkDead;	// IMP=0x0000000000068016
- (_Bool)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(_Bool)arg2;	// IMP=0x00000000000679f4
- (void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg1;	// IMP=0x0000000000067256
- (void)learnTarget:(id)arg1;	// IMP=0x0000000000067017
@property(readonly, nonatomic) BRCAppLibrary *targetAppLibrary;
- (_Bool)changedAtRelativePath:(id)arg1 scanPackage:(_Bool)arg2;	// IMP=0x0000000000066d33
- (_Bool)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000066d2b
- (id)structureRecordBeingDeadInServerTruth:(_Bool)arg1 stageID:(id)arg2 shouldPCSChainStatus:(unsigned char)arg3;	// IMP=0x00000000001266ed

// Remaining properties
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;

@end

