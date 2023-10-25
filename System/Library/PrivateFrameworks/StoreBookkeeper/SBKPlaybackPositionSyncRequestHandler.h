//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKSyncRequestHandler.h"

@class NSDictionary, NSError, NSMutableDictionary, NSObject, NSString, SBKSyncTransaction, SBKTransactionController;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource, SBKUniversalPlaybackPositionTransactionContext;

__attribute__((visibility("hidden")))
@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncOperationQueue;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    id <SBKUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;	// 32 = 0x20
    SBKSyncTransaction *_currentKVSTransaction;	// 40 = 0x28
    NSDictionary *_metadataItemsToCommitToDataSource;	// 48 = 0x30
    NSDictionary *_metadataItemsToCommitToKVSStorage;	// 56 = 0x38
    NSMutableDictionary *_metadataItemsFromDataSource;	// 64 = 0x40
    NSMutableDictionary *_responseMetadataItemsToCommitToDataSource;	// 72 = 0x48
    NSMutableDictionary *_responseMetadataItemsMergedToCommitBackToKVSStorage;	// 80 = 0x50
    _Bool _syncInProgress;	// 88 = 0x58
    _Bool _canceled;	// 89 = 0x59
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;	// 96 = 0x60
    SBKTransactionController *_kvsController;	// 104 = 0x68
    NSError *_fatalSyncError;	// 112 = 0x70
    NSString *_overrideSyncAnchor;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000196f2
@property(retain, nonatomic) NSString *overrideSyncAnchor; // @synthesize overrideSyncAnchor=_overrideSyncAnchor;
@property(retain, nonatomic) NSError *fatalSyncError; // @synthesize fatalSyncError=_fatalSyncError;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property(retain, nonatomic) SBKTransactionController *kvsController; // @synthesize kvsController=_kvsController;
@property(retain, nonatomic) id <SBKUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;	// IMP=0x0000000000019569
- (id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;	// IMP=0x0000000000019522
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;	// IMP=0x00000000000194a8
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(_Bool *)arg3;	// IMP=0x0000000000019479
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(_Bool)arg4 isDirty:(_Bool *)arg5;	// IMP=0x000000000001930b
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;	// IMP=0x00000000000192dc
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;	// IMP=0x00000000000192ad
- (void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;	// IMP=0x0000000000019298
- (void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;	// IMP=0x0000000000019280
- (_Bool)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;	// IMP=0x00000000000190e3
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000018f77
- (void)_signalKVSTransactionCompletion:(id)arg1;	// IMP=0x0000000000018f1e
- (id)_synchronouslyRunKVSTransaction:(id)arg1;	// IMP=0x0000000000018da7
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg1 processConflicts:(_Bool)arg2;	// IMP=0x0000000000018c6c
- (void)_mergeMetadataItemsFromSyncResponse;	// IMP=0x0000000000018a8e
- (int)_mergeConflictedItemFromSyncResponse:(id)arg1;	// IMP=0x00000000000188bc
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000186ff
- (void)cancel;	// IMP=0x00000000000186eb
- (void)timeout;	// IMP=0x0000000000018671
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000000184cb
- (_Bool)_shouldStop;	// IMP=0x0000000000018436
- (_Bool)_synchronize:(id *)arg1;	// IMP=0x00000000000178b0
- (void)_dataSourceCancelTransaction;	// IMP=0x0000000000017825
- (void)clearTransactionResponseData;	// IMP=0x0000000000017724
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2 accountIdentifier:(id)arg3;	// IMP=0x0000000000017201
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2;	// IMP=0x0000000000017156
- (void)setMetadataItemsToCommitToKVSStorage:(id)arg1;	// IMP=0x0000000000017104
- (id)metadataItemsToCommitToKVSStorage;	// IMP=0x00000000000170c0
- (void)setMetadataItemsToCommitToDataSource:(id)arg1;	// IMP=0x000000000001706e
- (id)metadataItemsToCommitToDataSource;	// IMP=0x000000000001702a
- (void)setCurrentKVSTransaction:(id)arg1;	// IMP=0x0000000000016fd8
- (id)currentKVSTransaction;	// IMP=0x0000000000016f94
- (void)setDataSourceTransactionContext:(id)arg1;	// IMP=0x0000000000016f42
- (id)dataSourceTransactionContext;	// IMP=0x0000000000016efe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
