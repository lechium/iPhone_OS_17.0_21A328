//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSessionFPFS, BRCFairSource, BRFileObjectID, NSString;

__attribute__((visibility("hidden")))
@interface BRCFSImporter : NSObject
{
    BRCAccountSessionFPFS *_session;	// 8 = 0x8
    BRCFairSource *_childPropagationSource;	// 16 = 0x10
    BRFileObjectID *_currentPropagationObject;	// 24 = 0x18
    unsigned long long _currentPropagationMinRowID;	// 32 = 0x20
    _Bool _isCancelled;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000013720b
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)_cleanItemBatchAfterMigrationToFPFSIfNecessary;	// IMP=0x00000000001350aa
- (void)_childPropagationSchedule;	// IMP=0x0000000000134a0d
- (void)cancel;	// IMP=0x00000000001349f7
- (void)close;	// IMP=0x00000000001349e5
- (void)suspend;	// IMP=0x00000000001349cf
- (void)resume;	// IMP=0x000000000013499c
- (void)signal;	// IMP=0x0000000000134986
- (void)_processIngestBatch:(id)arg1 minRowID:(unsigned long long)arg2;	// IMP=0x0000000000134790
- (void)_propagateFieldsToNextChildBatch:(id)arg1 persistedState:(id)arg2 minRowID:(unsigned long long)arg3 batchSize:(int)arg4;	// IMP=0x00000000001326a4
- (void)_propagateDirectoryMergeOrCrossZoneMove:(id)arg1 persistedState:(id)arg2 batchSize:(int)arg3;	// IMP=0x0000000000131fbc
- (void)_markNextChildBatchDead:(id)arg1 persistedState:(id)arg2 batchSize:(int)arg3;	// IMP=0x0000000000130d27
- (unsigned char)_itemTypeToFileObjectIDType:(BOOL)arg1 itemID:(id)arg2;	// IMP=0x0000000000130cea
- (_Bool)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 newValues:(id)arg4 contents:(id)arg5 additionalAttrs:(id)arg6 clearCKInfoOnSyncUp:(_Bool)arg7 stillPendingFields:(unsigned long long *)arg8 error:(id *)arg9;	// IMP=0x000000000012fcbd
- (void)_learnEtagsIfNecessaryWithItem:(id)arg1 changedFields:(unsigned long long)arg2 baseVersion:(id)arg3;	// IMP=0x000000000012f6d0
- (_Bool)_processParentAndFilenameIfNecessaryWithLocalItem:(id)arg1 changedFields:(unsigned long long)arg2 templateItem:(id)arg3 error:(id *)arg4;	// IMP=0x000000000012eae2
- (_Bool)_trashItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012eacb
- (_Bool)trashItem:(id)arg1 parentItemInTrash:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012e227
- (id)getOrCreateTrashItemInAppLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012df6e
- (id)createAndImportNewDirectoryWithLogicalName:(id)arg1 parentItem:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012da62
- (id)importNewItemAtURL:(id)arg1 logicalName:(id)arg2 parentItem:(id)arg3 templateItem:(id)arg4 fields:(unsigned long long)arg5 options:(unsigned long long)arg6 additionalItemAttributes:(id)arg7 importBookmark:(id)arg8 stillPendingFields:(unsigned long long *)arg9 error:(id *)arg10;	// IMP=0x000000000012d0d8
- (id)importAppLibraryRootFromTemplateItem:(id)arg1;	// IMP=0x000000000012cd2b
- (id)_createAndInsertNewItemWithImportObject:(id)arg1 parentItem:(id)arg2 fields:(unsigned long long)arg3 templateItem:(id)arg4 fileURL:(id)arg5 options:(unsigned long long)arg6 additionalAttrs:(id)arg7 importBookmark:(id)arg8 stillPendingFields:(unsigned long long *)arg9 error:(id *)arg10;	// IMP=0x000000000012c162
- (id)_locateMatchingItemForTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 options:(unsigned long long)arg4 fileURL:(id)arg5 fields:(unsigned long long *)arg6 shouldReject:(_Bool *)arg7 additionalAttrs:(id)arg8 importBookmark:(id)arg9 stillPendingFields:(unsigned long long *)arg10 error:(id *)arg11;	// IMP=0x000000000012ae20
- (id)_handleCollisionIfNecessaryWithTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 fileURL:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x000000000012a3cc
- (id)_findCollidingItemWithTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000129d86
- (id)_locateTemplateItemFromFPFSMigration:(id)arg1 fields:(unsigned long long *)arg2 documentHasChanges:(_Bool *)arg3;	// IMP=0x00000000001294a2
- (id)_parseImportBookmark:(id)arg1 templateItem:(id)arg2 fileURL:(id)arg3;	// IMP=0x00000000001287bc
- (void)_reportBouncingForMigration:(id)arg1 existingItem:(id)arg2;	// IMP=0x0000000000128409
- (void)_updateCiconiaDatabaseForBouncing:(id)arg1 existingItem:(id)arg2;	// IMP=0x0000000000128086
- (void)_updateFPFSMigrationStatsForBouncing:(id)arg1 existingItem:(id)arg2;	// IMP=0x0000000000127ece
- (void)_changeBasicFieldsOnItem:(id)arg1 fields:(unsigned long long)arg2 template:(id)arg3;	// IMP=0x0000000000127c79
- (unsigned short)capabilityToMoveItem:(id)arg1 toNewParentItem:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000126b7b
- (_Bool)_isDesktopOrDocumentsItem:(id)arg1;	// IMP=0x0000000000126a0d
- (_Bool)_shouldRejectItemWithName:(id)arg1 templateItem:(id)arg2 existingItem:(id)arg3 options:(unsigned long long)arg4 shouldRemoveItemFromDrive:(_Bool *)arg5;	// IMP=0x0000000000126371
- (id)_globalItemByFileID:(unsigned long long)arg1;	// IMP=0x00000000001261da
- (id)_globalItemByDocumentID:(unsigned int)arg1;	// IMP=0x0000000000126043
- (_Bool)isFPFSMigrationInProgress;	// IMP=0x0000000000126026
- (id)_createBaseItemWithImportObject:(id)arg1 importBookmark:(id)arg2 parentItem:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000125859
- (id)initWithAccountSession:(id)arg1;	// IMP=0x0000000000125691

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

