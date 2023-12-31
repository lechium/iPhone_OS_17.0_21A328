//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDeviceCapabilitiesModel, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDeviceCapabilities : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDDeviceCapabilitiesModel *_objectModel;	// 16 = 0x10
    _Bool _messagedHomePodSettingsFeatureEnabled;	// 24 = 0x18
}

+ (id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1;	// IMP=0x0010000000a52ad7
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000a52acf
+ (unsigned long long)supportedPairingCapabilities;	// IMP=0x0010000000a52a75
+ (_Bool)supportsAudioDestinationCreation;	// IMP=0x0010000000a52a15
+ (_Bool)supportsAudioDestinationControllerCreation;	// IMP=0x0010000000a529b5
+ (id)logCategory;	// IMP=0x0010000000a52985
+ (id)deviceCapabilities;	// IMP=0x0010000000a52955
+ (_Bool)supportsSiriUnsecuringActionsWithWatchAuth;	// IMP=0x0010000000a52905
+ (_Bool)supportsSiriUnsecuringActionsWithNoPasscode;	// IMP=0x0010000000a528fd
+ (_Bool)supportsHostingLocalTempAndHumiditySensor;	// IMP=0x0010000000a528a0
+ (_Bool)supportsStereoPairingV3;	// IMP=0x0010000000a52898
+ (_Bool)supportsStereoPairingV2;	// IMP=0x0010000000a52890
+ (_Bool)supportsStereoPairingV1;	// IMP=0x0010000000a52888
+ (_Bool)supportsBulletinBoard;	// IMP=0x0010000000a52831
+ (_Bool)supportsHomeKitDataStream;	// IMP=0x0010000000a527da
+ (_Bool)isCompanionCapable;	// IMP=0x0010000000a5278a
+ (_Bool)supportsBackboard;	// IMP=0x0010000000a5272d
+ (_Bool)supportsSyncingToSharedUsers;	// IMP=0x0010000000a526d0
+ (_Bool)supportsAddingAccessory;	// IMP=0x0010000000a5263e
+ (_Bool)supportsBidirectionalAudioForCameraStreaming;	// IMP=0x0010000000a525e1
+ (_Bool)supportsReceivingRemoteCameraStream;	// IMP=0x0010000000a52584
+ (_Bool)supportsDismissUserNotificationAndDialog;	// IMP=0x0010000000a52527
+ (_Bool)supportsUserNotifications;	// IMP=0x0010000000a524ca
+ (_Bool)supportsCameraSnapshotRequestViaRelay;	// IMP=0x0010000000a5246d
+ (_Bool)supportsTargetControllerAutoConfigure;	// IMP=0x0010000000a5235b
+ (_Bool)supportsRemoteAccess;	// IMP=0x0010000000a522fe
+ (_Bool)requiresHomePod2ndGenPairing;	// IMP=0x0010000000a522e4
+ (_Bool)requiresHomePodMiniPairing;	// IMP=0x0010000000a522ca
+ (unsigned long long)appleMediaAccessoryVariant;	// IMP=0x0010000000a522c2
+ (_Bool)isAppleMediaAccessory;	// IMP=0x0010000000a521c1
+ (_Bool)supportsCustomerReset;	// IMP=0x0010000000a5216f
+ (_Bool)supportsDeviceLock;	// IMP=0x0010000000a52112
+ (_Bool)supportsSymptomsHandler;	// IMP=0x0010000000a520b5
+ (_Bool)supportsIntentDonation;	// IMP=0x0010000000a52058
+ (_Bool)supportsHomeApp;	// IMP=0x0010000000a51ffb
+ (_Bool)supportsLocalization;	// IMP=0x0010000000a51fab
- (void).cxx_destruct;	// IMP=0x0000000000a4c7df
@property(nonatomic, getter=isMessagedHomePodSettingsFeatureEnabled) _Bool messagedHomePodSettingsFeatureEnabled; // @synthesize messagedHomePodSettingsFeatureEnabled=_messagedHomePodSettingsFeatureEnabled;
- (id)modelBackedObjects;	// IMP=0x0000000000a4c76f
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x0000000000a4c6d7
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x0000000000a4c679
@property(copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000a4bd5b
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000a4bbe5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a4ba94
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a4b914
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a4b88c
@property(readonly, nonatomic) _Bool supportsEventLog;
@property(readonly) _Bool supportsJustSiri;
@property(readonly) _Bool supportsRMVonAppleTV;
@property(readonly, nonatomic) _Bool supportsCustomMediaApplicationDestination;
@property(readonly, nonatomic) _Bool supportsMessagedHomePodSettings;
@property(readonly, nonatomic) _Bool supportsResidentFirstAccessoryCommunication;
@property(readonly, nonatomic) _Bool supportsModernTransport;
@property(readonly, nonatomic) _Bool supportsCaptiveNetworks;
@property(readonly, nonatomic) _Bool supportsUnifiedMediaNotifications;
@property(readonly, nonatomic) _Bool supportsCHIP;
@property(readonly, nonatomic) _Bool supportsCameraPackageDetection;
@property(readonly, nonatomic) _Bool supportsLockNotificationContext;
@property(readonly, nonatomic) _Bool supportsMatterSharedAdminPairing;
@property(readonly, nonatomic) _Bool supportsThreadNetworkCredentialSharing;
@property(readonly, nonatomic) _Bool supportsWakeOnLAN;
@property(readonly, nonatomic) _Bool supportsThreadBorderRouter;
@property(readonly) _Bool supportsPreferredMediaUser;
@property(readonly) _Bool supportsThirdPartyMusic;
@property(readonly) _Bool supportsHomeHub;
@property(readonly) _Bool supportsSiriEndpointSetup;
@property(readonly) _Bool supportsDoorbellChime;
@property(readonly, nonatomic) _Bool supportsDropIn;
@property(readonly, nonatomic) _Bool supportsAudioAnalysis;
@property(readonly, nonatomic) _Bool supportsAnnounce;
@property(readonly, nonatomic) _Bool supportsCameraRecordingReachabilityNotifications;
@property(readonly, nonatomic) _Bool supportsIDSActivityMonitorPresence;
@property(readonly, nonatomic) _Bool supportsAccessCodes;
@property(readonly, nonatomic) _Bool supportsWalletKey;
@property(readonly, nonatomic) _Bool supportsNaturalLighting;
@property(readonly, nonatomic) _Bool supportsManagedConfigurationProfile;
@property(readonly, nonatomic) _Bool supportsFaceClassification;
@property(readonly, nonatomic) _Bool supportsCoordinationDoorbellChime;
@property(readonly, nonatomic) _Bool supportsMusicAlarm;
@property(readonly, nonatomic) _Bool supportsCameraActivityZones;
@property(readonly, nonatomic) _Bool supportsResidentFirmwareUpdate;
@property(readonly, nonatomic) _Bool supportsFirmwareUpdate;
@property(readonly, nonatomic) _Bool supportsCameraSignificantEventNotifications;
@property(readonly, nonatomic) _Bool supportsMediaActions;
@property(readonly, nonatomic) _Bool supportsShortcutActions;
@property(readonly, nonatomic) _Bool supportsRouterManagement;
@property(readonly, nonatomic) _Bool supportsCameraRecording;
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) _Bool supportsAudioReturnChannel;
@property(readonly, nonatomic) _Bool supportsMultiUser;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsHomeInvitation;
@property(readonly, nonatomic, getter=isRemoteGatewayCapable) _Bool remoteGatewayCapable;
@property(readonly, nonatomic) _Bool isResidentCapable;
@property(readonly, nonatomic) _Bool supportsAssistantAccessControl;
@property(readonly, nonatomic) _Bool supportsWholeHouseAudio;
@property(readonly, nonatomic) _Bool supportsCloudDataSync;
@property(readonly, nonatomic) _Bool supportsStandaloneMode;
@property(readonly, nonatomic) _Bool supportsKeyTransferServer;
@property(readonly, nonatomic) _Bool supportsKeyTransferClient;
@property(readonly, nonatomic) _Bool supportsDeviceSetup;
@property(readonly, nonatomic) _Bool supportsKeychainSync;
- (id)attributeDescriptions;	// IMP=0x0000000000a48d60
- (id)shortDescription;	// IMP=0x0000000000a4840f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a47a33
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;	// IMP=0x0000000000a47632
- (id)initWithProductInfo:(id)arg1 mobileGestaltClient:(id)arg2 homekitVersion:(id)arg3;	// IMP=0x0000000000a46642
- (id)initWithProductInfo:(id)arg1 mobileGestaltClient:(id)arg2;	// IMP=0x0000000000a4662d
- (id)initWithProductInfo:(id)arg1;	// IMP=0x0000000000a46616

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isResidentCapable) _Bool residentCapable;
@property(readonly) Class superclass;

@end

