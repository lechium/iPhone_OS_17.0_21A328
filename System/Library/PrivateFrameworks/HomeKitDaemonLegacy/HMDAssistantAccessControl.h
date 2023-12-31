//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAssistantAccessControlModel, HMDUser, NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAssistantAccessControl : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_appleMediaAccessories;	// 16 = 0x10
    NSMutableSet *_hapAccessoryIdentifiers;	// 24 = 0x18
    _Bool _enabled;	// 32 = 0x20
    _Bool _activityNotificationsEnabledForPersonalRequests;	// 33 = 0x21
    HMDUser *_user;	// 40 = 0x28
    unsigned long long _cachedHash;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_clientQueue;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b077d5
+ (id)logCategory;	// IMP=0x0010000000b077a5
+ (id)modelIDNamespace;	// IMP=0x0010000000b07775
+ (id)accessControlWithMessage:(id)arg1 user:(id)arg2 currentAccessories:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000b06ba4
+ (_Bool)isAccessorySupported:(id)arg1;	// IMP=0x0010000000b06a54
- (void).cxx_destruct;	// IMP=0x0000000000b04b11
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b045db
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b041e9
- (id)logIdentifier;	// IMP=0x0000000000b04199
- (id)assistantAccessControlModelWithRemovedAccessories:(id)arg1;	// IMP=0x0000000000b03bd1
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000b03bcb
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000b02fb5
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x0000000000b02e2f
@property(readonly, copy) HMDAssistantAccessControlModel *model;
@property(readonly, copy) NSUUID *modelID;
- (void)notifyClientOfUpdateWithMessage:(id)arg1;	// IMP=0x0000000000b02acd
- (void)removeAccessoriesAddedByOldController:(id)arg1;	// IMP=0x0000000000b02a15
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x0000000000b0295d
- (void)removeAccessory:(id)arg1;	// IMP=0x0000000000b02673
- (void)addAccessory:(id)arg1;	// IMP=0x0000000000b02432
- (void)setAppleMediaAccessories:(id)arg1;	// IMP=0x0000000000b023c5
- (void)setHapAccessoryIdentifiers:(id)arg1;	// IMP=0x0000000000b02358
@property(readonly, copy) NSArray *accessories;
@property(getter=areActivityNotificationsEnabledForPersonalRequests) _Bool activityNotificationsEnabledForPersonalRequests; // @synthesize activityNotificationsEnabledForPersonalRequests=_activityNotificationsEnabledForPersonalRequests;
@property unsigned long long options; // @synthesize options=_options;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000b020c0
@property(readonly, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, copy) NSString *propertyDescription;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b01c20
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x0000000000b01b99
- (void)configure;	// IMP=0x0000000000b01a94
- (id)initWithUser:(id)arg1;	// IMP=0x0000000000b01a62
- (id)initWithUser:(id)arg1 appleAccessories:(id)arg2 hapAccessoryIdentifiers:(id)arg3 enabled:(_Bool)arg4 activityNotificationsEnabledForPersonalRequests:(_Bool)arg5;	// IMP=0x0000000000b018a0
- (id)initWithUser:(id)arg1 appleAccessories:(id)arg2 enabled:(_Bool)arg3;	// IMP=0x0000000000b01874
- (id)initWithUser:(id)arg1 model:(id)arg2;	// IMP=0x0000000000b01519
- (id)init;	// IMP=0x0000000000b01471

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

