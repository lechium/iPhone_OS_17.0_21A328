//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFHomePublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class CLLocation, HMDHomeNFCReaderKey, HMDNaturalLightingContext, HMFSoftwareVersion, MKFHomeDatabaseID, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSUUID, Protocol;
@protocol MKFAccessory, MKFAccessoryNetworkProtectionGroup, MKFActionSet, MKFAirPlayAccessory, MKFAppleMediaAccessory, MKFApplicationData, MKFDevice, MKFEventTrigger, MKFGuestAccessCode, MKFHAPAccessory, MKFHomeMediaSetting, MKFHomeNetworkRouterManagingDeviceSetting, MKFHomeNetworkRouterSetting, MKFHomePerson, MKFHomePersonManagerSetting, MKFHomeSoftwareUpdateSetting, MKFHomeThreadNetwork, MKFOutgoingInvitation, MKFRemovedUserAccessCode, MKFResident, MKFRoom, MKFServiceGroup, MKFTimerTrigger, MKFTrigger, MKFUser, MKFZone;

@protocol MKFHome <MKFModel, MKFHomePublicExtensions>
@property(readonly, copy, nonatomic) MKFHomeDatabaseID *databaseID;
@property(readonly, retain, nonatomic) NSArray *zones;
@property(readonly, retain, nonatomic) NSArray *users;
@property(readonly, retain, nonatomic) NSArray *triggers;
@property(retain, nonatomic) id <MKFHomeThreadNetwork> threadNetwork;
@property(readonly, retain, nonatomic) NSArray *settings;
@property(readonly, retain, nonatomic) NSArray *serviceGroups;
@property(readonly, retain, nonatomic) NSArray *rooms;
@property(readonly, retain, nonatomic) NSArray *residents;
@property(readonly, retain, nonatomic) NSArray *removedAccessCodes;
@property(retain, nonatomic) id <MKFDevice> primaryResident;
@property(readonly, retain, nonatomic) NSArray *persons;
@property(retain, nonatomic) id <MKFUser> owner;
@property(readonly, retain, nonatomic) NSArray *networkProtectionGroups;
@property(readonly, retain, nonatomic) NSArray *invitations;
@property(readonly, retain, nonatomic) NSArray *guestAccessCodes;
@property(retain, nonatomic) id <MKFRoom> defaultRoom;
@property(retain, nonatomic) id <MKFApplicationData> applicationData;
@property(readonly, retain, nonatomic) NSArray *actionSets;
@property(readonly, retain, nonatomic) NSArray *accessories;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(copy, nonatomic) NSNumber *soundCheckEnabled;
@property(copy, nonatomic) NSNumber *siriPhraseOptions;
@property(retain, nonatomic) HMFSoftwareVersion *sharedHomeSourceVersion;
@property(copy, nonatomic) NSNumber *presenceComputeStatus;
@property(copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property(retain, nonatomic) NSData *ownerPublicKey;
@property(copy, nonatomic) NSNumber *owned;
@property(retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property(copy, nonatomic) NSNumber *networkProtectionMode;
@property(retain, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSNumber *multiUserEnabled;
@property(retain, nonatomic) NSDictionary *matterKeyValueStore;
@property(copy, nonatomic) NSDate *locationUpdateTimeStamp;
@property(copy, nonatomic) NSNumber *locationServicesEnabled;
@property(retain, nonatomic) CLLocation *location;
@property(copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property(copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property(copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property(copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property(copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property(copy, nonatomic) NSNumber *didOnboardLocationServices;
@property(copy, nonatomic) NSNumber *didOnboardAnalysis;
@property(copy, nonatomic) NSDate *creationDate;
@property(copy, nonatomic) NSNumber *analysisOptions;
- (void)synchronizeZonesRelationWith:(NSArray *)arg1;
- (id <MKFZone>)findZonesRelationWithModelID:(NSUUID *)arg1;
- (id <MKFZone>)materializeOrCreateZonesRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)synchronizeUsersRelationWith:(NSArray *)arg1;
- (id <MKFUser>)findUsersRelationWithModelID:(NSUUID *)arg1;
- (id <MKFUser>)materializeOrCreateUsersRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)synchronizeTriggersRelationWith:(NSArray *)arg1;
- (id <MKFTimerTrigger>)findTriggersRelationOfTypeTimerTriggerWithModelID:(NSUUID *)arg1;
- (id <MKFTimerTrigger>)createTriggersRelationOfTypeTimerTriggerWithModelID:(NSUUID *)arg1;
- (id <MKFTimerTrigger>)materializeOrCreateTriggersRelationOfTypeTimerTriggerWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFEventTrigger>)findTriggersRelationOfTypeEventTriggerWithModelID:(NSUUID *)arg1;
- (id <MKFEventTrigger>)createTriggersRelationOfTypeEventTriggerWithModelID:(NSUUID *)arg1;
- (id <MKFEventTrigger>)materializeOrCreateTriggersRelationOfTypeEventTriggerWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFTrigger>)createTriggersRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (id <MKFTrigger>)materializeOrCreateTriggersRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(_Bool *)arg3;
- (id <MKFHomeThreadNetwork>)materializeOrCreateThreadNetworkRelation:(_Bool *)arg1;
- (id <MKFHomeSoftwareUpdateSetting>)findSettingsRelationOfTypeHomeSoftwareUpdateSetting;
- (id <MKFHomeSoftwareUpdateSetting>)materializeOrCreateSettingsRelationOfTypeHomeSoftwareUpdateSetting:(_Bool *)arg1;
- (id <MKFHomePersonManagerSetting>)findSettingsRelationOfTypeHomePersonManagerSetting;
- (id <MKFHomePersonManagerSetting>)materializeOrCreateSettingsRelationOfTypeHomePersonManagerSetting:(_Bool *)arg1;
- (id <MKFHomeNetworkRouterSetting>)findSettingsRelationOfTypeHomeNetworkRouterSetting;
- (id <MKFHomeNetworkRouterSetting>)materializeOrCreateSettingsRelationOfTypeHomeNetworkRouterSetting:(_Bool *)arg1;
- (id <MKFHomeNetworkRouterManagingDeviceSetting>)findSettingsRelationOfTypeHomeNetworkRouterManagingDeviceSetting;
- (id <MKFHomeNetworkRouterManagingDeviceSetting>)materializeOrCreateSettingsRelationOfTypeHomeNetworkRouterManagingDeviceSetting:(_Bool *)arg1;
- (id <MKFHomeMediaSetting>)findSettingsRelationOfTypeHomeMediaSetting;
- (id <MKFHomeMediaSetting>)materializeOrCreateSettingsRelationOfTypeHomeMediaSetting:(_Bool *)arg1;
- (void)synchronizeServiceGroupsRelationWith:(NSArray *)arg1;
- (id <MKFServiceGroup>)findServiceGroupsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFServiceGroup>)materializeOrCreateServiceGroupsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)synchronizeRoomsRelationWith:(NSArray *)arg1;
- (id <MKFRoom>)findRoomsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFRoom>)materializeOrCreateRoomsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)removeResidentsObject:(id <MKFResident>)arg1;
- (void)addResidentsObject:(id <MKFResident>)arg1;
- (id <MKFResident>)findResidentsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFResident>)materializeOrCreateResidentsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)removeRemovedAccessCodesObject:(id <MKFRemovedUserAccessCode>)arg1;
- (void)addRemovedAccessCodesObject:(id <MKFRemovedUserAccessCode>)arg1;
- (id <MKFRemovedUserAccessCode>)findRemovedAccessCodesRelationWithModelID:(NSUUID *)arg1;
- (id <MKFRemovedUserAccessCode>)materializeOrCreateRemovedAccessCodesRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)removePersonsObject:(id <MKFHomePerson>)arg1;
- (void)addPersonsObject:(id <MKFHomePerson>)arg1;
- (id <MKFHomePerson>)findPersonsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFHomePerson>)materializeOrCreatePersonsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFAccessoryNetworkProtectionGroup>)materializeOrCreateNetworkProtectionGroupsRelation:(_Bool *)arg1;
- (void)synchronizeInvitationsRelationWith:(NSArray *)arg1;
- (id <MKFOutgoingInvitation>)findInvitationsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFOutgoingInvitation>)materializeOrCreateInvitationsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)removeGuestAccessCodesObject:(id <MKFGuestAccessCode>)arg1;
- (void)addGuestAccessCodesObject:(id <MKFGuestAccessCode>)arg1;
- (id <MKFGuestAccessCode>)findGuestAccessCodesRelationWithModelID:(NSUUID *)arg1;
- (id <MKFGuestAccessCode>)materializeOrCreateGuestAccessCodesRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFApplicationData>)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;
- (void)synchronizeActionSetsRelationWith:(NSArray *)arg1;
- (id <MKFActionSet>)findActionSetsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFActionSet>)materializeOrCreateActionSetsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)synchronizeAccessoriesRelationWith:(NSArray *)arg1;
- (id <MKFHAPAccessory>)findAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFHAPAccessory>)createAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFHAPAccessory>)materializeOrCreateAccessoriesRelationOfTypeHAPAccessoryWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFAppleMediaAccessory>)findAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFAppleMediaAccessory>)createAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFAppleMediaAccessory>)materializeOrCreateAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFAirPlayAccessory>)findAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFAirPlayAccessory>)createAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1;
- (id <MKFAirPlayAccessory>)materializeOrCreateAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFAccessory>)createAccessoriesRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (id <MKFAccessory>)materializeOrCreateAccessoriesRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(_Bool *)arg3;
@end
