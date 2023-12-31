//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCLocalItem.h"

@class BRCClientZone, BRCDirectoryItem, BRCDocumentItem, BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCAliasItem : BRCLocalItem
{
}

+ (void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(unsigned long long)arg8 isFolderShare:(_Bool)arg9 beingDeadInServerTruth:(_Bool)arg10 shouldPCSChainStatus:(unsigned char)arg11;	// IMP=0x00600000000f475a
+ (id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(_Bool)arg3;	// IMP=0x00600000000f45f9
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;	// IMP=0x00000000001d888b
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;	// IMP=0x00000000001d8879
- (void)markNeedsUploadOrSyncingUp;	// IMP=0x00000000001d8865
@property(readonly, nonatomic) BRCItemID *targetItemID;
@property(readonly, nonatomic) BRCClientZone *targetClientZone;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x00000000001d8277
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x00000000001d7d52
@property(readonly, nonatomic) BRCAliasItem *asBRAlias;
- (_Bool)isBRAlias;	// IMP=0x00000000001d7cb2
- (id)structureRecordBeingDeadInServerTruth:(_Bool)arg1 stageID:(id)arg2 shouldPCSChainStatus:(unsigned char)arg3;	// IMP=0x00000000000f4a0d

// Remaining properties
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;

@end

