//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CFPasteboardCache, _CFPasteboardClientInstanceID;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CFPasteboardStore : NSObject
{
    struct __CFString *_name;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _CFPasteboardCache *_cache;	// 24 = 0x18
    unsigned char _restrictSandboxExtension;	// 32 = 0x20
    int _allowedSandboxExtensionPID;	// 36 = 0x24
    struct {
        unsigned int val[8];
    } _allowedSandboxExtensionAuditToken;	// 40 = 0x28
    _CFPasteboardClientInstanceID *_owner;	// 72 = 0x48
    unsigned char _ownerHasPendingChanges;	// 80 = 0x50
    struct __CFDictionary *_clientInstancesByUUID;	// 88 = 0x58
    struct __CFSet *_clientInstancesWithCacheInfoForCurrentGeneration;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_expirationTimer;	// 104 = 0x68
}

+ (struct __CFString *)dumpAllClients;	// IMP=0x0060000000108026
+ (void)_removePasteboardWithName:(struct __CFString *)arg1;	// IMP=0x0060000000104590
+ (id)pasteboardStoreWithName:(struct __CFString *)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x006000000010445a
+ (struct __CFArray *)copyAllPasteboards;	// IMP=0x006000000010434c
- (id)description;	// IMP=0x0000000000107f73
- (void)flushOwnerChangesIfNecessaryInResponseToMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000107af1
- (void)handleAllowExtensionProcess:(id)arg1;	// IMP=0x0000000000107992
- (void)handleRestrictExtension:(id)arg1;	// IMP=0x00000000001078d0
- (void)handleUniquePromiseFile:(id)arg1;	// IMP=0x0000000000107899
- (void)handleRelease:(id)arg1;	// IMP=0x0000000000107847
- (void)handleCreate:(id)arg1;	// IMP=0x00000000001074ac
- (void)handleDeadClientWithUUID:(struct __CFUUID *)arg1 allowPasteboardDeletion:(_Bool)arg2;	// IMP=0x0000000000107285
- (void)handleRefreshCache:(id)arg1;	// IMP=0x0000000000106faa
- (void)resolveAllPromisesOwnedByProcessWithIdentifier:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106db1
- (void)handleResolvePromises:(id)arg1;	// IMP=0x00000000001069f3
- (void)handleRequestData:(id)arg1;	// IMP=0x000000000010672f
- (void)requestDataForGeneration:(unsigned long long)arg1 itemIdentifier:(unsigned long long)arg2 flavor:(struct __CFString *)arg3 inResponseToMessage:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001062f3
- (id)filterDataFromEntry:(id)arg1 inResponseToMessage:(id)arg2 error:(int *)arg3;	// IMP=0x00000000001061f0
- (id)reissueSandboxExtensionFromEntry:(id)arg1 toClient:(id)arg2 error:(int *)arg3;	// IMP=0x0000000000105ff7
- (int)analyzeSandboxExtensionEntry:(id)arg1 destinedForClient:(id)arg2;	// IMP=0x0000000000105ed1
- (void)handleSetDataFlags:(id)arg1;	// IMP=0x0000000000105b45
- (void)handleRegisterEntries:(id)arg1;	// IMP=0x0000000000105752
- (void)_onqueue_handleNewEntries:(struct __CFArray *)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(_Bool *)arg3;	// IMP=0x0000000000105648
- (void)handleGetCounts:(id)arg1;	// IMP=0x00000000001054d2
- (void)handleNotifyHasEntries:(id)arg1;	// IMP=0x00000000001053f2
- (void)handleSetExpirationDate:(id)arg1;	// IMP=0x0000000000104f27
- (void)_onqueue_handleExpirationTimer;	// IMP=0x0000000000104efd
- (void)handleMakeGenerationLocal:(id)arg1;	// IMP=0x0000000000104efc
- (void)handleBeginGeneration:(id)arg1;	// IMP=0x0000000000104d99
- (void)_onqueue_beginGenerationWithNewOwner:(struct __CFUUID *)arg1;	// IMP=0x0000000000104ced
- (void)_onqueue_clearGenerationSpecificData;	// IMP=0x0000000000104c96
- (id)_onqueue_cacheForGeneration:(long long)arg1;	// IMP=0x0000000000104c79
- (long long)_onqueue_nextGenerationCount;	// IMP=0x0000000000104c4b
- (void)_onqueue_noteMessageSenderNeedsCacheInvalidation:(id)arg1;	// IMP=0x0000000000104be8
- (void)_onqueue_invalidateCurrentGenerationCacheEntries:(struct __CFArray *)arg1 inResponseToMessage:(id)arg2;	// IMP=0x00000000001047b8
- (void)_onqueue_invalidateCachesWithCurrentGeneration;	// IMP=0x00000000001045d5
- (void)performBarrier:(CDUnknownBlockType)arg1;	// IMP=0x00000000001045c9
- (void)dealloc;	// IMP=0x00000000001042b2
- (id)_initWithName:(struct __CFString *)arg1;	// IMP=0x000000000010419b

@end

