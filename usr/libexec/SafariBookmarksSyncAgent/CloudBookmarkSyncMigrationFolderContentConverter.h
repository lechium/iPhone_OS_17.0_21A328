//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CloudBookmarkSyncMigrationPositionGenerator, NSEnumerator;

@interface CloudBookmarkSyncMigrationFolderContentConverter
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CloudBookmarkSyncMigrationPositionGenerator *_positionGenerator;	// 16 = 0x10
    NSEnumerator *_recordNameEnumerator;	// 24 = 0x18
    _Bool _isMigrating;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007dbac
- (id)positionForCloudBookmarkWithRecordName:(id)arg1;	// IMP=0x001000000007db8f
- (id)generateIdentityHashWithComponents:(id)arg1;	// IMP=0x001000000007daee
- (id)_nextCloudBookmarkToSave;	// IMP=0x001000000007d9a8
- (void)_didFinishSavingRecordsWithNames:(id)arg1;	// IMP=0x001000000007d8be
- (void)_didFailSavingWithError:(id)arg1;	// IMP=0x001000000007d7f5
- (void)beginFolderMigrationInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007d5c9

@end

