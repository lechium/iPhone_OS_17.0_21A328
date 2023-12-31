//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;
@protocol CloudBookmarkSyncMigrationSyncDownHandlerDelegate;

@interface CloudBookmarkSyncMigrationSyncDownHandler
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSMutableSet *_recordNamesToDelete;	// 16 = 0x10
    _Bool _isSyncing;	// 24 = 0x18
    id <CloudBookmarkSyncMigrationSyncDownHandlerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000087c67
@property(nonatomic) __weak id <CloudBookmarkSyncMigrationSyncDownHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldApplyReference:(id)arg1 withGeneration:(id)arg2 toAttribute:(id)arg3 inRecordWithName:(id)arg4;	// IMP=0x0010000000087b75
- (id)_cloudBookmarkForRecord:(id)arg1 isNewBookmark:(_Bool *)arg2;	// IMP=0x0010000000087856
- (void)_updateLocalBookmarkWithCKRecord:(id)arg1;	// IMP=0x00100000000875d2
- (void)_didDeleteRecordWithName:(id)arg1;	// IMP=0x0010000000087570
- (void)_performSyncDownInOperationGroup:(id)arg1 withRetryManager:(id)arg2;	// IMP=0x00100000000869a4
- (void)_performSyncDownInOperationGroup:(id)arg1;	// IMP=0x0010000000086929
- (void)_didFinishSyncingReceivingRecordNames:(id)arg1 error:(id)arg2;	// IMP=0x0010000000086748
- (void)beginSyncDownInOperationGroup:(id)arg1 keepingRecordsMarkedAsDeletedLocally:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008655b
- (void);	// IMP=0x00100000000864af

@end

