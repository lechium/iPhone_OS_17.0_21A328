//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDDomain, NSArray, NSData, NSError, NSFileProviderDomainVersion, NSString;

__attribute__((visibility("hidden")))
@interface FPDDomainDeadEndBackend : NSObject
{
    FPDDomain *_domain;	// 8 = 0x8
    NSError *_materializationError;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a444
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a439
- (void)hierarchyForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a3e2
- (void)hasNonUploadedFilesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a390
- (void)fetchThumbnailsAtURL:(id)arg1 versions:(id)arg2 size:(struct CGSize)arg3 perThumbnailCompletionHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003a340
- (void)listRemoteVersionsOfItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a2e7
- (void)resolveConflictAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a297
- (void)wakeForPushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a247
- (void)stateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a1f5
- (void)workingSetDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a1e5
- (void)movingItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a181
- (void)trashItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a12f
- (void)bulkItemChanges:(id)arg1 changedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a11d
- (_Bool)isAllowedToProvideItemID:(id)arg1 toConsumerWithIdentifier:(id)arg2;	// IMP=0x000000000003a115
- (void)fetchVendorEndpointWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a0c3
- (void)fetchServicesForItemID:(id)arg1 allowRestrictedSources:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a06f
- (void)forceUpdateBlockedProcessNamesFromDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a01f
- (void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039fcb
- (_Bool)isDeadEndBackend;	// IMP=0x0000000000039fc3
- (_Bool)needsRootsCreation;	// IMP=0x0000000000039fbb
- (id)createRootByImportingURL:(id)arg1 knownFolders:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000039f8c
- (id)createIndexerWithExtension:(id)arg1 enabled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000039f84
- (void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(_Bool)arg2 markItemDataless:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039f74
- (void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039f62
- (void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039f50
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039f3b
- (void)enumeratePendingSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039f0b
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039efb
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039ecd
- (void)copyDatabaseToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039e7d
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(_Bool)arg2;	// IMP=0x0000000000039e77
- (void)waitForStabilizationForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039e67
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 forBookmarkResolution:(_Bool)arg4 request:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000039d4e
- (_Bool)updateRootAfterDomainChangeWithError:(id *)arg1;	// IMP=0x0000000000039d46
- (void)itemChangedAtURL:(id)arg1 request:(id)arg2;	// IMP=0x0000000000039d40
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 request:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000039d2d
- (void)materializeItemWithID:(id)arg1 requestedRange:(struct _NSRange)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039d17
- (void)evictItemWithID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039d07
- (id)evictItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039cf5
- (id)startProvidingItemAtURL:(id)arg1 readerID:(id)arg2 readingOptions:(unsigned long long)arg3 request:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000039cdf
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 materializingIfNeeded:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039ccd
- (void)setPutBackInfoOnItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039cbd
- (void)putBackURLForTrashedItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039cab
- (void)itemIDForURL:(id)arg1 requireProviderItemID:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039c99
- (void)itemForURL:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039c87
- (void)itemForItemID:(id)arg1 ignoreAlternateContentsURL:(_Bool)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039c75
- (void)itemForItemID:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039c63
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property(readonly, nonatomic) NSData *backingStoreIdentity;
@property(readonly, copy) NSArray *checkableURLs;
@property(readonly, copy) NSArray *coordinationRootURLs;
@property(readonly, copy) NSArray *rootURLs; // @dynamic rootURLs;
- (_Bool)isProviderForURL:(id)arg1;	// IMP=0x0000000000039a77
- (_Bool)startWithReason:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000039a6f
- (void)invalidate;	// IMP=0x0000000000039a69
- (id)initWithDomain:(id)arg1 materializationError:(id)arg2;	// IMP=0x00000000000399d6
- (id)initWithDomain:(id)arg1;	// IMP=0x0000000000039941

// Remaining properties
@property(readonly, nonatomic) _Bool backgroundActivityIsPaused;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long errorGenerationCount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
