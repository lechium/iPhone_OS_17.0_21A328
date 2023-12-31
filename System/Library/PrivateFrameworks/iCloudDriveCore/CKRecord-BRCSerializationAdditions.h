//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@class NSData, NSString;

@interface CKRecord (BRCSerializationAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x00100000000f6588
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x00100000000f6461
+ (id)desiredKeysWithMask:(unsigned short)arg1;	// IMP=0x0010000000101512
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000010112a
+ (id)rootDirectoryRecordForZoneID:(id)arg1;	// IMP=0x0010000000100f7b
+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;	// IMP=0x0010000000101a4f
+ (id)brc_fakeRecordWithErrorMarkerFor20716676;	// IMP=0x00100000001028d4
- (void)processAppLibraryDataWithMovedZoneNames:(id)arg1 serverZone:(id)arg2 isDeltaSync:(_Bool)arg3;	// IMP=0x00100000000ff0d8
- (id)_createAppLibraryIfNecessary:(id)arg1 session:(id)arg2;	// IMP=0x00100000000fef78
- (void)setLastUsedTime:(long long)arg1;	// IMP=0x00100000000feef6
- (void)serializeSideCarInfo:(id)arg1 filenameExtension:(id)arg2 diffs:(unsigned long long)arg3 deadInServerTruth:(_Bool)arg4;	// IMP=0x00100000000fecd6
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(_Bool)arg3;	// IMP=0x00100000000fe48e
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(_Bool)arg4 shouldPCSChainStatus:(unsigned char)arg5;	// IMP=0x00100000000fd672
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3 inSharedAlias:(_Bool)arg4;	// IMP=0x00100000000fd376
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3;	// IMP=0x00100000000fd361
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2;	// IMP=0x00100000000fd349
- (void)serializeFinderTags:(id)arg1 forCreation:(_Bool)arg2;	// IMP=0x00100000000fd2a6
- (void)serializeSystemFields:(id)arg1 includeCZMEtag:(_Bool)arg2;	// IMP=0x00100000000fd15e
- (void)serializeSystemFields:(id)arg1;	// IMP=0x00100000000fd147
- (_Bool)locateSideCarServerZone:(id *)arg1 shareRecordName:(id *)arg2 withSession:(id)arg3;	// IMP=0x00100000000fcf20
- (_Bool)_locateSideCarServerZone:(id *)arg1 withShareAliasReference:(id)arg2 withSession:(id)arg3;	// IMP=0x00100000000fcc3f
- (_Bool)deserializeSideCarInfo:(id *)arg1 error:(id *)arg2;	// IMP=0x00100000000fc8e1
- (_Bool)deserializeVersion:(id *)arg1 fakeStatInfo:(id *)arg2 clientZone:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000faea0
- (_Bool)deserializeSymlinkTarget:(id *)arg1 error:(id *)arg2;	// IMP=0x00100000000fad4d
- (_Bool)deserializeStatInfo:(id *)arg1 serverMetrics:(id *)arg2 itemID:(id)arg3 session:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000f8735
- (void)deserializeFolderSharingOptions:(unsigned long long *)arg1;	// IMP=0x00100000000f8723
- (_Bool)deserializeiWorkSharingOptions:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00100000000f8441
- (void)_deserializeRootSharingOptions:(unsigned long long *)arg1;	// IMP=0x00100000000f8329
- (_Bool)deserializeAliasInfo:(id *)arg1 serverZone:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000f703e
- (_Bool)deserializeFilename:(id *)arg1 basename:(id *)arg2 bounceno:(id *)arg3 extension:(id *)arg4 userInfo:(id)arg5 error:(id *)arg6;	// IMP=0x00100000000f68f6
- (_Bool)_deserializeValue:(id *)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3 expectClass:(Class)arg4 allowNil:(_Bool)arg5 errorDescription:(id *)arg6;	// IMP=0x00100000000f66bf
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x00100000000f63ce
- (void)sanitizeShortTokenFields;	// IMP=0x0010000000101a0e
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x0010000000100ee8
- (id)brc_lastEditorDeviceName;	// IMP=0x0010000000100bfe
- (_Bool)brc_currentUserOwnsLastEditorDeviceWithSession:(id)arg1;	// IMP=0x0010000000100b7b
- (id)brc_lastModifiedUserRecordNameWithCurrentUserRecordName:(id)arg1 personNameComponents:(id *)arg2;	// IMP=0x0010000000100633
- (_Bool)brc_safeToGetURL;	// IMP=0x00100000001004f6
- (id)brc_updateDroppedReason;	// IMP=0x001000000010049f
- (id)brc_oplockMergeEtag;	// IMP=0x0010000000100448
- (_Bool)brc_isInterestingRecordForSave;	// IMP=0x00100000001003a6
- (_Bool)brc_isInterestingRecordForSyncDown;	// IMP=0x0010000000100174
- (id)brc_containerMetadataIconPaths;	// IMP=0x00100000001021f7
- (id)brc_containerMetadataIconNames;	// IMP=0x0010000000102005
@property(readonly, nonatomic) NSData *brc_containerMetadataPropertiesData;
- (_Bool)brc_isfakeRecordWithErrorMarkerFor20716676;	// IMP=0x0010000000102904
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(_Bool)arg2;	// IMP=0x0010000000102e36
- (id)brc_sharedLinkDisplayName;	// IMP=0x0010000000102e24
- (id)brc_sharedRootDisplayName;	// IMP=0x0010000000102b28
- (id)brc_sharedRootExtension;	// IMP=0x00100000001029a7
- (_Bool)isFolderShare;	// IMP=0x001000000010294f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

