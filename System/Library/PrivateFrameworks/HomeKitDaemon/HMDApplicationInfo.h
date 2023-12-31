//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSData, NSHashTable, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HMDApplicationInfo : HMFObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    _Bool _independent;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    NSHashTable *_processes;	// 24 = 0x18
    HMDApplicationInfo *_companionApplicationInfo;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000068ec19
+ (id)applicationInfoForBundleIdentifier:(id)arg1;	// IMP=0x001000000068ea62
+ (id)applicationInfoForBundleURL:(id)arg1;	// IMP=0x001000000068e913
+ (id)privateVendorIdentifier;	// IMP=0x001000000068e8f5
- (void).cxx_destruct;	// IMP=0x000000000068e8b3
@property(readonly) HMDApplicationInfo *companionApplicationInfo; // @synthesize companionApplicationInfo=_companionApplicationInfo;
@property(readonly, getter=isIndependent) _Bool independent; // @synthesize independent=_independent;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)logIdentifier;	// IMP=0x000000000068e863
- (void)removeProcess:(id)arg1;	// IMP=0x000000000068e7e8
- (void)addProcess:(id)arg1;	// IMP=0x000000000068e76d
@property(readonly, copy) NSArray *processes;
- (id)clientIdentifierSalt:(id *)arg1;	// IMP=0x000000000068e5b9
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess;
@property(readonly, getter=isInstalled) _Bool installed;
@property(readonly) HMDApplicationInfo *hostApplicationInfo;
@property(readonly, copy) NSData *vendorIdentifier;
@property(readonly) NSURL *bundleURL;
- (id)attributeDescriptions;	// IMP=0x000000000068e30a
- (id)shortDescription;	// IMP=0x000000000068e29e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068e1c3
@property(readonly) unsigned long long hash;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000068e097
- (id)init;	// IMP=0x000000000068dfef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

