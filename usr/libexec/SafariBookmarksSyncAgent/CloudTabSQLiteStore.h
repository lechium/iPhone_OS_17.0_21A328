//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneID, NSString;
@protocol CloudTabLocalStoreDelegate;

@interface CloudTabSQLiteStore
{
    CKRecordZoneID *_cloudTabsRecordZoneID;	// 8 = 0x8
    id <CloudTabLocalStoreDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009ae51
@property(nonatomic) __weak id <CloudTabLocalStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (int)_saveCloseRequest:(id)arg1;	// IMP=0x001000000009aad3
- (id)_loadCloseRequests;	// IMP=0x001000000009a492
- (int)_saveTab:(id)arg1;	// IMP=0x0010000000099f7e
- (id)_cloudTabFromRow:(id)arg1 deviceUUIDString:(id)arg2;	// IMP=0x0010000000099a62
- (int)_loadTabsForDevice:(id)arg1;	// IMP=0x0010000000099491
- (int)_saveDevice:(id)arg1;	// IMP=0x001000000009913e
- (id)_loadDeviceWithUUIDString:(id)arg1;	// IMP=0x0010000000098e10
- (id)_loadDevices;	// IMP=0x00100000000988ce
- (void)_vacuumFailedWithError:(int)arg1;	// IMP=0x00100000000987af
- (void)_failedToDeleteMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x001000000009865d
- (void)_failedToInsertMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x001000000009850b
- (void)_failedToUpdateMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x00100000000983b9
- (void)_failedToSetSchemaVersion:(int)arg1 withError:(int)arg2;	// IMP=0x0010000000098288
- (void)_databaseWillBeRecreated;	// IMP=0x001000000009823d
- (void)_databaseAtURL:(id)arg1 failedToDeleteWithError:(id)arg2;	// IMP=0x001000000009814f
- (void)_databaseWillBeDeleted;	// IMP=0x0010000000098104
- (void)_databaseWillBeClosed;	// IMP=0x00100000000980d4
- (void)_databaseAtURL:(id)arg1 hasIncorrectSchemaVersion:(int)arg2;	// IMP=0x001000000009806a
- (void)_failedToEnableSecureDeleteWithError:(int)arg1;	// IMP=0x0010000000097f4b
- (void)_failedToEnableForeignKeysWithError:(int)arg1;	// IMP=0x0010000000097e2c
- (void)_failedToEnableWALWithError:(id)arg1;	// IMP=0x0010000000097d65
- (void)_failedToExcludeDatabaseFromBackupWithError:(id)arg1;	// IMP=0x0010000000097c9e
- (void)_databaseAtURL:(id)arg1 failedToOpenWithError:(id)arg2;	// IMP=0x0010000000097bb0
- (void)_databaseWillBeOpened;	// IMP=0x0010000000097b80
- (int)_resetDatabaseSchema;	// IMP=0x001000000009791d
- (int)_createFreshDatabaseSchema;	// IMP=0x0010000000097496
- (int)_currentSchemaVersion;	// IMP=0x001000000009748b
- (void)database:(id)arg1 hadSevereError:(id)arg2;	// IMP=0x00100000000973d7
- (void)setUseManateeContainerForSyncing:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000972b7
- (void)getUseManateeContainerForSyncingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009718a
- (void)saveCloudTabDevices:(id)arg1 tabs:(id)arg2 closeRequests:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000096b4f
- (void)deleteRecordsWithPrimaryKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000965e9
- (void)loadCloudTabDeviceWithUUIDString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009643b
- (void)loadCloudTabDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096132
- (id)initWithDatabaseURL:(id)arg1 cloudTabsRecordZoneID:(id)arg2;	// IMP=0x001000000009608c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
