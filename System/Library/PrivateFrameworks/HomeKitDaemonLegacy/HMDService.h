//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDApplicationData, HMDBulletinBoardNotification, HMDHAPAccessory, HMFMessageDispatcher, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMDServiceOwner, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDService : HMFObject
{
    struct os_unfair_recursive_lock_s _lock;	// 8 = 0x8
    _Bool _hidden;	// 16 = 0x10
    _Bool _primary;	// 17 = 0x11
    HMDApplicationData *_appData;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSNumber *_instanceID;	// 40 = 0x28
    NSNumber *_labelIndex;	// 48 = 0x30
    NSNumber *_labelNamespace;	// 56 = 0x38
    NSString *_serviceSubtype;	// 64 = 0x40
    NSNumber *_configurationState;	// 72 = 0x48
    NSArray *_characteristics;	// 80 = 0x50
    NSString *_configuredName;	// 88 = 0x58
    NSString *_expectedConfiguredName;	// 96 = 0x60
    NSString *_lastSeenConfiguredName;	// 104 = 0x68
    NSString *_providedName;	// 112 = 0x70
    HMDHAPAccessory *_accessory;	// 120 = 0x78
    NSString *_name;	// 128 = 0x80
    NSString *_defaultName;	// 136 = 0x88
    NSString *_associatedServiceType;	// 144 = 0x90
    NSArray *_linkedServices;	// 152 = 0x98
    NSString *_serviceType;	// 160 = 0xa0
    HMDBulletinBoardNotification *_bulletinBoardNotification;	// 168 = 0xa8
    NSNumber *_mediaSourceIdentifier;	// 176 = 0xb0
    NSArray *_mediaSourceDisplayOrder;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_workQueue;	// 192 = 0xc0
    HMFMessageDispatcher *_messageDispatcher;	// 200 = 0xc8
    unsigned long long _serviceProperties;	// 208 = 0xd0
    NSUUID *_cachedAccessoryUUID;	// 216 = 0xd8
    id <HMDServiceOwner> _owner;	// 224 = 0xe0
    NSNumber *_lastKnownDiscoveryMode;	// 232 = 0xe8
    NSNumber *_lastKnownOperatingState;	// 240 = 0xf0
    NSNumber *_lastKnownOperatingStateAbnormalReasons;	// 248 = 0xf8
    NSMutableDictionary *_deviceLastRequestPresenceDateMap;	// 256 = 0x100
    NSString *_logID;	// 264 = 0x108
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00100000005598e9
+ (_Bool)_parseOperatingStateResponseValue:(id)arg1 intoState:(id *)arg2 abnormalReasons:(id *)arg3;	// IMP=0x001000000055965c
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000559654
+ (_Bool)_processUpdateOnPowerManagementServiceForCharacteristicType:(id)arg1 value:(id)arg2 serviceType:(id)arg3 accessory:(id)arg4 accessoryTransaction:(id)arg5;	// IMP=0x00100000005590df
+ (_Bool)processUpdateForCharacteristicType:(id)arg1 value:(id)arg2 serviceType:(id)arg3 service:(id)arg4 serviceTransactionGetter:(CDUnknownBlockType)arg5 accessory:(id)arg6 accessoryTransaction:(id)arg7 accessoryTransactionChanged:(_Bool *)arg8;	// IMP=0x0010000000558259
+ (_Bool)validateProvidedName:(id)arg1;	// IMP=0x001000000055802f
+ (id)logCategory;	// IMP=0x0010000000557fff
+ (id)generateUUIDWithAccessoryUUID:(id)arg1 serviceID:(id)arg2;	// IMP=0x0010000000557f1f
- (void).cxx_destruct;	// IMP=0x00000000005566ab
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(retain, nonatomic) NSMutableDictionary *deviceLastRequestPresenceDateMap; // @synthesize deviceLastRequestPresenceDateMap=_deviceLastRequestPresenceDateMap;
@property(retain, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons; // @synthesize lastKnownOperatingStateAbnormalReasons=_lastKnownOperatingStateAbnormalReasons;
@property(retain, nonatomic) NSNumber *lastKnownOperatingState; // @synthesize lastKnownOperatingState=_lastKnownOperatingState;
@property(retain, nonatomic) NSNumber *lastKnownDiscoveryMode; // @synthesize lastKnownDiscoveryMode=_lastKnownDiscoveryMode;
@property(nonatomic) __weak id <HMDServiceOwner> owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSUUID *cachedAccessoryUUID; // @synthesize cachedAccessoryUUID=_cachedAccessoryUUID;
@property(nonatomic) unsigned long long serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *mediaSourceDisplayOrder; // @synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder;
@property(retain, nonatomic) NSNumber *mediaSourceIdentifier; // @synthesize mediaSourceIdentifier=_mediaSourceIdentifier;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(retain, nonatomic) HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(readonly, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSNumber *configurationState; // @synthesize configurationState=_configurationState;
@property(retain, nonatomic) NSString *serviceSubtype; // @synthesize serviceSubtype=_serviceSubtype;
@property(retain, nonatomic) NSNumber *labelNamespace; // @synthesize labelNamespace=_labelNamespace;
@property(retain, nonatomic) NSNumber *labelIndex; // @synthesize labelIndex=_labelIndex;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
- (_Bool)shouldUpdateLastSeenConfiguredName:(id)arg1;	// IMP=0x00000000005562fb
- (void)_writeConfiguredNameToAccessory:(id)arg1;	// IMP=0x00000000005561fc
- (void)_saveCurrentNameAsExpectedAndLastSeen:(id)arg1;	// IMP=0x00000000005560fe
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000555fee
- (void)fillCharacteristicsInServiceBackingStoreObject:(id)arg1;	// IMP=0x0000000000555d6d
- (void)populateModelObjectWithChangeType:(id)arg1 version:(long long)arg2;	// IMP=0x00000000005559d3
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000555983
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x00000000005558c8
- (void)_registerForMessages;	// IMP=0x0000000000555793
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_createAndRunTransactionWithName:(id)arg1 transaction:(id)arg2 message:(id)arg3;	// IMP=0x000000000055569c
- (void)updateMediaSourceDisplayOrder:(id)arg1 requestMessage:(id)arg2;	// IMP=0x000000000055568a
- (void)persistMediaSourceDisplayOrder:(id)arg1 requestMessage:(id)arg2;	// IMP=0x0000000000555598
- (_Bool)isEmptyConfiguredNameAllowed;	// IMP=0x0000000000555331
- (_Bool)updateCharacteristics:(id)arg1;	// IMP=0x0000000000554ad4
- (void)appDataRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000554a50
- (void)appDataUpdated:(id)arg1 message:(id)arg2;	// IMP=0x00000000005547e4
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000005545bd
- (void)_transactionServiceUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000552fd0
- (void)_processTransactionForNameComponents:(id)arg1 messagesToSendToAccessory:(id)arg2 result:(id)arg3;	// IMP=0x000000000055263d
- (void)_saveLastSeenAndExpectedConfiguredName:(id)arg1;	// IMP=0x00000000005524df
- (void)_saveForLastSeenConfiguredNameUpdate;	// IMP=0x00000000005520fb
- (void)_saveForExpectedConfiguredNameUpdate;	// IMP=0x0000000000551deb
- (id)_messagesForConfiguredNameChange;	// IMP=0x0000000000551d53
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000551adc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000550e2e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000055051e
- (void)updatePresenceRequestTimeForDeviceWithDestination:(id)arg1;	// IMP=0x0000000000550328
- (_Bool)shouldIncludePresenceForDeviceWithDestination:(id)arg1;	// IMP=0x0000000000550130
- (_Bool)shouldEnableDaemonRelaunch;	// IMP=0x000000000054febd
- (void)configureBulletinNotification;	// IMP=0x000000000054fe80
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000054fc7b
- (void)updateLastKnownValues;	// IMP=0x000000000054fb4c
- (id)getLastSeenConfiguredName;	// IMP=0x000000000054fb27
- (id)getConfiguredNameForXPCClients;	// IMP=0x000000000054faab
- (id)getConfiguredName;	// IMP=0x000000000054fa86
- (_Bool)updateAssociatedServiceType:(id)arg1 error:(id *)arg2;	// IMP=0x000000000054f999
- (id)messagesForUpdatedRoom:(id)arg1;	// IMP=0x000000000054f793
- (id)nameChangedMessage;	// IMP=0x000000000054f4f3
- (id)_checkIfDefaultNameChanged;	// IMP=0x000000000054f05b
- (void)_updateDefaultName;	// IMP=0x000000000054f00f
- (id)_deriveDefaultName;	// IMP=0x000000000054edad
- (id)findCharacteristicWithType:(id)arg1;	// IMP=0x000000000054ea62
- (id)findCharacteristic:(id)arg1;	// IMP=0x000000000054e88f
- (void)_readRequiredCharacteristicValuesForceReadFWVersion:(_Bool)arg1;	// IMP=0x000000000054e4fa
- (id)gatherRequiredReadRequestsForceReadFWVersion:(_Bool)arg1;	// IMP=0x000000000054e290
- (_Bool)isReadingRequiredForBTLEServiceCharacteristic:(id)arg1;	// IMP=0x000000000054df0a
- (id)_updateProvidedName:(id)arg1;	// IMP=0x000000000054dd2f
- (void)_shouldServiceBeHidden;	// IMP=0x000000000054da30
- (_Bool)_supportsBulletinNotification;	// IMP=0x000000000054d96a
- (void)_createNotification;	// IMP=0x000000000054d8e9
- (id)configureWithService:(id)arg1 accessory:(id)arg2 shouldRead:(_Bool)arg3 added:(_Bool)arg4;	// IMP=0x000000000054c101
- (id)_sanitizeNameToWriteToAccessory:(id)arg1;	// IMP=0x000000000054be55
- (id)configureWithService:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000054be3a
- (void)_handleSetAppData:(id)arg1;	// IMP=0x000000000054b873
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
- (id)logIdentifier;	// IMP=0x000000000054b6d7
@property(copy, nonatomic) NSString *lastSeenConfiguredName; // @synthesize lastSeenConfiguredName=_lastSeenConfiguredName;
@property(copy, nonatomic) NSString *expectedConfiguredName; // @synthesize expectedConfiguredName=_expectedConfiguredName;
@property(copy, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property(readonly, getter=isCustom) _Bool custom;
- (id)home;	// IMP=0x000000000054b2c8
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
@property(readonly, copy, nonatomic) NSString *type;
- (id)dumpState;	// IMP=0x000000000054a000
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_recalculateUUID;	// IMP=0x0000000000549780
- (void)dealloc;	// IMP=0x00000000005496ba
- (id)initWithAccessory:(id)arg1 owner:(id)arg2 instance:(id)arg3 uuid:(id)arg4;	// IMP=0x000000000054919a
- (id)initWithTransaction:(id)arg1 accessory:(id)arg2 owner:(id)arg3;	// IMP=0x00000000005489f7
- (id)init;	// IMP=0x000000000054894f
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;
- (id)_serviceSubtypeFromLinkedServicesForServiceType:(id)arg1 accessoryCategory:(id)arg2;	// IMP=0x000000000074292c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

