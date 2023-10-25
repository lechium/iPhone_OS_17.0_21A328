//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet, NSError, NSFileAccessProcessManager, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject
{
    NSXPCConnection *_client;	// 8 = 0x8
    NSString *_claimID;	// 16 = 0x10
    NSString *_purposeIDOrNil;	// 24 = 0x18
    _Bool _cameFromSuperarbiter;	// 32 = 0x20
    unsigned long long _blockageCount;	// 40 = 0x28
    _Bool _didWait;	// 48 = 0x30
    _Bool _isRevoked;	// 49 = 0x31
    NSMutableArray *_claimerBlockageReasons;	// 56 = 0x38
    NSError *_claimerError;	// 64 = 0x40
    NSMutableOrderedSet *_pendingClaims;	// 72 = 0x48
    NSMutableSet *_blockingClaims;	// 80 = 0x50
    NSCountedSet *_blockingReactorIDs;	// 88 = 0x58
    NSMutableArray *_providerCancellationProcedures;	// 96 = 0x60
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;	// 104 = 0x68
    NSMutableArray *_revocationProcedures;	// 112 = 0x70
    NSMutableArray *_devaluationProcedures;	// 120 = 0x78
    NSMutableArray *_finishingProcedures;	// 128 = 0x80
    NSFileAccessProcessManager *_processManager;	// 136 = 0x88
    NSObject<OS_dispatch_semaphore> *_claimerWaiter;	// 144 = 0x90
    _Bool _hasInvokedClaimer;	// 152 = 0x98
    _Bool _shouldEnableMaterializationDuringAccessorBlock;	// 153 = 0x99
    id _claimerOrNil;	// 160 = 0xa0
    CDUnknownBlockType _serverClaimerOrNil;	// 168 = 0xa8
    NSMutableArray *_sandboxTokens;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_arbiterQueue;	// 184 = 0xb8
    id _originatingReactorQueueID;	// 192 = 0xc0
    NSMutableDictionary *_fileHandlesForEvictionProtection;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000007c7d3a
+ (_Bool)canNewWriteOfItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapExistingWriteOfItemAtLocation:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00100000007c77ca
+ (_Bool)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapNewWriting:(_Bool)arg3 ofItemAtLocation:(id)arg4 options:(unsigned long long)arg5;	// IMP=0x00100000007c7761
@property _Bool shouldEnableMaterializationDuringAccessorBlock; // @synthesize shouldEnableMaterializationDuringAccessorBlock=_shouldEnableMaterializationDuringAccessorBlock;
@property(readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter; // @synthesize claimerWaiter=_claimerWaiter;
- (void)_protectIfNecessaryFileAtURL:(id)arg1 withOptions:(unsigned long long)arg2 forReading:(_Bool)arg3;	// IMP=0x00000000007ced12
- (void)protectFilesAgainstEviction;	// IMP=0x00000000007ced0c
- (_Bool)shouldCancelInsteadOfWaiting;	// IMP=0x00000000007ced04
@property(readonly, copy) NSArray *allURLs;
- (void)disavowed;	// IMP=0x00000000007cebe3
- (void)finished;	// IMP=0x00000000007ce9e2
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;	// IMP=0x00000000007ce9da
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;	// IMP=0x00000000007ce812
- (_Bool)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long *)arg2 andIfSoThenReevaluateSelf:(CDUnknownBlockType)arg3;	// IMP=0x00000000007ce538
- (id)description;	// IMP=0x00000000007ce51f
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x00000000007ce0c8
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x00000000007ce0c2
- (_Bool)isRevoked;	// IMP=0x00000000007ce0b9
- (_Bool)isGranted;	// IMP=0x00000000007ce0a1
- (void)devalueOldClaim:(id)arg1;	// IMP=0x00000000007ce09b
- (void)cancelled;	// IMP=0x00000000007cdedd
- (void)devalueSelf;	// IMP=0x00000000007cdbf8
- (void)revoked;	// IMP=0x00000000007cd8ec
- (void)invokeClaimer;	// IMP=0x00000000007cd8bb
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;	// IMP=0x00000000007cc815
- (_Bool)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007cc0ee
- (_Bool)canAccessLocations:(id)arg1 forReading:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000007cbdef
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(_Bool)arg2 relinquishUsingProcedureGetter:(CDUnknownBlockType)arg3;	// IMP=0x00000000007cb2c4
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;	// IMP=0x00000000007cb150
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;	// IMP=0x00000000007cafdf
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(CDUnknownBlockType)arg2;	// IMP=0x00000000007cad1b
- (void)makeProvidersProvideItemsForReadingLocations:(id)arg1 options:(unsigned long long *)arg2 andWritingLocationsIfNecessary:(id)arg3 options:(unsigned long long *)arg4 thenContinue:(CDUnknownBlockType)arg5;	// IMP=0x00000000007ca229
- (void)_checkIfMovingRequiresProvidingAmongWritingLocations:(id)arg1 options:(unsigned long long *)arg2 thenContinue:(CDUnknownBlockType)arg3;	// IMP=0x00000000007c9594
- (void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(CDUnknownBlockType)arg3;	// IMP=0x00000000007c90a2
- (_Bool)shouldMakeProviderProvideItemAtLocation:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000007c9036
- (void)ensureProvidersOfItemsAtReadingLocations:(id)arg1 writingLocations:(id)arg2 thenContinue:(CDUnknownBlockType)arg3;	// IMP=0x00000000007c8f4c
- (void)granted;	// IMP=0x00000000007c8f46
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000007c8f3e
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000007c8f36
- (void)removePendingClaims:(id)arg1;	// IMP=0x00000000007c8dbd
- (id)pendingClaims;	// IMP=0x00000000007c8d9b
- (void)addPendingClaim:(id)arg1;	// IMP=0x00000000007c8cfd
- (void)evaluateNewClaim:(id)arg1;	// IMP=0x00000000007c8bbb
- (void)scheduleBlockedClaim:(id)arg1;	// IMP=0x00000000007c892d
- (void)givePriorityToClaim:(id)arg1;	// IMP=0x00000000007c8777
- (_Bool)isBlockedByClaimWithPurposeID:(id)arg1;	// IMP=0x00000000007c8643
- (_Bool)claimerInvokingIsBlockedByReactorWithID:(id)arg1;	// IMP=0x00000000007c8509
- (void)removeBlockingReactorID:(id)arg1;	// IMP=0x00000000007c84f3
- (void)addBlockingReactorID:(id)arg1;	// IMP=0x00000000007c84b6
- (void)whenFinishedPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007c844b
- (void)whenDevaluedPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007c83e9
- (void)whenRevokedPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007c8387
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x00000000007c837f
- (id)claimerError;	// IMP=0x00000000007c8368
- (void)setClaimerError:(id)arg1;	// IMP=0x00000000007c8333
- (void)unblockClaimerForReason:(id)arg1;	// IMP=0x00000000007c82c3
- (void)blockClaimerForReason:(id)arg1;	// IMP=0x00000000007c8277
- (_Bool)didWait;	// IMP=0x00000000007c826e
- (void)unblock;	// IMP=0x00000000007c81c5
- (void)block;	// IMP=0x00000000007c8193
- (void)startObservingClientState;	// IMP=0x00000000007c7f4b
- (_Bool)cameFromSuperarbiter;	// IMP=0x00000000007c7f42
- (void)setCameFromSuperarbiter;	// IMP=0x00000000007c7f38
- (void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007c7e84
- (void)prepareClaimForGrantingWithArbiterQueue:(id)arg1;	// IMP=0x00000000007c7dae
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007c7da8
- (int)clientProcessIdentifier;	// IMP=0x00000000007c7d87
- (id)purposeID;	// IMP=0x00000000007c7d70
- (id)claimID;	// IMP=0x00000000007c7d59
- (id)client;	// IMP=0x00000000007c7d42
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007c7c3b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007c7b90
- (void)dealloc;	// IMP=0x00000000007c7a53
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;	// IMP=0x00000000007c79ab
- (void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3;	// IMP=0x00000000007c7915
- (_Bool)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1;	// IMP=0x00000000007c78eb
- (_Bool)shouldWritingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;	// IMP=0x00000000007c78de
- (_Bool)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;	// IMP=0x00000000007c7859

@end
