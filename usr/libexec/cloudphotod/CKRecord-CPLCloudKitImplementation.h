//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (CPLCloudKitImplementation)
+ (id)cpl_recordFromCPLRecordChange:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 inZone:(id)arg4 info:(CDStruct_14f26992 *)arg5 error:(id *)arg6;	// IMP=0x00200000000f3221
+ (id)cpl_expungedSharedRecordFromCPLRecordChange:(id)arg1 inZone:(id)arg2 target:(id)arg3;	// IMP=0x00100000000f30b9
+ (id)cpl_expungedRecordFromCPLRecordChange:(id)arg1 inZone:(id)arg2 target:(id)arg3;	// IMP=0x00100000000f2f51
+ (Class)cpl_recordChangeClassForRecordType:(id)arg1;	// IMP=0x00100000000f0a35
- (id)cplResourcesWithScopedIdentifier:(id)arg1 coherent:(_Bool *)arg2 forRecord:(id)arg3;	// IMP=0x00200000000f4064
- (id)cplResourceWithType:(unsigned long long)arg1 scopedIdentifier:(id)arg2 isCoherent:(_Bool *)arg3;	// IMP=0x00100000000f3633
- (id)cpl_recordChangeMissingResourceProperties:(id *)arg1 scopeIdentifier:(id)arg2 scopeProvider:(id)arg3 currentUserRecordID:(id)arg4;	// IMP=0x00100000000f33bb
- (void)cpl_setEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000f2b43
- (void)cpl_setNonNilEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000f2b2a
- (id)cpl_decryptedObjectForKey:(id)arg1 validateClass:(Class)arg2;	// IMP=0x00100000000f236e
- (id)cpl_destinationRecordIDInPrivateScopeWithCurrentUserRecordID:(id)arg1 proposedDestinationRecordID:(id)arg2;	// IMP=0x00100000000f206a
- (void)cpl_updateContributorsOnSharedRecord:(id)arg1;	// IMP=0x00100000000f1b0d
- (void)cpl_updatePrivateRecordSharedToRecordWithID:(id)arg1 currentUserRecordID:(id)arg2 setSparseRecordFlag:(_Bool)arg3 force:(_Bool)arg4;	// IMP=0x00100000000f1928
- (_Bool)cpl_isSharedWithScopeWithIdentifier:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 isSparseRecord:(_Bool *)arg4;	// IMP=0x00100000000f155a
- (_Bool)cpl_supportsSharingScopeIdentifier;	// IMP=0x00100000000f1507
- (id)cpl_sharingRecordScopedIdentifierWithScopeProvider:(id)arg1 currentUserRecordID:(id)arg2 isSparseRecord:(_Bool *)arg3;	// IMP=0x00100000000f1087
- (_Bool)cpl_isSparseRecord;	// IMP=0x00100000000f103c
- (_Bool)cpl_inExpunged;	// IMP=0x00100000000f0ff1
- (id)cplChangedKeys;	// IMP=0x00100000000f0ee5
- (void)cplValidateAndWarnIntegrityOfResourceData:(id)arg1 withFingerPrintKey:(id)arg2 andFileSizeKey:(id)arg3 fingerprintScheme:(id)arg4;	// IMP=0x00100000000f0bd4
- (id)cpl_objectForKey:(id)arg1 validateClass:(Class)arg2;	// IMP=0x00100000000f0a89
- (Class)cpl_recordChangeClass;	// IMP=0x00100000000f0a42
- (id)cplFullDescription;	// IMP=0x00100000000f04e3
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x0010000000115b96
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x0010000000115aef
- (id)selfIfMatchesRecordName:(id)arg1;	// IMP=0x001000000011cc96
@end

