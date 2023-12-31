//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CKOperationGroup, CKServerChangeToken, CloudSettingStore, NSMutableArray;
@protocol CloudSettingSyncCoordinatorDelegate;

@interface CloudSettingSyncCoordinator : NSObject
{
    NSMutableArray *_syncingCompletionHandlers;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    _Bool _dataclassEnabled;	// 24 = 0x18
    _Bool _needsDataclassEnabledCheck;	// 25 = 0x19
    _Bool _needsAccountHashCheck;	// 26 = 0x1a
    CKServerChangeToken *_serverChangeToken;	// 32 = 0x20
    _Bool _isSynchronizing;	// 40 = 0x28
    _Bool _didReceiveSyncRequestWhileSyncing;	// 41 = 0x29
    _Bool _isPerformingInitialSyncUp;	// 42 = 0x2a
    _Bool _shouldPerformInitialSyncDown;	// 43 = 0x2b
    _Bool _isWaitingForPCSIdentityUpdate;	// 44 = 0x2c
    CKOperationGroup *_saveSettingsOperationGroup;	// 48 = 0x30
    CKOperationGroup *_fetchSettingsOperationGroup;	// 56 = 0x38
    CKOperationGroup *_deleteSettingsOperationGroup;	// 64 = 0x40
    CKOperationGroup *_saveBackgroundImageOperationGroup;	// 72 = 0x48
    CloudSettingStore *_settingStore;	// 80 = 0x50
    id <CloudSettingSyncCoordinatorDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000004e48a
@property(nonatomic) __weak id <CloudSettingSyncCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CloudSettingStore *settingStore; // @synthesize settingStore=_settingStore;
- (void)clearServerChangeToken;	// IMP=0x001000000004e3b0
- (void)_clearCachedCloudSettingsRecordZoneIfNecessaryForError:(id)arg1;	// IMP=0x001000000004e375
- (void)deleteRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e1a5
- (void)_clearPerSiteSettingsSyncData;	// IMP=0x001000000004e06a
- (void)_savePerSiteCloudKitRecordsToDisk:(id)arg1;	// IMP=0x001000000004dd9a
- (id)_perSitePreferencesStore;	// IMP=0x001000000004dcf5
- (void)savePerSiteRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d068
- (void)saveRecords:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cdb3
- (void)saveImageRecord:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ca4a
- (void)_pcsIdentitiesDidChangeNotification:(id)arg1;	// IMP=0x001000000004c8fc
- (void)_cleanUpAndCallCompletionHandlersWithError:(id)arg1 inOperationGroup:(id)arg2;	// IMP=0x001000000004c6e5
- (void)_didFailToSyncWithError:(id)arg1 inOperationGroup:(id)arg2;	// IMP=0x001000000004c663
- (void)_handleExpiredChangeTokenError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004c5d2
- (void)_continueFetchingSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004bd1b
- (void)_saveServerChangeToken:(id)arg1;	// IMP=0x001000000004bba8
- (void)_readServerChangeTokenFromUserDefaults;	// IMP=0x001000000004ba9c
- (void)_performSyncDown;	// IMP=0x001000000004b984
- (void)_continueSyncingAfterSyncingDown:(_Bool)arg1 inOperationGroup:(id)arg2;	// IMP=0x001000000004b873
- (void)_beginSyncingInOperationGroup:(id)arg1 completionHandlers:(id)arg2;	// IMP=0x001000000004b040
- (void)beginSyncingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004af93
- (void)beginInitialSyncUpWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004af7d
- (void)setNeedsAccountHashCheck;	// IMP=0x001000000004af24
- (_Bool)_updateAccountHashIfNeeded;	// IMP=0x001000000004ad05
- (_Bool)_isDataclassEnabled;	// IMP=0x001000000004ac06
- (void)userAccountChanged;	// IMP=0x001000000004abad
- (id)initWithSettingStore:(id)arg1 accountStore:(id)arg2;	// IMP=0x001000000004aa51
- (id)init;	// IMP=0x001000000004aa43

@end

