//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIAssetQueue : NSObject
{
    struct os_unfair_lock_s _stateLock;	// 8 = 0x8
    NSOperationQueue *_underlyingQueue;	// 16 = 0x10
    NSMutableDictionary *_pendingOperations;	// 24 = 0x18
    NSCountedSet *_priorityCounts;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001086d
@property(nonatomic) struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSCountedSet *priorityCounts; // @synthesize priorityCounts=_priorityCounts;
@property(retain, nonatomic) NSMutableDictionary *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(retain, nonatomic) NSOperationQueue *underlyingQueue; // @synthesize underlyingQueue=_underlyingQueue;
- (id)operationWithKey:(id)arg1;	// IMP=0x0000000000010752
- (void)addOperation:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000001054c
- (void)_didFetchAssetWithKey:(id)arg1 producingImage:(id)arg2 orError:(id)arg3;	// IMP=0x0000000000010164
- (void)_prepareToAddOperation:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000000fbd8
- (void)_operationDidCancel:(id)arg1;	// IMP=0x000000000000f711
- (void)_operationDidChangePriority:(id)arg1;	// IMP=0x000000000000f20f
- (void)_removeObserverForOperation:(id)arg1;	// IMP=0x000000000000f16e
- (void)_addObserverForOperation:(id)arg1;	// IMP=0x000000000000f0be
- (void)_didFinishFetchingAllAssets;	// IMP=0x000000000000ef88
- (void)_didFetchAllAssetsAtPriority:(long long)arg1;	// IMP=0x000000000000ee3d
- (void)_didBeginFetchingAssets;	// IMP=0x000000000000ed07
- (void)_decrementCountAt:(long long)arg1;	// IMP=0x000000000000ebe9
- (void)_incrementCountAt:(long long)arg1;	// IMP=0x000000000000eb1d
@property(nonatomic, getter=isSuspended) _Bool suspended;
@property(nonatomic) long long maxConcurrentOperationCount;
@property(nonatomic) long long qualityOfService;
@property(retain, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x000000000000e80e
- (id)init;	// IMP=0x000000000000e756

@end

