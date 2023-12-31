//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface ADSyncBlacklist : NSObject
{
    NSDictionary *_cachedTimeoutTable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000a741a
- (void).cxx_destruct;	// IMP=0x00200000000a6ac6
- (void)_saveTimeouts:(id)arg1;	// IMP=0x00100000000a69b6
- (void)saveTimeouts:(id)arg1;	// IMP=0x00100000000a6929
- (id)_timeouts:(id)arg1 expiringAfter:(id)arg2;	// IMP=0x00100000000a6822
- (id)_timeoutsExpiringAfter:(id)arg1;	// IMP=0x00100000000a6809
- (id)timeoutsExpiringAfter:(id)arg1;	// IMP=0x00100000000a670b
- (void)filterBlacklistedKeys:(id)arg1 appSources:(id)arg2;	// IMP=0x00100000000a625c
- (void)filterBlacklistedKeys:(id)arg1 vocabSources:(id)arg2;	// IMP=0x00100000000a60ad
- (void)filterBlacklistedAnchorsFrom:(id)arg1 includingNewRestrictionsFromResponse:(id)arg2;	// IMP=0x00100000000a5a6f
- (void)checkPermissionToSyncSlot:(id)arg1 forApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a598d
- (void)checkIfAnyUserVocabularyIsBlacklistedForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a58c7
- (id)_storePath;	// IMP=0x00100000000a5879
- (id)init;	// IMP=0x00100000000a5748

@end

