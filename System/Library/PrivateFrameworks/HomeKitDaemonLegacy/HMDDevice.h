//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccount, HMDDeviceAddress, HMDDeviceCapabilities, HMDHomeKitVersion, HMDRPIdentity, HMFNetService, HMFProductInfo, NSArray, NSData, NSSet, NSString, NSUUID;
@protocol HMFCancellable;

__attribute__((visibility("hidden")))
@interface HMDDevice : HMFObject
{
    HMFNetService *_observedNetService;	// 8 = 0x8
    id <HMFCancellable> _netServiceKVOCancellation;	// 16 = 0x10
    _Bool _lastKnownIsPublishingStateValue;	// 24 = 0x18
    struct hmf_unfair_data_lock_s _lock;	// 28 = 0x1c
    NSSet *_handles;	// 32 = 0x20
    _Bool _dirty;	// 40 = 0x28
    _Bool _locallyTracked;	// 41 = 0x29
    _Bool _cloudTracked;	// 42 = 0x2a
    NSString *_name;	// 48 = 0x30
    HMDAccount *_account;	// 56 = 0x38
    HMFProductInfo *_productInfo;	// 64 = 0x40
    HMDHomeKitVersion *_version;	// 72 = 0x48
    HMDDeviceCapabilities *_capabilities;	// 80 = 0x50
    HMDRPIdentity *_rpIdentity;	// 88 = 0x58
    NSUUID *_modelIdentifier;	// 96 = 0x60
    HMDHomeKitVersion *_localOnlyVersionFromIDS;	// 104 = 0x68
    NSUUID *_idsIdentifierHash;	// 112 = 0x70
    NSUUID *_identifier;	// 120 = 0x78
    NSUUID *_sharedUserIDSIdentifier;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000075e2c5
+ (id)logCategory;	// IMP=0x001000000075e295
+ (id)deviceWithHandle:(id)arg1;	// IMP=0x001000000075e1ae
+ (id)deviceWithDestination:(id)arg1;	// IMP=0x001000000075e05b
+ (id)destinationForDevice:(id)arg1 service:(id)arg2;	// IMP=0x0010000000011d1f
- (void).cxx_destruct;	// IMP=0x000000000075c3cf
@property(copy) NSUUID *sharedUserIDSIdentifier; // @synthesize sharedUserIDSIdentifier=_sharedUserIDSIdentifier;
@property(getter=isCloudTracked) _Bool cloudTracked; // @synthesize cloudTracked=_cloudTracked;
@property(getter=isLocallyTracked) _Bool locallyTracked; // @synthesize locallyTracked=_locallyTracked;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
- (void)dealloc;	// IMP=0x000000000075c303
- (void)startObservingIsPublishingForService:(id)arg1;	// IMP=0x000000000075c1f7
- (_Bool)isPublishingOnObservedNetService;	// IMP=0x000000000075c1bd
- (_Bool)isBackingStorageEqual:(id)arg1;	// IMP=0x000000000075b75b
- (id)modelBackedObjects;	// IMP=0x000000000075b6b5
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000075b59c
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000075b18c
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly) Class modelClass;
- (void)__updateDeviceWithActions:(id)arg1;	// IMP=0x000000000075ad21
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000075a77c
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000075a56a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000759e3c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007594a2
- (_Bool)mergeObject:(id)arg1;	// IMP=0x000000000075883e
- (id)logIdentifier;	// IMP=0x00000000007587ee
@property(copy) HMDRPIdentity *rpIdentity; // @synthesize rpIdentity=_rpIdentity;
- (id)remoteDestinationString;	// IMP=0x00000000007585a2
@property(copy, setter=setIDSIdentifierHash:) NSUUID *idsIdentifierHash; // @synthesize idsIdentifierHash=_idsIdentifierHash;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(copy) HMDDeviceCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly) HMDHomeKitVersion *derivedVersion;
@property(readonly) _Bool supportsHH2;
@property(retain) HMDHomeKitVersion *localOnlyVersionFromIDS; // @synthesize localOnlyVersionFromIDS=_localOnlyVersionFromIDS;
- (void)updateWithDevice:(id)arg1;	// IMP=0x00000000007578ac
- (void)updateVersion:(id)arg1;	// IMP=0x0000000000757759
- (void)setVersion:(id)arg1;	// IMP=0x00000000007576d3
@property(readonly, copy) HMDHomeKitVersion *version; // @synthesize version=_version;
@property(copy) HMFProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property __weak HMDAccount *account; // @synthesize account=_account;
- (void)setName:(id)arg1;	// IMP=0x00000000007570f4
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, getter=isCurrentDevice) _Bool currentDevice;
@property(readonly, copy) NSUUID *idsIdentifier;
- (void)__handleAccountHandleUpdated:(id)arg1;	// IMP=0x0000000000756cb5
- (void)setHandles:(id)arg1;	// IMP=0x0000000000756b5a
@property(readonly, copy) NSData *pushToken;
- (id)globalDestination;	// IMP=0x0000000000756978
- (id)globalHandles;	// IMP=0x00000000007567bb
- (id)localHandles;	// IMP=0x00000000007565fe
- (id)handles;	// IMP=0x0000000000756593
@property(readonly) HMDDeviceAddress *deviceAddress;
- (_Bool)isSameAccountWithDevice:(id)arg1;	// IMP=0x0000000000756338
- (_Bool)isRelatedToDevice:(id)arg1;	// IMP=0x000000000075621b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000075615d
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithObjectModel:(id)arg1;	// IMP=0x0000000000755a2d
- (id)initWithDeviceAddress:(id)arg1;	// IMP=0x0000000000755879
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 name:(id)arg3 productInfo:(id)arg4 version:(id)arg5 capabilities:(id)arg6;	// IMP=0x00000000007556be
- (id)init;	// IMP=0x0000000000755616
- (id)deviceForIDSService:(id)arg1;	// IMP=0x0000000000011a69
- (id)initWithService:(id)arg1 device:(id)arg2;	// IMP=0x00000000000115d3
@property(readonly, copy) NSArray *identities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

