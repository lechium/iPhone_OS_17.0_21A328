//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, CKRecordZone, CKRecordZoneID, CKReference, CPLCloudKitScope, CPLEngineScope, MISSING_TYPE, NSString;

@interface CPLCloudKitZoneIdentification : NSObject
{
    _Bool _hasCachedRootRef;	// 8 = 0x8
    CKReference *_cachedRootRef;	// 16 = 0x10
    CPLCloudKitScope *_cloudKitScope;	// 24 = 0x18
    CPLEngineScope *_engineScope;	// 32 = 0x20
}

+ (_Bool)isScopeReadonlyFromCKShare:(id)arg1;	// IMP=0x0020000000117f3c
+ (long long)_permissionFromCKShare:(id)arg1;	// IMP=0x0010000000117e38
+ (id)prefixForNewScopes;	// IMP=0x0010000000117e30
+ (id)libraryInfoRecordName;	// IMP=0x0010000000117818
+ (_Bool)isSupportedShare:(id)arg1;	// IMP=0x0010000000117668
+ (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x00100000001175f4
+ (id)shareType;	// IMP=0x00100000001175ec
+ (id)shareRecordName;	// IMP=0x00100000001175e4
+ (id)rootRecordName;	// IMP=0x00100000001175dc
+ (_Bool)supportsCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x0010000000116c09
+ (MISSING_TYPE *)scopeTypeForCloudKitScope:proposedScopeType:fetchedRecords:currentUserID: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000116c01
+ (id)recordsToFetchToIdentifyZoneID:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x00100000001169f4
+ (id)recordNamesForScopeInfo;	// IMP=0x00100000001168f6
+ (_Bool)shouldProtectZoneIDFromDeletion:(id)arg1;	// IMP=0x0010000000116656
- (void).cxx_destruct;	// IMP=0x0020000000117f6a
@property(readonly, nonatomic) CPLEngineScope *engineScope; // @synthesize engineScope=_engineScope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (_Bool)_isScopeReadonlyFromCKShare:(id)arg1;	// IMP=0x0010000000117ead
- (id)newScopeIdentifier;	// IMP=0x0010000000117d32
- (void)validateCreateScopeTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000117d22
- (void)validateAcceptSharedScopeTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000117d12
@property(readonly, nonatomic) long long scopeType;
@property(readonly, nonatomic) NSString *scopeIdentifier;
@property(readonly, nonatomic) CKRecordZone *zone;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
- (id)scopedIdentifierWithIdentifier:(id)arg1;	// IMP=0x0010000000117bc1
- (id)recordIDWithRecordName:(id)arg1;	// IMP=0x0010000000117b47
- (_Bool)supportsDeletionOfRecordClass:(Class)arg1;	// IMP=0x0010000000117b32
- (_Bool)supportsDirectDeletionOfRecordClass:(Class)arg1;	// IMP=0x0010000000117b1d
- (_Bool)supportsDownloadOfRecordClass:(Class)arg1;	// IMP=0x0010000000117b15
- (_Bool)supportsUploadOfRecordClass:(Class)arg1;	// IMP=0x0010000000117b0d
- (_Bool)supportsDeletionOfRecord:(id)arg1;	// IMP=0x0010000000117af8
- (_Bool)supportsDirectDeletionOfRecord:(id)arg1;	// IMP=0x0010000000117ae3
- (_Bool)supportsDownloadOfChange:(id)arg1;	// IMP=0x0010000000117aaf
- (_Bool)supportsUploadOfChange:(id)arg1;	// IMP=0x0010000000117a7b
- (void)setupRootOnRecord:(id)arg1;	// IMP=0x0010000000117a10
@property(readonly, nonatomic) long long databaseScope;
@property(readonly, nonatomic) long long operationType;
- (id)_rootRef;	// IMP=0x00100000001178e5
@property(readonly, nonatomic) NSString *libraryInfoRecordName;
@property(readonly, nonatomic) NSString *shareType;
@property(readonly, nonatomic) NSString *shareRecordName;
@property(readonly, nonatomic) NSString *rootRecordType;
@property(readonly, nonatomic) CKRecordID *rootRecordID;
- (id)proposedStagingZoneIdentificationWithCurrentUserID:(id)arg1;	// IMP=0x0010000000117820
- (_Bool)isSupportedShare:(id)arg1;	// IMP=0x001000000011777a
- (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x0010000000117706
- (id)updatedFlagsFromDeletedCKRecordID:(id)arg1 recordType:(id)arg2;	// IMP=0x00100000001175d4
- (id)updatedScopeChangeFromScopeChange:(id)arg1 currentUserID:(id)arg2 withDeletedCKRecordID:(id)arg3 recordType:(id)arg4;	// IMP=0x00100000001175cc
- (id)updatedFlagsFromCKRecord:(id)arg1;	// IMP=0x00100000001174dc
- (id)scopeFlagsUpdateFromCKRecords:(id)arg1;	// IMP=0x0010000000117371
- (id)updatedScopeChangeFromScopeChange:(id)arg1 currentUserID:(id)arg2 withCKRecord:(id)arg3;	// IMP=0x0010000000117051
- (id)scopeChangeFromCKRecords:(id)arg1 currentUserID:(id)arg2 previousScopeChange:(id)arg3;	// IMP=0x0010000000116d68
- (id)_baseScopeChange;	// IMP=0x0010000000116cf5
- (id)recordsToUpdateFromScopeChange:(id)arg1 currentUserID:(id)arg2;	// IMP=0x0010000000116ce8
@property(readonly, nonatomic) CKRecordID *shareRecordIDToDelete;
@property(readonly, nonatomic) _Bool supportsZoneCreation;
@property(readonly, nonatomic) _Bool supportsZoneDelete;
- (id)recordsToFetchForScopeInfoWithCurrentUserID:(id)arg1;	// IMP=0x0010000000116c11
- (id)initWithCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x00100000001166a4

@end

