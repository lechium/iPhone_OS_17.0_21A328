//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADCommunalDeviceUser, ADHomeInfoManager, ADPreferences, AFInstanceContext, MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, SAHomeMemberInfo, SAMultiUserInfo, SSRVoiceProfileManager;
@protocol OS_dispatch_queue;

@interface ADMultiUserService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long multiUserSignpost;	// 16 = 0x10
    unsigned long long multiUserDownloadSignpost;	// 24 = 0x18
    SAHomeMemberInfo *_saUnknownUser;	// 32 = 0x20
    NSMutableDictionary *_sharedUsersByHomeUserUUID;	// 40 = 0x28
    NSMutableDictionary *_sharedUsersByiCloudAltDSID;	// 48 = 0x30
    NSMutableDictionary *_homeUserSettings;	// 56 = 0x38
    NSArray *_pitchesForHomeMembers;	// 64 = 0x40
    SAMultiUserInfo *_multiUserInfo;	// 72 = 0x48
    NSMutableSet *_ghostVoiceProfileSharedUserIDs;	// 80 = 0x50
    NSMutableSet *_inFlightVoiceProfilesByUUID;	// 88 = 0x58
    NSXPCListener *_multiUserListener;	// 96 = 0x60
    int _liveOnToken;	// 104 = 0x68
    _Bool _primaryUserIsFromLiveOnApp;	// 108 = 0x6c
    NSMutableArray *_usersWithAvailableVoiceProfiles;	// 112 = 0x70
    NSString *_userWithRMVEnabledDuringBuddy;	// 120 = 0x78
    NSString *_currentLanguage;	// 128 = 0x80
    double _lastProfilesDownloadAttemptTime;	// 136 = 0x88
    unsigned long long _outOfSyncDownloadAttemptCount;	// 144 = 0x90
    AFInstanceContext *_instanceContext;	// 152 = 0x98
    SSRVoiceProfileManager *_voiceProfileManager;	// 160 = 0xa0
    ADPreferences *_adPreferences;	// 168 = 0xa8
    ADHomeInfoManager *_homeInfoManager;	// 176 = 0xb0
    _Bool _primaryUserMeDevice;	// 184 = 0xb8
    NSMutableDictionary *_sharedUsersMeDeviceBySharedUserID;	// 192 = 0xc0
    NSString *_primaryUserSiriLanguage;	// 200 = 0xc8
    NSMutableDictionary *_sharedUsersSiriLanguageBySharedUserID;	// 208 = 0xd0
    NSMutableDictionary *_sharedUsersSiriCloudSyncBySharedUserID;	// 216 = 0xd8
    NSMutableDictionary *_iCloudAltDSIDByHomeUserID;	// 224 = 0xe0
    NSMutableSet *_useriCloudAltDSIDsSettingRmVFromTV;	// 232 = 0xe8
    NSMutableSet *_homeUserIDsToBeOnboarded;	// 240 = 0xf0
    _Bool _isMultiUserInfoDirty;	// 248 = 0xf8
    NSMutableDictionary *_sharedUsersBySharedUserID;	// 256 = 0x100
    ADCommunalDeviceUser *_primaryUser;	// 264 = 0x108
    ADCommunalDeviceUser *_deviceOwner;	// 272 = 0x110
    NSString *_cachedAssistantDataUnredactedAnchor;	// 280 = 0x118
    NSDictionary *_rawScores;	// 288 = 0x120
}

+ (id)sharedService;	// IMP=0x002000000024969f
- (void).cxx_destruct;	// IMP=0x002000000023effd
@property(copy, nonatomic) NSDictionary *rawScores; // @synthesize rawScores=_rawScores;
@property(retain) NSString *cachedAssistantDataUnredactedAnchor; // @synthesize cachedAssistantDataUnredactedAnchor=_cachedAssistantDataUnredactedAnchor;
@property _Bool isMultiUserInfoDirty; // @synthesize isMultiUserInfoDirty=_isMultiUserInfoDirty;
@property(readonly, nonatomic) ADCommunalDeviceUser *deviceOwner; // @synthesize deviceOwner=_deviceOwner;
@property(retain, nonatomic) ADCommunalDeviceUser *primaryUser; // @synthesize primaryUser=_primaryUser;
@property(retain, nonatomic) NSMutableDictionary *sharedUsersBySharedUserID; // @synthesize sharedUsersBySharedUserID=_sharedUsersBySharedUserID;
- (id)_confidenceScoreForSharedUserID:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(long long)arg3 confidenceScores:(id)arg4;	// IMP=0x001000000023edf5
- (id)confidenceScoresForMultiUserTestingExpectedSpeakerSharedUserID:(id)arg1 expectedSpeakerConfidenceScore:(long long)arg2 nonspeakerConfidenceScores:(id)arg3;	// IMP=0x001000000023ec9d
- (oneway void)getSharedUserInfoForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023ebcf
- (id)currentOwnerSharedUserID;	// IMP=0x001000000023eb16
- (void)getIDSIdentifierForAssistantId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023e968
- (oneway void)getPreferredMediaUserHomeUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023e87f
- (oneway void)homeUserIdToNames:(CDUnknownBlockType)arg1;	// IMP=0x001000000023e7d5
- (oneway void)getMultiUserAudioAppSignalsForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023e6a5
- (oneway void)getMultiUserSettingsForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023e575
- (oneway void)getMultiUserSettingsForRecognizedUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023e48c
- (oneway void)getiCloudAltDSIDOfRecognizedUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023e3a3
- (oneway void)getHomeUserIdOfRecognizedUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023e2ba
- (oneway void)getRecognizableUsersConfromingSharedUserIds:(CDUnknownBlockType)arg1;	// IMP=0x001000000023e1d1
- (oneway void)getConformingSharedUserIds:(CDUnknownBlockType)arg1;	// IMP=0x001000000023e0e8
- (oneway void)getConformingSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023dfb6
- (oneway void)getFirstNameForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023de86
- (oneway void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023dcca
- (oneway void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023db0e
- (_Bool)getAllowExplicitContentSettingForRecognizedUser;	// IMP=0x001000000023da11
- (id)getSharedUserIdForHomeUserId:(id)arg1;	// IMP=0x001000000023d8ff
- (id)getSyncableSharedUserIdsForSharedUserIds:(id)arg1;	// IMP=0x001000000023d801
- (id)getSyncableSharedUserIdForSharedUserId:(id)arg1;	// IMP=0x001000000023d703
- (id)getSharedUserIdForShareOwnerName:(id)arg1;	// IMP=0x001000000023d5f4
- (_Bool)_profileLimitReached;	// IMP=0x001000000023d5b7
- (void)setShareOwnerName:(id)arg1 homeMemberSettings:(id)arg2 audioAppSignals:(id)arg3 loggingAllowed:(_Bool)arg4 forSharedUserId:(id)arg5;	// IMP=0x001000000023d48e
- (void)setEnrollmentName:(id)arg1 forHomeUser:(id)arg2;	// IMP=0x001000000023d3bb
- (void)updateMultiUserWithSharedUserId:(id)arg1 companionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023ce84
- (void)triggerMultiUserMetricsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023cd23
- (void)updateVoiceProfiles;	// IMP=0x001000000023cc58
- (void)_removeGhostVoiceProfiles;	// IMP=0x001000000023cbc0
- (void)_trackGhostVoiceProfile:(id)arg1;	// IMP=0x001000000023cad4
- (id)_getUserAgentStringForSharedUserID:(id)arg1;	// IMP=0x001000000023c9ea
- (oneway void)getUserAgentStringForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023c917
- (id)getUserAgentStringForSharedUserID:(id)arg1;	// IMP=0x001000000023c80f
- (void)voiceProfilesOutOfSync;	// IMP=0x001000000023c736
- (void)resetAllUsers;	// IMP=0x001000000023c6eb
- (id)validateAndReturnScores:(id)arg1 classifiedUser:(id)arg2 donatedScores:(id)arg3 unknownUserSharedId:(id *)arg4 totalUsers:(unsigned long long *)arg5 ghostVoiceProfileDetected:(_Bool *)arg6;	// IMP=0x001000000023c22e
- (id)sharedRemoteDevices;	// IMP=0x001000000023c192
- (id)_generateDeviceUserWithHomeUserUUID:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 adaccount:(id)arg4;	// IMP=0x001000000023bcf6
- (void)fetchDeviceOwnerAsSAMultiUserInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000023bb72
- (id)multiUserSAObject;	// IMP=0x001000000023bab9
- (void)dumpAssistantStateChunk:(CDUnknownBlockType)arg1;	// IMP=0x001000000023b72a
- (void)showMultiUserSharedUserIDsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023b693
- (void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023b5fc
- (void)showMultiUserCompanionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023b565
- (void)showMultiUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000023b4ce
- (id)homeUserIdToNames;	// IMP=0x001000000023afc9
- (void)removeUserWithSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023ae67
- (void)removeUserWithHomeUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000023ad05
- (void)_postRemovalStateCleanup;	// IMP=0x001000000023acca
- (_Bool)_removeUser:(id)arg1 homeUserID:(id)arg2 sharedUserID:(id)arg3 iCloudAltDSID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000023a174
- (void)_logRelevantAnalyticsOnUserAddedWithSharedUserID:(id)arg1 isPrimary:(_Bool)arg2;	// IMP=0x001000000023a077
- (void)removeUserWithShareOwnerNames:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000239f09
- (void)removeDeviceOwner;	// IMP=0x0010000000239e43
- (void)_addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 nonCloudSyncedUser:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000238d84
- (void)addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 nonCloudSyncedUser:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000238ad5
- (void)addUser:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000238aaf
- (void)_addDeviceOwner:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 audioAppSignals:(id)arg5 enrollmentName:(id)arg6 companionInfo:(id)arg7 shareOwnerName:(id)arg8 homeMemberSettings:(id)arg9 loggingAllowed:(_Bool)arg10 completion:(CDUnknownBlockType)arg11;	// IMP=0x00100000002383bd
- (MISSING_TYPE *)_updateDeviceOwner:sharedUserId:enrollmentName:companionInfo:shareOwnerName:homeMemberSettings:loggingAllowed: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000236f52
- (void)addDeviceOwner:(id)arg1 sharedUserId:(id)arg2 loggableSharedUserId:(id)arg3 iCloudAltDSID:(id)arg4 audioAppSignals:(id)arg5 enrollmentName:(id)arg6 companionInfo:(id)arg7 shareOwnerName:(id)arg8 homeMemberSettings:(id)arg9 loggingAllowed:(_Bool)arg10 completion:(CDUnknownBlockType)arg11;	// IMP=0x0010000000236c14
- (void)_deleteShareForUser:(id)arg1;	// IMP=0x0010000000236c0e
- (void)_allowVoiceIdentificationForThisUser:(id)arg1 iCloudAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000236727
- (_Bool)_updateNonHomeUserSettings:(id)arg1;	// IMP=0x00100000002364f3
- (_Bool)_updateHomeKitSettings:(id)arg1;	// IMP=0x00100000002363c3
- (void)_updateHomeKitSettingsForDeviceOwner;	// IMP=0x0010000000236239
- (_Bool)_homeKitSettingsDidChangeForDeviceOwner;	// IMP=0x0010000000236150
- (void)_updateCommunalDeviceUser:(id)arg1 withSettings:(id)arg2;	// IMP=0x0010000000235dc1
- (_Bool)personalDomainSettingsDidChange:(id)arg1 newUserSettings:(id)arg2;	// IMP=0x0010000000235c89
- (void)_saveDeviceOwnerToKeychainCache;	// IMP=0x00100000002359db
- (void)_setSharedUserSiriLanguage:(id)arg1 forSharedUser:(id)arg2;	// IMP=0x00100000002358bc
- (void)_setPrimaryUserSiriLanguage:(id)arg1;	// IMP=0x0010000000235801
- (void)_setSharedUserMeDevice:(_Bool)arg1 forSharedUser:(id)arg2;	// IMP=0x00100000002356c1
- (void)_setPrimaryUserMeDevice:(_Bool)arg1;	// IMP=0x001000000023561a
- (void)_saveSharedUsers;	// IMP=0x0010000000234f13
- (void)_savePrimaryAndDeviceOwner;	// IMP=0x0010000000234d64
- (void)_updateSAMultiUserInfo;	// IMP=0x00100000002338a6
- (void)_describeSAMultiUserInfo:(id)arg1;	// IMP=0x00100000002335e5
- (unsigned long long)countUsersWithMatchingSiriLanguage;	// IMP=0x0010000000232e3d
- (unsigned long long)countUsersWithLocationServicesEnabled;	// IMP=0x00100000002327c0
- (unsigned long long)countUsersWithPersonalRequestsEnabled;	// IMP=0x00100000002322aa
- (unsigned long long)countUsersWithSiriCloudSyncEnabled;	// IMP=0x0010000000231d52
- (unsigned long long)addIfSiriCloudSyncEnabledForUser:(id)arg1;	// IMP=0x00100000002319b1
- (unsigned long long)countVoiceProfiles;	// IMP=0x0010000000231925
- (unsigned long long)_countVoiceProfiles;	// IMP=0x0010000000231836
- (_Bool)_updateVoiceProfileInfo;	// IMP=0x00100000002312be
- (void)_untrackAllHomeUserUUIDsForInFlightVoiceProfile;	// IMP=0x00100000002311be
- (_Bool)_isTrackingUUIDForInFlightVoiceProfile:(id)arg1;	// IMP=0x0010000000231046
- (void)_untrackUUIDsForUser:(id)arg1;	// IMP=0x0010000000230f78
- (void)_untrackHomeUserUUIDForInFlightVoiceProfile:(id)arg1;	// IMP=0x0010000000230e05
- (void)_trackHomeUserUUIDForInFlightVoiceProfile:(id)arg1;	// IMP=0x0010000000230c92
- (id)_inFlightVoiceProfilesByUUID;	// IMP=0x0010000000230c57
- (id)getDeviceOwnerSharedUserId;	// IMP=0x0010000000230c07
- (_Bool)_isCurrentLanguageMultiUserCompatible;	// IMP=0x0010000000230b11
- (_Bool)_isHostingMultiUserLanguage;	// IMP=0x0010000000230aff
- (_Bool)isMultiUserAvailable;	// IMP=0x0010000000230af7
- (void)_forceCloudSyncedUserDownload:(CDUnknownBlockType)arg1;	// IMP=0x00100000002309db
- (void)_resetAllUsers;	// IMP=0x001000000023074d
- (void)_resetPrimaryUser;	// IMP=0x0010000000230613
- (void)_loadCloudSyncedUsersFromCache;	// IMP=0x001000000022fcab
- (void)_updateMappingsForSharedUser:(id)arg1;	// IMP=0x001000000022fb93
- (void)_refreshUsersAndVoiceProfiles:(_Bool)arg1;	// IMP=0x001000000022ee1b
- (void)refreshHomeKitOnboardedUsers;	// IMP=0x001000000022edd0
- (void)_homeInfoDidChange:(id)arg1;	// IMP=0x001000000022edbe
- (void)_primaryUserSharedUserIdentifierDidChangeNotification:(id)arg1;	// IMP=0x001000000022ed73
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000022ed54
- (_Bool)_multiUserListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000022eb21
- (void)_setupMultiUserListener;	// IMP=0x001000000022e9bd
- (id)_allUsersBySharedUserID;	// IMP=0x001000000022e87a
- (id)allUsersBySharedUserID;	// IMP=0x001000000022e7a3
- (void)_languageCodeDidChange;	// IMP=0x001000000022e758
- (void)dealloc;	// IMP=0x001000000022e6af
- (id)_initWithPreferences:(id)arg1 ssrManager:(id)arg2 homeInfoManager:(id)arg3;	// IMP=0x001000000022e29e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

