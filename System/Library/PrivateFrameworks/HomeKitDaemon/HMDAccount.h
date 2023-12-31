//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CNContact, HMDAccountHandle, HMDAccountIdentifier, HMDDevice, NSArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID, Protocol;
@protocol HMDAccountManager, NSCopying, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccount : HMFObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSSet *_handles;	// 24 = 0x18
    NSMutableSet *_devices;	// 32 = 0x20
    NSString *_appleAccountSenderCorrelationIdentifier;	// 40 = 0x28
    HMDAccountIdentifier *_identifier;	// 48 = 0x30
    id <HMDAccountManager> _manager;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000053c240
+ (id)logCategory;	// IMP=0x001000000053c210
+ (id)accountWithHandle:(id)arg1;	// IMP=0x001000000053c128
- (void).cxx_destruct;	// IMP=0x000000000053b363
@property __weak id <HMDAccountManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) HMDAccountIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)modelBackedObjects;	// IMP=0x000000000053b115
- (id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000053af86
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000053ac24
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000053ab33
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000053a4b2
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000053995e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000053987b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000053956d
- (_Bool)mergeObject:(id)arg1;	// IMP=0x00000000005389f1
- (_Bool)shouldMergeObject:(id)arg1;	// IMP=0x000000000053892e
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000005388c7
- (id)logIdentifier;	// IMP=0x000000000053884e
- (void)removeDevice:(id)arg1;	// IMP=0x0000000000538728
- (void)addDevice:(id)arg1;	// IMP=0x000000000053861f
- (id)deviceWithModelIdentifier:(id)arg1;	// IMP=0x0000000000538429
- (id)deviceForHandle:(id)arg1;	// IMP=0x00000000005381f8
- (id)deviceForIdentifier:(id)arg1;	// IMP=0x0000000000537fc7
@property(readonly, copy) NSArray *devices;
- (id)accountHandleWithModelIdentifier:(id)arg1;	// IMP=0x0000000000537d7f
- (void)_repairDevicesWithStaleHandle:(id)arg1;	// IMP=0x000000000053791c
- (void)removeHandle:(id)arg1;	// IMP=0x00000000005377f8
- (void)addHandle:(id)arg1;	// IMP=0x000000000053777e
- (void)setHandles:(id)arg1;	// IMP=0x00000000005374b1
@property(readonly, copy) HMDAccountHandle *primaryHandle;
@property(readonly, copy) NSArray *handles;
- (void)setAppleAccountSenderCorrelationIdentifier:(id)arg1;	// IMP=0x000000000053702b
- (id)appleAccountSenderCorrelationIdentifier;	// IMP=0x0000000000536fe5
@property(copy) NSString *senderCorrelationIdentifier;
@property(readonly, copy) CNContact *contact;
@property(readonly, copy) NSString *name;
@property(readonly) _Bool shouldCache;
@property(readonly, getter=isAuthenticated) _Bool authenticated;
- (id)attributeDescriptions;	// IMP=0x0000000000536a71
- (id)shortDescription;	// IMP=0x00000000005369b0
- (void)isOfKnownPersonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000536893
@property(readonly, nonatomic, getter=isPresentInContacts) _Bool presentInContacts;
- (_Bool)isRelatedToAccount:(id)arg1;	// IMP=0x00000000005364d2
- (_Bool)isEqualToAccount:(id)arg1;	// IMP=0x000000000053642a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005363a1
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;	// IMP=0x00000000005362fd
@property(readonly) id <NSCopying> backingModelKey;
- (_Bool)updateBackingModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000053615b
@property(readonly) Protocol *backingModelType;
- (id)initWithBackingModel:(id)arg1;	// IMP=0x0000000000535f81
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3;	// IMP=0x0000000000535a0e
- (id)init;	// IMP=0x0000000000535966
@property(readonly) HMDDevice *currentDevice;
@property(readonly, getter=isCurrentAccount) _Bool currentAccount;
- (_Bool)hasFamilyMember:(id)arg1;	// IMP=0x000000000053c34b
- (void)isPresentInFamilyCircleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000053c27f
@property(readonly, copy) NSArray *identities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

