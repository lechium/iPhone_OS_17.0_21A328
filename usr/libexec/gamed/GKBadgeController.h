//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKBadgeController : NSObject
{
    NSMutableDictionary *_badgeDictionaries[4];	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
    _Bool _dirty;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x0040000000118efe
- (void).cxx_destruct;	// IMP=0x002000000011b96c
- (void)registerBadgePermissionForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011b5e9
- (void)unbadgeAllApplications;	// IMP=0x001000000011b341
- (void)badgeAllApplications;	// IMP=0x001000000011b039
- (void)setBadgeCount:(unsigned long long)arg1 forBundleID:(id)arg2 badgeType:(unsigned long long)arg3;	// IMP=0x001000000011aadf
- (unsigned long long)_totalBadgeCountForBundleID:(id)arg1;	// IMP=0x001000000011a8c8
- (unsigned long long)badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x001000000011a62a
- (unsigned long long)_badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x001000000011a404
- (id)_dictionaryForBadgeType:(unsigned long long)arg1;	// IMP=0x001000000011a24c
- (void)badgeBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x0010000000119e24
- (void)badgeApplicationWithBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x00100000001198da
- (_Bool)isBadgingEnabledForBundleID:(id)arg1;	// IMP=0x0010000000119833
- (void)synchronize;	// IMP=0x0010000000119094
- (id)_plistKeyForBadgeType:(unsigned long long)arg1;	// IMP=0x001000000011906f
- (id)init;	// IMP=0x0010000000119007
- (id)_badgeCountURL;	// IMP=0x0010000000118f53

@end

