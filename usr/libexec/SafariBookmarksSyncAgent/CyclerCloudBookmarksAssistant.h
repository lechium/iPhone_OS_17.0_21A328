//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudBookmarkStore, CloudBookmarksMigrationCoordinator, NSString;
@protocol WBSBookmarkDBAccess;

@interface CyclerCloudBookmarksAssistant : NSObject
{
    id <WBSBookmarkDBAccess> _databaseAccessor;	// 8 = 0x8
    CloudBookmarkStore *_bookmarkStore;	// 16 = 0x10
    CloudBookmarksMigrationCoordinator *_migrationCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000a49af
- (id)_descriptionForErrorCode:(long long)arg1;	// IMP=0x00100000000a4994
- (id)_errorWithCode:(long long)arg1;	// IMP=0x00100000000a48ae
- (void)migrateToCloudKitWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a4603
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a4220
- (void)clearLocalDataIncludingMigrationState:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a40ba
- (void)resetToDAVDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a409f
- (id)initWithBookmarkStore:(id)arg1 databaseAccessor:(id)arg2 migrationCoordinator:(id)arg3;	// IMP=0x00100000000a3fd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
